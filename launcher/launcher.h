#include <iostream>
#include "project-skeleton.h"
#include "../components/web-interface-component.h"

using namespace std;

/*
#include "web-interface-component-with-messaging.h"
#include "scheduled-jobs-component.h"
#include "scheduled-jobs-component-with-messaging.h"
#include "authentication-component.h"
#include "users-administration-component.h"
*/

void startComponentGeneration(string projectName, string componentPurpose, string outputDirectory) {
    generateProjectLayout(projectName, outputDirectory);
    generateGitRepositoryStarter(projectName, outputDirectory);
    generateGitignore(projectName, outputDirectory);
    generateReadme(projectName, outputDirectory);
    generateAppEntryPoint(projectName, outputDirectory);
    generateProfilingConfigurationsOfDb(projectName, outputDirectory);
    generateDbDirectory(projectName, outputDirectory);

    generatePomBof(projectName, outputDirectory);
    cout << "    > adding dependencies to pom.xml" << endl;

    // TODO: start working on this unit
    if (componentPurpose.compare("web-interface") == 0) {
        addSecurityDependencyToPom(projectName, outputDirectory);
        addWebDependencyToPom(projectName, outputDirectory);
        addDbDependencyToPom(projectName, outputDirectory);
        generateWebInterfaceComponent(projectName, outputDirectory);
    } else if (componentPurpose.compare("web-interface-with-messaging") == 0) {
        addSecurityDependencyToPom(projectName, outputDirectory);
        addWebDependencyToPom(projectName, outputDirectory);
        addDbDependencyToPom(projectName, outputDirectory);
        addMessagingDependencyToPom(projectName, outputDirectory);
        generateProfilingConfigurationsOfMb(projectName, outputDirectory);
        //generateWebInterfaceComponentWithMessaging(projectName, outputDirectory);
    } else if (componentPurpose.compare("scheduled-jobs") == 0) {
        addCoreDependencyToPom(projectName, outputDirectory);
        addDbDependencyToPom(projectName, outputDirectory);
        //generateScheduledJobsComponent(projectName, outputDirectory);
    } else if (componentPurpose.compare("scheduled-jobs-with-messaging") == 0) {
        addCoreDependencyToPom(projectName, outputDirectory);
        addDbDependencyToPom(projectName, outputDirectory);
        addMessagingDependencyToPom(projectName, outputDirectory);
        generateProfilingConfigurationsOfMb(projectName, outputDirectory);
        //generateScheduledJobsComponentWithMessaging(projectName, outputDirectory);
    } else if (componentPurpose.compare("authentication-component") == 0) {
        addSecurityDependencyToPom(projectName, outputDirectory);
        addWebDependencyToPom(projectName, outputDirectory);
        addDbDependencyToPom(projectName, outputDirectory);
        //generateAuthenticationComponent(projectName, outputDirectory);
    } else if (componentPurpose.compare("users-administration-component") == 0) {
        addSecurityDependencyToPom(projectName, outputDirectory);
        addWebDependencyToPom(projectName, outputDirectory);
        addDbDependencyToPom(projectName, outputDirectory);
        //generateUsersAdministrationComponent(projectName, outputDirectory);
    }
    generatePomEof(projectName, outputDirectory);
}
