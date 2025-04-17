#ifndef PROJECT_SKELETON_H
#define PROJECT_SKELETON_H

#include <iostream>
#include <fstream>
#include <string>
#include "../utils/utils.h"

using namespace std;

/*
- folder layout of the project that will be generated:
  - `project-name` > src > main >
    java > com > app
    resources
*/
void generateProjectLayout(string outputDirectory, string projectName) {
    cout << "> Generating project layout:" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);
    mkdirInProjectLayout(projectPath);

    string srcDirectoryPath ("");
    srcDirectoryPath += projectPath;
    srcDirectoryPath += "\\src";
    mkdirInProjectLayout(srcDirectoryPath);

    string mainDirectoryPath ("");
    mainDirectoryPath += projectPath;
    mainDirectoryPath += "\\src\\main";
    mkdirInProjectLayout(mainDirectoryPath);

    string javaDirectoryPath ("");
    javaDirectoryPath += projectPath;
    javaDirectoryPath += getJavaDirectoryPath();
    mkdirInProjectLayout(javaDirectoryPath);

    string comDirectoryPath ("");
    comDirectoryPath += projectPath;
    comDirectoryPath += getJavaDirectoryPath() + "\\com";
    mkdirInProjectLayout(comDirectoryPath);

    string appDirectoryPath ("");
    appDirectoryPath += projectPath;
    appDirectoryPath += getJavaDirectoryPath() + "\\com\\app";
    mkdirInProjectLayout(appDirectoryPath);

    string resourcesDirectoryPath ("");
    resourcesDirectoryPath += projectPath;
    resourcesDirectoryPath += getResourcesDirectoryPath();
    mkdirInProjectLayout(resourcesDirectoryPath);
}

/* *********************************************************************************************** */

/*
- Path of "git-repository-starter.txt"
  - `project-name` > git-repository-starter.txt
*/
void generateGitRepositoryStarter(string outputDirectory, string projectName) {
    cout << "  > git-repository-starter" << endl;

    string gitRepositoryStarterPath ("");
    gitRepositoryStarterPath += getProjectPath(outputDirectory, projectName);
    gitRepositoryStarterPath += "\\git-repository-starter.txt";

    ofstream osToGitRepositoryStarterFile (gitRepositoryStarterPath);
    osToGitRepositoryStarterFile << "1. Create new git repository on git-server.\n";
    osToGitRepositoryStarterFile << "\n";
    osToGitRepositoryStarterFile << "2. Use the below commands from the project's root directory";
    osToGitRepositoryStarterFile << " on your local machine after generating the project's skeleton:\n";
    osToGitRepositoryStarterFile << "\tgit init\n";
    osToGitRepositoryStarterFile << "\tgit add .\n";
    osToGitRepositoryStarterFile << "\tgit commit -m \"add project's skeleton\"\n";
    osToGitRepositoryStarterFile << "\tgit remote add origin git@github.com:<YOUR_GIT_USERNAME>/<REPOSITORY_NAME>.git\n";
    osToGitRepositoryStarterFile << "\tgit push -u origin master\n";
    osToGitRepositoryStarterFile.close();
}

/* *********************************************************************************************** */

/*
- Path of "Launcher.java"
  - `project-name` > src > main > java > com > app > Launcher.java
*/
void generateAppEntryPoint(string outputDirectory, string projectName) {
    cout << "  > app-entry-point" << endl;

    string appEntryPointPath ("");
    appEntryPointPath += getProjectPath(outputDirectory, projectName);
    appEntryPointPath += getJavaDirectoryPath() + "\\com\\app\\Launcher.java";

    ofstream outputStreamToAppEntryPointFile (appEntryPointPath);
    outputStreamToAppEntryPointFile << "package com.app;\n";
    outputStreamToAppEntryPointFile << "\n";
    outputStreamToAppEntryPointFile << "import org.springframework.boot.SpringApplication;\n";
    outputStreamToAppEntryPointFile << "import org.springframework.boot.autoconfigure.EnableAutoConfiguration;\n";
    outputStreamToAppEntryPointFile << "import org.springframework.context.annotation.ComponentScan;\n";
    outputStreamToAppEntryPointFile << "import org.springframework.context.annotation.Configuration;\n";
    outputStreamToAppEntryPointFile << "\n";
    outputStreamToAppEntryPointFile << "@Configuration\n";
    outputStreamToAppEntryPointFile << "@EnableAutoConfiguration\n";
    outputStreamToAppEntryPointFile << "@ComponentScan\n";
    outputStreamToAppEntryPointFile << "public class Launcher {\n";
    outputStreamToAppEntryPointFile << "\n";
    outputStreamToAppEntryPointFile << "\tpublic static void main(String[] args) {\n";
    outputStreamToAppEntryPointFile << "\t\tSpringApplication.run(Launcher.class, args);\n";
    outputStreamToAppEntryPointFile << "\t}\n";
    outputStreamToAppEntryPointFile << "}\n";
    outputStreamToAppEntryPointFile.close();
}

