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

string getCommonAppPropertiesPath(string projectName, string outputDirectory) {
    string commonAppPropertiesPath ("");
    commonAppPropertiesPath += outputDirectory;
    commonAppPropertiesPath += "\\";
    commonAppPropertiesPath += projectName;
    commonAppPropertiesPath += "\\src\\main\\resources\\application.properties";
    return commonAppPropertiesPath;
}

string getLocalAppPropertiesPath(string projectName, string outputDirectory) {
    string localAppPropertiesPath ("");
    localAppPropertiesPath += outputDirectory;
    localAppPropertiesPath += "\\";
    localAppPropertiesPath += projectName;
    localAppPropertiesPath += "\\src\\main\\resources\\application-local.properties";
    return localAppPropertiesPath;
}

string getTestingAppPropertiesPath(string projectName, string outputDirectory) {
    string testingAppPropertiesPath ("");
    testingAppPropertiesPath += outputDirectory;
    testingAppPropertiesPath += "\\";
    testingAppPropertiesPath += projectName;
    testingAppPropertiesPath += "\\src\\main\\resources\\application-testing.properties";
    return testingAppPropertiesPath;
}

string getProductionAppPropertiesPath(string projectName, string outputDirectory) {
    string productionAppPropertiesPath ("");
    productionAppPropertiesPath += outputDirectory;
    productionAppPropertiesPath += "\\";
    productionAppPropertiesPath += projectName;
    productionAppPropertiesPath += "\\src\\main\\resources\\application-production.properties";
    return productionAppPropertiesPath;
}

string getPomPath(string projectName, string outputDirectory) {
    string pomPath ("");
    pomPath += outputDirectory;
    pomPath += "\\";
    pomPath += projectName;
    pomPath += "\\pom.xml";
    return pomPath;
}
