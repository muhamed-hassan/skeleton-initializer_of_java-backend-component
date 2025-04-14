#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <stdlib.h>

void mkdirInProjectLayout(string directoryPath) {
    string directoryCreationCommand ("mkdir ");
    directoryCreationCommand += directoryPath;
    char* c = new char [directoryCreationCommand.length() + 1];
    strcpy(c, directoryCreationCommand.c_str());
    system(c);
    delete[] c;
}

string getProjectPath(string projectName, string outputDirectory) {
    string projectPath ("");
    projectPath += outputDirectory;
    projectPath += "\\";
    projectPath += projectName;
    return projectPath;
}

string getResourcesDirectoryPath(string projectName, string outputDirectory) {
    string resourcesDirectoryPath ("");
    resourcesDirectoryPath += "\\src\\main\\resources";
    return resourcesDirectoryPath;
}

string getCommonAppPropertiesPath(string projectName, string outputDirectory) {
    string commonAppPropertiesPath ("");
    commonAppPropertiesPath += getProjectPath(projectName, outputDirectory);
    commonAppPropertiesPath += getResourcesDirectoryPath(projectName, outputDirectory);
    commonAppPropertiesPath += "\\application.properties";
    return commonAppPropertiesPath;
}

string getLocalAppPropertiesPath(string projectName, string outputDirectory) {
    string localAppPropertiesPath ("");
    localAppPropertiesPath += getProjectPath(projectName, outputDirectory);
    localAppPropertiesPath += getResourcesDirectoryPath(projectName, outputDirectory);
    localAppPropertiesPath += "\\application-local.properties";
    return localAppPropertiesPath;
}

string getTestingAppPropertiesPath(string projectName, string outputDirectory) {
    string testingAppPropertiesPath ("");
    testingAppPropertiesPath += getProjectPath(projectName, outputDirectory);
    testingAppPropertiesPath += getResourcesDirectoryPath(projectName, outputDirectory);
    testingAppPropertiesPath += "\\application-testing.properties";
    return testingAppPropertiesPath;
}

string getProductionAppPropertiesPath(string projectName, string outputDirectory) {
    string productionAppPropertiesPath ("");
    productionAppPropertiesPath += getProjectPath(projectName, outputDirectory);
    productionAppPropertiesPath += getResourcesDirectoryPath(projectName, outputDirectory);
    productionAppPropertiesPath += "\\application-production.properties";
    return productionAppPropertiesPath;
}

string getPomPath(string projectName, string outputDirectory) {
    string pomPath ("");
    pomPath += getProjectPath(projectName, outputDirectory);
    pomPath += "\\pom.xml";
    return pomPath;
}

string getWebLayerPath(string projectName, string outputDirectory) {
    string webLayerPath ("");
    webLayerPath += "\\src\\main\\java\\com\\app\\web";
    return webLayerPath;
}

string getDomainLayerPath(string projectName, string outputDirectory) {
    string domainLayerPath ("");
    domainLayerPath += "\\src\\main\\java\\com\\app\\domain";
    return domainLayerPath;
}

string getPersistenceLayerPath(string projectName, string outputDirectory) {
    string persistenceLayerPath ("");
    persistenceLayerPath += "\\src\\main\\java\\com\\app\\persistence";
    return persistenceLayerPath;
}

#endif