/* *********************************************************************************************** */

/*
- Path of ".gitignore"
  - `project-name` > .gitignore
*/
void generateGitignore(string outputDirectory, string projectName) {
    cout << "  > .gitignore" << endl;

    string gitignorePath ("");
    gitignorePath += getProjectPath(outputDirectory, projectName);
    gitignorePath += "\\.gitignore";

    ofstream outputStreamToGitignoreFile (gitignorePath);
    outputStreamToGitignoreFile << "target/\n";
    outputStreamToGitignoreFile << "\n";
    outputStreamToGitignoreFile << ".classpath\n";
    outputStreamToGitignoreFile << ".project\n";
    outputStreamToGitignoreFile << ".settings\n";
    outputStreamToGitignoreFile.close();
}

/* *********************************************************************************************** */

/*
- Path of "README.md"
  - `project-name` > README.md
*/
void generateReadme(string outputDirectory, string projectName) {
    cout << "  > README.md" << endl;

    string readmePath ("");
    readmePath += getProjectPath(outputDirectory, projectName);
    readmePath += "\\README.md";

    ofstream outputStreamToReadmeFile (readmePath);
    outputStreamToReadmeFile << "TODO upon need";
    outputStreamToReadmeFile.close();
}

/* *********************************************************************************************** */

/*
- Path of "pom.xml"
  - `project-name` > pom.xml
*/
void generatePomBof(string outputDirectory, string projectName) {
    cout << "  > pom.xml BOF" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPomBof (pomPath);
    outputStreamToPomBof << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n";
    outputStreamToPomBof << "<project xmlns=\"http://maven.apache.org/POM/4.0.0\"\n";
    outputStreamToPomBof << "\txmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\"\n";
    outputStreamToPomBof << "\txsi:schemaLocation=\"http://maven.apache.org/POM/4.0.0 https://maven.apache.org/xsd/maven-4.0.0.xsd\">\n";
    outputStreamToPomBof << "\n";
    outputStreamToPomBof << "\t<modelVersion>4.0.0</modelVersion>\n";
    outputStreamToPomBof << "\n";
    outputStreamToPomBof << "\t<parent>\n";
    outputStreamToPomBof << "\t\t<groupId>org.springframework.boot</groupId>\n";
    outputStreamToPomBof << "\t\t<artifactId>spring-boot-starter-parent</artifactId>\n";
    outputStreamToPomBof << "\t\t<version>1.0.0.RELEASE</version>\n";
    outputStreamToPomBof << "\t</parent>\n";
    outputStreamToPomBof << "\n";
    outputStreamToPomBof << "\t<groupId>com.app</groupId>\n";
    outputStreamToPomBof << "\t<artifactId>" << projectName << "</artifactId>\n";
    outputStreamToPomBof << "\t<version>1.0</version>\n";
    outputStreamToPomBof << "\n";
    outputStreamToPomBof << "\t<dependencies>\n";
    outputStreamToPomBof.close();
}

void addCoreDependencyToPom(string outputDirectory, string projectName) {
    cout << "      > core-dependency" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPom (pomPath, ofstream::app);
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>org.springframework.boot</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>spring-boot-starter</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\n";
    outputStreamToPom.close();
}

