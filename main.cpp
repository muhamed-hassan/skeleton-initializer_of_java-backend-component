#include <iostream>
#include <string>
#include "./utils/cmd-args-validation.h"
#include "./launcher/launcher.h"

using namespace std;

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

# Run the generated executables below:
`PATH_TO_EXECUTABLE\EXECUTABLE_NAME arg0 arg1 arg2 ...`
<EXECUTABLE_NAME> -component-purpose=web-interface -output-directory=%cd% -project-name=sample-project


# In action, use the below:

g++ main.cpp -o skeleton-initializer_of_java-backend-component

skeleton-initializer_of_java-backend-component -component-purpose=web-interface -output-directory=%cd% -project-name=sample-project
*/
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
