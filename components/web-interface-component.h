#ifndef WEB_INTERFACE_COMPONENT_H
#define WEB_INTERFACE_COMPONENT_H

#include <iostream>
#include "../utils/utils.h"
#include "web-interface-component-files.h"
#include "authorization-layer-files.h"

using namespace std;

/*
  - `project-name` > src > main > java > com > app > web >
       controllers >
         SampleController
       error_handler >
         exceptions >
           SampleException
         SampleRestErrorHandler
       models
         validators >
           SampleValidator
*/
void generateWebLayer(string outputDirectory, string projectName) {
    cout << "    > web layer" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);

    string webDirectoryPath ("");
    webDirectoryPath += projectPath;
    webDirectoryPath += getWebLayerPath();
    mkdirInProjectLayout(webDirectoryPath);

    string controllersDirectoryPath ("");
    controllersDirectoryPath += projectPath;
    controllersDirectoryPath += getWebLayerPath();
    controllersDirectoryPath += "\\controllers";
    mkdirInProjectLayout(controllersDirectoryPath);
    generateSampleController(outputDirectory, projectName);

    string errHandlerDirectoryPath ("");
    errHandlerDirectoryPath += projectPath;
    errHandlerDirectoryPath += getWebLayerPath();
    errHandlerDirectoryPath += "\\error_handler";
    mkdirInProjectLayout(errHandlerDirectoryPath);
    generateSampleRestErrorHandler(outputDirectory, projectName);

    string exceptionsDirectoryPath ("");
    exceptionsDirectoryPath += projectPath;
    exceptionsDirectoryPath += getWebLayerPath();
    exceptionsDirectoryPath += "\\error_handler\\exceptions";
    mkdirInProjectLayout(exceptionsDirectoryPath);
    generateSampleException(outputDirectory, projectName);

    string modelsDirectoryPath ("");
    modelsDirectoryPath += projectPath;
    modelsDirectoryPath += getWebLayerPath();
    modelsDirectoryPath += "\\models";
    mkdirInProjectLayout(modelsDirectoryPath);

    string validatorsDirectoryPath ("");
    validatorsDirectoryPath += projectPath;
    validatorsDirectoryPath += getWebLayerPath();
    validatorsDirectoryPath += "\\validators";
    mkdirInProjectLayout(validatorsDirectoryPath);
    generateSampleValidator(outputDirectory, projectName);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main > java > com > app > domain >
       UserService.java that belongs to authorization-layer
*/
void generateDomainLayer(string outputDirectory, string projectName) {
    cout << "    > domain layer" << endl;

    string domainDirectoryPath ("");
    domainDirectoryPath += getProjectPath(outputDirectory, projectName);
    domainDirectoryPath += getDomainLayerPath();
    mkdirInProjectLayout(domainDirectoryPath);
    generateUserService(outputDirectory, projectName);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main > java > com > app > persistence >
       entities (add entities that belongs to authorization-layer from business-component-1)
       repositories (add repositories that belongs to authorization-layer from business-component-1)
*/
void generatePersistenceLayer(string outputDirectory, string projectName) {
    cout << "    > persistence layer" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);

    string persistenceDirectoryPath ("");
    persistenceDirectoryPath += projectPath;
    persistenceDirectoryPath += getPersistenceLayerPath();
    mkdirInProjectLayout(persistenceDirectoryPath);

    string entitiesDirectoryPath ("");
    entitiesDirectoryPath += projectPath;
    entitiesDirectoryPath += getPersistenceLayerPath();
    entitiesDirectoryPath += "\\entities";
    mkdirInProjectLayout(entitiesDirectoryPath);
    generateEntitiesOfAuthorizationLayer(outputDirectory, projectName);

    string repositoriesDirectoryPath ("");
    repositoriesDirectoryPath += projectPath;
    repositoriesDirectoryPath += getPersistenceLayerPath();
    repositoriesDirectoryPath += "\\repositories";
    mkdirInProjectLayout(repositoriesDirectoryPath);
    generateRepositoriesOfAuthorizationLayer(outputDirectory, projectName);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main > java > com > app > infrastructure >
       configs >
         security >
           CorsFilter.java
           JwtAuthorizationFilter.java
           SecurityConfig.java

Take a copy from "business-component-1"
*/
void generateInfrastructureLayer(string outputDirectory, string projectName) {
    cout << "    > infrastructure layer" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);

    string infrastructureDirectoryPath ("");
    infrastructureDirectoryPath += projectPath;
    infrastructureDirectoryPath += getInfrastructureLayerPath();
    mkdirInProjectLayout(infrastructureDirectoryPath);

    string configsDirectoryPath ("");
    configsDirectoryPath += projectPath;
    configsDirectoryPath += getInfrastructureLayerPath() + "\\configs";
    mkdirInProjectLayout(configsDirectoryPath);

    string securityDirectoryPath ("");
    securityDirectoryPath += projectPath;
    securityDirectoryPath += getInfrastructureLayerPath() + "\\configs\\security";
    mkdirInProjectLayout(securityDirectoryPath);

    generateSecurityConfigurationsOfBusinessComponent(outputDirectory, projectName);
}

/* *********************************************************************************************** */
/* *********************************************************************************************** */

void generateWebInterfaceComponent(string outputDirectory, string projectName) {
    cout << "  > app layers of web-interface component:" << endl;
    generateWebLayer(outputDirectory, projectName);
    generateDomainLayer(outputDirectory, projectName);
    generatePersistenceLayer(outputDirectory, projectName);

    // IN PROGRESS
    generateInfrastructureLayer(outputDirectory, projectName);
}

#endif
