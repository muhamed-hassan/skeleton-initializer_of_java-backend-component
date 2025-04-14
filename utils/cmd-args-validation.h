#include <iostream>
#include <regex>

using namespace std;

void validateCmdArguments(string projectName, string componentPurpose) {
    cout << "  > validation" << endl;

    regex projectNameAcceptablePattern ("[a-z-_]{10,}");
    bool projectNamePatternCheckFailed = false;

    regex componentPurposeAcceptablePattern ("(web-interface|web-interface-with-messaging|scheduled-jobs|scheduled-jobs-with-messaging|authentication-component|users-administration-component)");
    bool componentPurposePatternCheckFailed = false;

    if (!regex_match(projectName, projectNameAcceptablePattern)) {
        cerr << "projectName should match this pattern [a-z-_]{10,}" << endl;
        projectNamePatternCheckFailed = true;
    }

    if (!regex_match(componentPurpose, componentPurposeAcceptablePattern)) {
        cerr << "componentPurpose should match this pattern (web-interface|web-interface-with-messaging|scheduled-jobs|scheduled-jobs-with-messaging|authentication-component|users-administration-component)" << endl;
        componentPurposePatternCheckFailed = true;
    }

    if (projectNamePatternCheckFailed || componentPurposePatternCheckFailed) {
        exit(-1);
    }
}