void addSecurityDependencyToPom(string outputDirectory, string projectName) {
    cout << "      > security-dependency" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPom (pomPath, ofstream::app);
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>org.springframework.boot</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>spring-boot-starter-security</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>io.jsonwebtoken</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>jjwt-api</artifactId>\n";
    outputStreamToPom << "\t\t\t<version>0.11.1</version>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>io.jsonwebtoken</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>jjwt-impl</artifactId>\n";
    outputStreamToPom << "\t\t\t<version>0.11.1</version>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>io.jsonwebtoken</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>jjwt-jackson</artifactId>\n";
    outputStreamToPom << "\t\t\t<version>0.11.1</version>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\n";
    outputStreamToPom.close();
}

void addWebDependencyToPom(string outputDirectory, string projectName) {
    cout << "      > web-dependency" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPom (pomPath, ofstream::app);
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>org.springframework.boot</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>spring-boot-starter-web</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\n";
    outputStreamToPom.close();
}

void addDbDependencyToPom(string outputDirectory, string projectName) {
    cout << "      > db-dependency" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPom (pomPath, ofstream::app);
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>mysql</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>mysql-connector-java</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>org.springframework.boot</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>spring-boot-starter-data-jpa</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom.close();
}

void addMessagingDependencyToPom(string outputDirectory, string projectName) {
    cout << "      > messaging-dependency" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPom (pomPath, ofstream::app);
    outputStreamToPom << "\n";
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>org.springframework</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>spring-jms</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom << "\t\t<dependency>\n";
    outputStreamToPom << "\t\t\t<groupId>org.apache.activemq</groupId>\n";
    outputStreamToPom << "\t\t\t<artifactId>activemq-core</artifactId>\n";
    outputStreamToPom << "\t\t</dependency>\n";
    outputStreamToPom.close();
}

void generatePomEof(string outputDirectory, string projectName) {
    cout << "  > pom.xml EOF" << endl;

    string pomPath = getPomPath();
    ofstream outputStreamToPomEof (pomPath, ofstream::app);
    outputStreamToPomEof << "\t</dependencies>\n";
    outputStreamToPomEof << "\n";
    outputStreamToPomEof << "\t<build>\n";
    outputStreamToPomEof << "\t\t<plugins>\n";
    outputStreamToPomEof << "\t\t\t<plugin>\n";
    outputStreamToPomEof << "\t\t\t\t<groupId>org.apache.maven.plugins</groupId>\n";
    outputStreamToPomEof << "\t\t\t\t<artifactId>maven-compiler-plugin</artifactId>\n";
    outputStreamToPomEof << "\t\t\t\t<configuration>\n";
    outputStreamToPomEof << "\t\t\t\t\t<source>8</source>\n";
    outputStreamToPomEof << "\t\t\t\t\t<target>8</target>\n";
    outputStreamToPomEof << "\t\t\t\t</configuration>\n";
    outputStreamToPomEof << "\t\t\t</plugin>\n";
    outputStreamToPomEof << "\t\t\t<plugin>\n";
    outputStreamToPomEof << "\t\t\t\t<groupId>org.springframework.boot</groupId>\n";
    outputStreamToPomEof << "\t\t\t\t<artifactId>spring-boot-maven-plugin</artifactId>\n";
    outputStreamToPomEof << "\t\t\t</plugin>\n";
    outputStreamToPomEof << "\t\t</plugins>\n";
    outputStreamToPomEof << "\t</build>\n";
    outputStreamToPomEof << "\n";
    outputStreamToPomEof << "</project>\n";
    outputStreamToPomEof.close();
}

/* *********************************************************************************************** */

