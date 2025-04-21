#ifndef WEB_INTERFACE_COMPONENT_H
#define WEB_INTERFACE_COMPONENT_H

#include <iostream>
#include "../utils/utils.h"
#include "web-interface.h"

using namespace std;

void generateWebInterfaceComponent(string outputDirectory, string projectName) {
    cout << "  > app layers of web-interface component:" << endl;

    generateWebLayer(outputDirectory, projectName);
    generateDomainLayer(outputDirectory, projectName);
    generatePersistenceLayer(outputDirectory, projectName);
    generateInfrastructureLayer(outputDirectory, projectName);
}

#endif
