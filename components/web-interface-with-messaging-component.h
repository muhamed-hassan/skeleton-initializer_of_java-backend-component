#ifndef WEB_INTERFACE_WITH_MESSAGING_COMPONENT_H
#define WEB_INTERFACE_WITH_MESSAGING_COMPONENT_H

#include <iostream>
#include "../utils/utils.h"
#include "web-interface.h"
#include "web-interface-with-messaging-component-files.h"

/*
  - `project-name` > src > main > java > com > app > domain >
       UserService.java that belongs to authorization-layer
       messaging >
         consumers >
           SampleMessageListener
         producers >
           SampleProducer
*/
void generateDomainLayerWithMessaging(string outputDirectory, string projectName) {
    generateDomainLayer(outputDirectory, projectName);

    // START generating the messaging section
    string messagingDirectoryPath ("");
    messagingDirectoryPath += getProjectPath(outputDirectory, projectName);
    messagingDirectoryPath += getDomainLayerPath() + "\\messaging";
    mkdirInProjectLayout(messagingDirectoryPath);

    string consumersDirectoryPath ("");
    consumersDirectoryPath += getProjectPath(outputDirectory, projectName);
    consumersDirectoryPath += getDomainLayerPath() + "\\messaging\\consumers";
    mkdirInProjectLayout(consumersDirectoryPath);
    generateSampleMessageListener(outputDirectory, projectName);

    string producersDirectoryPath ("");
    producersDirectoryPath += getProjectPath(outputDirectory, projectName);
    producersDirectoryPath += getDomainLayerPath() + "\\messaging\\producers";
    mkdirInProjectLayout(producersDirectoryPath);
    generateSampleProducer(outputDirectory, projectName);
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main > java > com > app > infrastructure >
       configs >
         security >
           CorsFilter.java
           JwtAuthorizationFilter.java
           SecurityConfig.java
         messaging >
           JmsConfig.java

Take a copy from "business-component-1"
*/
void generateInfrastructureLayerWithMessaging(string outputDirectory, string projectName) {
    generateInfrastructureLayer(outputDirectory, projectName);

    string messagingDirectoryPath ("");
    messagingDirectoryPath += getProjectPath(outputDirectory, projectName);
    messagingDirectoryPath += getInfrastructureLayerPath() + "\\configs\\messaging";
    mkdirInProjectLayout(messagingDirectoryPath);

    // TODO: generate JMSConfig.java
}

/* *********************************************************************************************** */
/* *********************************************************************************************** */

void generateWebInterfaceComponentWithMessaging(string outputDirectory, string projectName) {
    cout << "  > app layers of web-interface-with-messaging component:" << endl;

    generateWebLayer(outputDirectory, projectName);
    generateDomainLayerWithMessaging(outputDirectory, projectName);
    generatePersistenceLayer(outputDirectory, projectName);

    // IN PROGRESS
    generateInfrastructureLayerWithMessaging(outputDirectory, projectName);
}

#endif
