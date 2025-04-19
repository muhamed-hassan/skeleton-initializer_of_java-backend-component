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

string getProjectPath(string outputDirectory, string projectName) {
    string projectPath ("");
    projectPath += outputDirectory + "\\" + projectName;
    return projectPath;
}

string getResourcesDirectoryPath() {
    string resourcesDirectoryPath ("");
    resourcesDirectoryPath += "\\src\\main\\resources";
    return resourcesDirectoryPath;
}

string getCommonPropertiesPath() {
    string commonPropertiesPath ("");
    commonPropertiesPath += "\\application.properties";
    return commonPropertiesPath;
}

string getLocalProfilePropertiesPath() {
    string localProfilePropertiesPath ("");
    localProfilePropertiesPath += "\\application-local.properties";
    return localProfilePropertiesPath;
}

string getTestingProfilePropertiesPath() {
    string testingProfilePropertiesPath ("");
    testingProfilePropertiesPath += "\\application-testing.properties";
    return testingProfilePropertiesPath;
}

string getProductionProfilePropertiesPath() {
    string productionProfilePropertiesPath ("");
    productionProfilePropertiesPath += "\\application-production.properties";
    return productionProfilePropertiesPath;
}

string getPomPath() {
    string pomPath ("");
    pomPath += "\\pom.xml";
    return pomPath;
}

string getJavaDirectoryPath() {
    string javaDirectoryPath ("");
    javaDirectoryPath += "\\src\\main\\java";
    return javaDirectoryPath;
}

string getWebLayerPath() {
    string webLayerPath ("");
    webLayerPath += getJavaDirectoryPath() + "\\com\\app\\web";
    return webLayerPath;
}

string getDomainLayerPath() {
    string domainLayerPath ("");
    domainLayerPath += getJavaDirectoryPath() + "\\com\\app\\domain";
    return domainLayerPath;
}

string getPersistenceLayerPath() {
    string persistenceLayerPath ("");
    persistenceLayerPath += getJavaDirectoryPath() + "\\com\\app\\persistence";
    return persistenceLayerPath;
}

string getInfrastructureLayerPath() {
    string infrastructureLayerPath ("");
    infrastructureLayerPath += getJavaDirectoryPath() + "\\com\\app\\infrastructure";
    return infrastructureLayerPath;
}

#endif
