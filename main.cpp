#include <iostream>
#include <string>
#include "./utils/cmd-args-validation.h"
#include "./launcher/launcher.h"

using namespace std;

int main(int argc, char *argv[]) {
    if (argc != 4) {
        cerr << "Program terminated abnormally due to insufficient arguments !" << endl;
        exit(-1);
    }

    cout << "> Handling CMD arguments" << endl;
    cout << "  > extraction" << endl;

    string componentPurpose = argv[1];
    componentPurpose.replace(0, 19, "");

    string outputDirectory = argv[2];
    outputDirectory.replace(0, 18, "");

    string projectName = argv[3];
    projectName.replace(0, 14, "");

    validateCmdArguments(componentPurpose, projectName);

    startComponentGeneration(componentPurpose, outputDirectory, projectName);

    return 0;
}