/*
- Path of "db"
  - `project-name` > db >
        schema > README.md
        static-data > README.md
*/
void generateDbDirectory(string outputDirectory, string projectName) {
    cout << "  > db directory" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);

    string dbDirectoryPath ("");
    dbDirectoryPath += projectPath;
    dbDirectoryPath += "\\db";
    mkdirInProjectLayout(dbDirectoryPath);

    string schemaDirectoryPath ("");
    schemaDirectoryPath += projectPath;
    schemaDirectoryPath += "\\db\\schema";
    mkdirInProjectLayout(schemaDirectoryPath);

    string readmePathOfSchemaDirectory ("");
    readmePathOfSchemaDirectory += projectPath;
    readmePathOfSchemaDirectory += "\\db\\schema\\README.md";
    ofstream osToReadmeOfSchemaDirectoryFile (readmePathOfSchemaDirectory);
    osToReadmeOfSchemaDirectoryFile << "Holds numbered-sql-scripts based on the required features ";
    osToReadmeOfSchemaDirectoryFile << "that are added periodically.\n";
    osToReadmeOfSchemaDirectoryFile << "Those sql-scripts represent DDL files AKA db-skeleton.\n";
    osToReadmeOfSchemaDirectoryFile << "> File name form: `ticket_number.sql`.\n";
    osToReadmeOfSchemaDirectoryFile.close();

    string staticDataDirectoryPath ("");
    staticDataDirectoryPath += projectPath;
    staticDataDirectoryPath += "\\db\\static-data";
    mkdirInProjectLayout(staticDataDirectoryPath);

    string readmePathOfstaticDataDirectory ("");
    readmePathOfstaticDataDirectory += projectPath;
    readmePathOfstaticDataDirectory += "\\db\\static-data\\README.md";
    ofstream osToReadmeOfstaticDataDirectoryFile (readmePathOfstaticDataDirectory);
    osToReadmeOfstaticDataDirectoryFile << "Holds numbered-sql-scripts based on the required features ";
    osToReadmeOfstaticDataDirectoryFile << "that are added periodically.\n";
    osToReadmeOfstaticDataDirectoryFile << "Those sql-scripts represent DML files that consists of ";
    osToReadmeOfstaticDataDirectoryFile << "static data as general-configurations over apps.\n";
    osToReadmeOfstaticDataDirectoryFile << "> File name form: `ticket_number.sql`.\n";
    osToReadmeOfstaticDataDirectoryFile.close();
}

/* *********************************************************************************************** */

/*
- Path of "profiling-configurations"
  - `project-name` > src > main > resources >
        application.properties, application-local.properties, application-testing.properties, application-production.properties
*/
void generateProfilingConfigurationsOfDb(string outputDirectory, string projectName) {
    cout << "  > profiling-configurations of db" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);

    string commonPropertiesPath = ("");
    commonPropertiesPath += projectPath + getResourcesDirectoryPath() + getCommonPropertiesPath();
    ofstream osToCommonPropertiesFile (commonPropertiesPath);
    osToCommonPropertiesFile << "# add common app configs here that will be shared later between the 3 profiles of local, testing and production\n";
    osToCommonPropertiesFile << "\n";
    osToCommonPropertiesFile << "# DB connection configs: [Uncomment below configs upon need]\n";
    osToCommonPropertiesFile << "# spring.jpa.properties.hibernate.dialect=org.hibernate.dialect.MySQLDialect\n";
    osToCommonPropertiesFile << "# spring.datasource.driverClassName=com.mysql.jdbc.Driver\n";
    osToCommonPropertiesFile.close();

    string localProfilePropertiesPath = ("");
    localProfilePropertiesPath += projectPath + getResourcesDirectoryPath() + getLocalProfilePropertiesPath();
    ofstream osToLocalProfilePropertiesFile (localProfilePropertiesPath);
    osToLocalProfilePropertiesFile << "# DB connection configs: [Uncomment and adjust below configs upon need]\n";
    osToLocalProfilePropertiesFile << "# spring.datasource.url=jdbc:mysql://localhost:3306/<SCHEMA-NAME>\n";
    osToLocalProfilePropertiesFile << "# spring.datasource.username=<USERNAME>\n";
    osToLocalProfilePropertiesFile << "# spring.datasource.password=<PASSWORD>\n";
    osToLocalProfilePropertiesFile.close();

    string testingProfilePropertiesPath = ("");
    testingProfilePropertiesPath += projectPath + getResourcesDirectoryPath() + getTestingProfilePropertiesPath();
    ofstream osToTestingProfilePropertiesFile (testingProfilePropertiesPath);
    osToTestingProfilePropertiesFile << "# DB connection configs: [Uncomment and adjust below configs upon need]\n";
    osToTestingProfilePropertiesFile << "# spring.datasource.url=jdbc:mysql://<DNS-OF-DB>/<SCHEMA-NAME>\n";
    osToTestingProfilePropertiesFile << "# spring.datasource.username=<USERNAME>\n";
    osToTestingProfilePropertiesFile << "# spring.datasource.password=<PASSWORD>\n";
    osToTestingProfilePropertiesFile.close();

    string productionProfilePropertiesPath = ("");
    productionProfilePropertiesPath += projectPath + getResourcesDirectoryPath() + getProductionProfilePropertiesPath();
    ofstream osToProductionProfilePropertiesFile (productionProfilePropertiesPath);
    osToProductionProfilePropertiesFile << "# DB connection configs: [Uncomment and adjust below configs upon need]\n";
    osToProductionProfilePropertiesFile << "# spring.datasource.url=jdbc:mysql://<DNS-OF-DB>/<SCHEMA-NAME>\n";
    osToProductionProfilePropertiesFile << "# spring.datasource.username=<USERNAME>\n";
    osToProductionProfilePropertiesFile << "# spring.datasource.password=<PASSWORD>\n";
    osToProductionProfilePropertiesFile.close();
}

