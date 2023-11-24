#include <iostream>
#include <string>
#include "cmd-args-validation.h"
#include "launcher.h"

using namespace std;

//void startComponentGeneration(string projectName, string componentPurpose, string outputDirectory);

/*
PRE-CONDITION:
Run this tool on a clean directory where you did not run it before to avoid issues in
creating the project's skeleton twice
*/

/*
https://learn.microsoft.com/en-us/cpp/cpp/main-function-command-line-args?view=msvc-170


"argc": An integer that contains the count of arguments that follow in argv. The argc parameter is always greater than or equal to 1

argv[1] is the first command-line argument. The last argument from the command line is argv[argc - 1]



# Navigate into project's root directory:
`g++ main.cpp -o <EXECUTABLE_NAME>`

# Run the generated executable s below:
`PATH_TO_EXECUTABLE\EXECUTABLE_NAME arg0 arg1 arg2 ...`
<EXECUTABLE_NAME> -project-name=sample-project -component-purpose=web-interface -output-directory=%cd%
*/
int main(int argc, char *argv[]) {
    if (argc != 4) {
        cerr << "Program terminated abnormally due to insufficient arguments !" << endl;
        exit(-1);
    }

    /*
    string projectName = "sample-project";
    string componentPurpose = "web-interface";
    string outputDirectory = "D:";
    */
    string projectName = argv[1];
    projectName.replace(0, 14, "");

    string componentPurpose = argv[2];
    componentPurpose.replace(0, 19, "");

    string outputDirectory = argv[3];
    outputDirectory.replace(0, 18, "");

    validateCmdArguments(projectName, componentPurpose);

    startComponentGeneration(projectName, componentPurpose, outputDirectory);

    return 0;
}
