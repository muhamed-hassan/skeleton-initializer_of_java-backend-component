#ifndef LAUNCHER_H
#define LAUNCHER_H

#include <iostream>
#include "project-skeleton.h"
#include "../components/web-interface-component.h"
#include "../components/web-interface-with-messaging-component.h"

using namespace std;

void startComponentGeneration(string componentPurpose, string outputDirectory, string projectName) {
    generateProjectLayout(outputDirectory, projectName);
    generateGitRepositoryStarter(outputDirectory, projectName);
    generateGitignore(outputDirectory, projectName);
    generateReadme(outputDirectory, projectName);
    generateAppEntryPoint(outputDirectory, projectName);
    generateProfilingConfigurationsOfDb(outputDirectory, projectName);
    generateDbDirectory(outputDirectory, projectName);

    generatePomBof(outputDirectory, projectName);
    cout << "    > adding dependencies to pom.xml" << endl;

    if (componentPurpose.compare("web-interface") == 0) {
        addDependenciesOfWebInterfaceComponent(outputDirectory, projectName);
        generateWebInterfaceComponent(outputDirectory, projectName);

    } else if (componentPurpose.compare("web-interface-with-messaging") == 0) {
        addDependenciesOfWebInterfaceComponent(outputDirectory, projectName);
        addMessagingDependencyToPom(outputDirectory, projectName);
        generateProfilingConfigurationsOfMb(outputDirectory, projectName);
        generateWebInterfaceComponentWithMessaging(outputDirectory, projectName);

    } else if (componentPurpose.compare("scheduled-jobs") == 0) {
        addCoreDependencyToPom(outputDirectory, projectName);
        addDbDependencyToPom(outputDirectory, projectName);
        //generateScheduledJobsComponent(outputDirectory, projectName);

    } else if (componentPurpose.compare("scheduled-jobs-with-messaging") == 0) {
        addCoreDependencyToPom(outputDirectory, projectName);
        addDbDependencyToPom(outputDirectory, projectName);
        addMessagingDependencyToPom(outputDirectory, projectName);
        generateProfilingConfigurationsOfMb(outputDirectory, projectName);
        //generateScheduledJobsComponentWithMessaging(outputDirectory, projectName);

    } else if (componentPurpose.compare("authentication-component") == 0) {
        addDependenciesOfWebInterfaceComponent(outputDirectory, projectName);
        //generateAuthenticationComponent(outputDirectory, projectName);

    } else if (componentPurpose.compare("users-administration-component") == 0) {
        addDependenciesOfWebInterfaceComponent(outputDirectory, projectName);
        //generateUsersAdministrationComponent(outputDirectory, projectName);

    }

    generatePomEof(outputDirectory, projectName);
}

#endif
