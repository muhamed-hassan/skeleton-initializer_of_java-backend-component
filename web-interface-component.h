#include "utils.h"
#include "web-interface-component-files.h"

/*
  - `project-name` > src > main >
    java > com > app > web >
        controllers >
            SampleController.java
        error_handler >
            exceptions
            RestErrorHandler.java
        models
        validators >
            SampleValidator.java
*/
void generateWebLayer(string projectName, string outputDirectory) {
    string projectPath = getProjectPath(projectName, outputDirectory);

    string webDirectoryPath ("");
    webDirectoryPath += projectPath;
    webDirectoryPath += getWebLayerPath(projectName, outputDirectory);
    mkdirInProjectLayout(webDirectoryPath);

    string controllersDirectoryPath ("");
    controllersDirectoryPath += projectPath;
    controllersDirectoryPath += getWebLayerPath(projectName, outputDirectory);
    controllersDirectoryPath += "\\controllers";
    mkdirInProjectLayout(controllersDirectoryPath);
    generateSampleController(projectName, outputDirectory);

    string errHandlerDirectoryPath ("");
    errHandlerDirectoryPath += projectPath;
    errHandlerDirectoryPath += getWebLayerPath(projectName, outputDirectory);
    errHandlerDirectoryPath += "\\error_handler";
    mkdirInProjectLayout(errHandlerDirectoryPath);
    generateRestErrorHandler(projectName, outputDirectory);

    string exceptionsDirectoryPath ("");
    exceptionsDirectoryPath += projectPath;
    exceptionsDirectoryPath += getWebLayerPath(projectName, outputDirectory);
    exceptionsDirectoryPath += "\\error_handler\\exceptions";
    mkdirInProjectLayout(exceptionsDirectoryPath);

    string modelsDirectoryPath ("");
    modelsDirectoryPath += projectPath;
    modelsDirectoryPath += getWebLayerPath(projectName, outputDirectory);
    modelsDirectoryPath += "\\models";
    mkdirInProjectLayout(modelsDirectoryPath);

    string validatorsDirectoryPath ("");
    validatorsDirectoryPath += projectPath;
    validatorsDirectoryPath += getWebLayerPath(projectName, outputDirectory);
    validatorsDirectoryPath += "\\validators";
    mkdirInProjectLayout(validatorsDirectoryPath);
    generateSampleValidator(projectName, outputDirectory);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main >
    java > com > app > domain >
        UserService.java that belongs to authorization-layer

Take a copy from "business-component-1"
*/
void generateDomainLayer(string projectName, string outputDirectory) {
    string domainDirectoryPath ("");
    domainDirectoryPath += getProjectPath(projectName, outputDirectory);
    domainDirectoryPath += getDomainLayerPath(projectName, outputDirectory);
    mkdirInProjectLayout(domainDirectoryPath);
    generateUserService(projectName, outputDirectory);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main >
    java > com > app > persistence >
        entities (add entities that belongs to authorization-layer from business-component-1)
        repositories (add repositories that belongs to authorization-layer from business-component-1)
*/
void generatePersistenceLayer(string projectName, string outputDirectory) {
    string persistenceDirectoryPath ("");
    persistenceDirectoryPath += getProjectPath(projectName, outputDirectory);
    persistenceDirectoryPath += getPersistenceLayerPath(projectName, outputDirectory);
    mkdirInProjectLayout(persistenceDirectoryPath);
    generateEntitiesOfAuthorizationLayer(projectName, outputDirectory);
    generateRepositoriesOfAuthorizationLayer(projectName, outputDirectory);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main >
    java > com > app > infrastructure >
        configs >
            security >
                JwtAuthorizationFilter.java
                SecurityConfig.java

Take a copy from "business-component-1"
*/
void generateInfrastructureLayer(string projectName, string outputDirectory) {

}

/* *********************************************************************************************** */
/* *********************************************************************************************** */

void generateWebInterfaceComponent(string projectName, string outputDirectory) {
    generateWebLayer(projectName, outputDirectory);
    generateDomainLayer(projectName, outputDirectory);
    generatePersistenceLayer(projectName, outputDirectory);
}