/*
- Path of "profiling-configurations"
  - `project-name` > src > main > resources >
        application.properties, application-local.properties, application-testing.properties, application-production.properties
*/
void generateProfilingConfigurationsOfMb(string outputDirectory, string projectName) {
    cout << "  > profiling-configurations of mb" << endl;

    string projectPath = getProjectPath(outputDirectory, projectName);

    string commonPropertiesPath = ("");
    commonPropertiesPath += projectPath + getResourcesDirectoryPath() + getCommonPropertiesPath();
    ofstream osToCommonPropertiesFile (commonPropertiesPath, ofstream::app);
    osToCommonPropertiesFile << "\n";
    osToCommonPropertiesFile << "# MB connection configs: [Uncomment below configs upon need]\n";
    osToCommonPropertiesFile << "# 1 APP is made for 1 QUEUE\n";
    osToCommonPropertiesFile << "# jms.activemq.queue=<QUEUE-NAME>\n";
    osToCommonPropertiesFile.close();

    string localProfilePropertiesPath = ("");
    localProfilePropertiesPath += projectPath + getResourcesDirectoryPath() + getLocalProfilePropertiesPath();
    ofstream osToLocalProfilePropertiesFile (localProfilePropertiesPath, ofstream::app);
    osToLocalProfilePropertiesFile << "\n";
    osToLocalProfilePropertiesFile << "# MB connection configs: [Uncomment and adjust below configs upon need]\n";
    osToLocalProfilePropertiesFile << "# spring.activemq.broker-url=tcp://localhost:61616\n";
    osToLocalProfilePropertiesFile << "# spring.activemq.user=<USERNAME>\n";
    osToLocalProfilePropertiesFile << "# spring.activemq.password=<PASSWORD>\n";
    osToLocalProfilePropertiesFile.close();

    string testingProfilePropertiesPath = ("");
    testingProfilePropertiesPath += projectPath + getResourcesDirectoryPath() + getTestingProfilePropertiesPath();
    ofstream osToTestingProfilePropertiesFile (testingProfilePropertiesPath, ofstream::app);
    osToTestingProfilePropertiesFile << "\n";
    osToTestingProfilePropertiesFile << "# MB connection configs: [Uncomment and adjust below configs upon need]\n";
    osToTestingProfilePropertiesFile << "# spring.activemq.broker-url=tcp://<DNS-OF-MB>\n";
    osToTestingProfilePropertiesFile << "# spring.activemq.user=<USERNAME>\n";
    osToTestingProfilePropertiesFile << "# spring.activemq.password=<PASSWORD>\n";
    osToTestingProfilePropertiesFile.close();

    string productionProfilePropertiesPath = ("");
    productionProfilePropertiesPath += projectPath + getResourcesDirectoryPath() + getProductionProfilePropertiesPath();
    ofstream osToProductionProfilePropertiesFile (productionProfilePropertiesPath, ofstream::app);
    osToProductionProfilePropertiesFile << "\n";
    osToProductionProfilePropertiesFile << "# MB connection configs: [Uncomment and adjust below configs upon need]\n";
    osToProductionProfilePropertiesFile << "# spring.activemq.broker-url=tcp://<DNS-OF-MB>\n";
    osToProductionProfilePropertiesFile << "# spring.activemq.user=<USERNAME>\n";
    osToProductionProfilePropertiesFile << "# spring.activemq.password=<PASSWORD>\n";
    osToProductionProfilePropertiesFile.close();
}

#endif
