#include "utils.h"

/*
- Path of "SampleController.java"
  - `project-name` > src > main > java > com > app > web > controllers > SampleController.java
*/
void generateSampleController(string projectName, string outputDirectory) {
    string sampleControllerPath ("");
    sampleControllerPath += outputDirectory;
    sampleControllerPath += "\\";
    sampleControllerPath += projectName;
    sampleControllerPath += "\\src\\main\\java\\com\\app\\web\\controllers\\SampleController.java";

    ofstream osToSampleControllerFile (sampleControllerPath);
    osToSampleControllerFile << "// ABSTRACT EXAMPLE\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "/*\n";
    osToSampleControllerFile << "package com.poc.web.controllers;\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "import org.springframework.beans.factory.annotation.Autowired;\n";
    osToSampleControllerFile << "import org.springframework.http.HttpStatus;\n";
    osToSampleControllerFile << "import org.springframework.http.ResponseEntity;\n";
    osToSampleControllerFile << "import org.springframework.security.access.prepost.PreAuthorize;\n";
    osToSampleControllerFile << "import org.springframework.web.bind.annotation.RequestBody;\n";
    osToSampleControllerFile << "import org.springframework.web.bind.annotation.RequestMapping;\n";
    osToSampleControllerFile << "import org.springframework.web.bind.annotation.RequestMethod;\n";
    osToSampleControllerFile << "import org.springframework.web.bind.annotation.RestController;\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "import com.poc.web.validators.Validator;\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "@RestController\n";
    osToSampleControllerFile << "@RequestMapping(\"v1/PLURAL-NAME-OF-THE-RESOURCE-THAT-SHOULD-BE-HANDLED-BY-THIS-CONTROLLER\")\n";
    osToSampleControllerFile << "public class SampleController {\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "\t@Autowired\n";
    osToSampleControllerFile << "\tprivate Validator validator;\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "\t@PreAuthorize(\"hasRole('system-actor-type')\")\n";
    osToSampleControllerFile << "\t@RequestMapping(method = RequestMethod.POST, value = \"URI-PATH-EXTENSTION-IF-ANY\")\n";
    osToSampleControllerFile << "\tpublic ResponseEntity<ResponseDataType> post(@RequestBody RequestBodyModel requestBodyModel) {\n";
    osToSampleControllerFile << "\t\t// some interaction logic with other layers of the app to do certain thing\n";
    osToSampleControllerFile << "\t\t\n";
    osToSampleControllerFile << "\t\treturn new ResponseEntity<ResponseDataType>(HttpStatus_CODE);\n";
    osToSampleControllerFile << "\t}\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "\t@PreAuthorize(\"hasRole('system-actor-type')\")\n";
    osToSampleControllerFile << "\t@RequestMapping(method = RequestMethod.GET, value = \"URI-PATH-EXTENSTION-IF-ANY\")\n";
    osToSampleControllerFile << "\tpublic ResponseEntity<ResponseDataType> get() {\n";
    osToSampleControllerFile << "\t\t// some interaction logic with other layers of the app to do certain thing\n";
    osToSampleControllerFile << "\t\t\n";
    osToSampleControllerFile << "\t\treturn new ResponseEntity<ResponseDataType>(responseBody, HttpStatus_CODE);\n";
    osToSampleControllerFile << "\t}\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "\t@PreAuthorize(\"hasRole('system-actor-type')\")\n";
    osToSampleControllerFile << "\t@RequestMapping(method = RequestMethod.DELETE, value = \"URI-PATH-EXTENSTION-IF-ANY\")\n";
    osToSampleControllerFile << "\tpublic ResponseEntity<ResponseDataType> delete() {\n";
    osToSampleControllerFile << "\t\t// some interaction logic with other layers of the app to do certain thing\n";
    osToSampleControllerFile << "\t\t\n";
    osToSampleControllerFile << "\t\treturn new ResponseEntity<ResponseDataType>(HttpStatus_CODE);\n";
    osToSampleControllerFile << "\t}\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "\t@PreAuthorize(\"hasRole('system-actor-type')\")\n";
    osToSampleControllerFile << "\t@RequestMapping(method = RequestMethod.PUT, value = \"URI-PATH-EXTENSTION-IF-ANY\")\n";
    osToSampleControllerFile << "\tpublic ResponseEntity<ResponseDataType> put(@RequestBody RequestBodyModel requestBodyModel) {\n";
    osToSampleControllerFile << "\t\t// some interaction logic with other layers of the app to do certain thing\n";
    osToSampleControllerFile << "\t\t\n";
    osToSampleControllerFile << "\t\treturn new ResponseEntity<ResponseDataType>(HttpStatus_CODE);\n";
    osToSampleControllerFile << "\t}\n";
    osToSampleControllerFile << "}\n";
    osToSampleControllerFile << "*/\n";
    osToSampleControllerFile.close();
}

/*
- Path of "RestErrorHandler.java"
  - `project-name` > src > main > java > com > app > web > error_handler > RestErrorHandler.java
*/
void generateRestErrorHandler(string projectName, string outputDirectory) {
    string restErrorHandlerPath ("");
    restErrorHandlerPath += outputDirectory;
    restErrorHandlerPath += "\\";
    restErrorHandlerPath += projectName;
    restErrorHandlerPath += "\\src\\main\\java\\com\\app\\web\\error_handler\\RestErrorHandler.java";

    ofstream osToRestErrorHandlerFile (restErrorHandlerPath);
    osToRestErrorHandlerFile << "// ABSTRACT EXAMPLE\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "/*\n";
    osToRestErrorHandlerFile << "package com.poc.web.error_handler;\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "import java.util.HashMap;\n";
    osToRestErrorHandlerFile << "import java.util.Map;\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "import org.springframework.http.HttpStatus;\n";
    osToRestErrorHandlerFile << "import org.springframework.http.ResponseEntity;\n";
    osToRestErrorHandlerFile << "import org.springframework.web.bind.annotation.ControllerAdvice;\n";
    osToRestErrorHandlerFile << "import org.springframework.web.bind.annotation.ExceptionHandler;\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "@ControllerAdvice\n";
    osToRestErrorHandlerFile << "public class RestErrorHandler {\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t@ExceptionHandler\n";
    osToRestErrorHandlerFile << "\tpublic ResponseEntity<Map<String, String>> handleSomeException(SomeException exception) {\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t\tString message = exception.getMessage();\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t\tMap<String, String> error = new HashMap<String, String>(1);\n";
    osToRestErrorHandlerFile << "\t\terror.put(\"error\", message);\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t\treturn new ResponseEntity<Map<String, String>>(error, HttpStatus.CODE);\n";
    osToRestErrorHandlerFile << "\t}\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t// handleSomeException() can be overloaded to handle other sub-types of RuntimeException\n";
    osToRestErrorHandlerFile << "\t// handle<SomeException>(<SomeException> exception) => Just replace \"SomeException\" to the desired sub-type that should be handled\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t// # FYA:\n";
    osToRestErrorHandlerFile << "\t//   You can add custom sub-type exceptions from RuntimeException under this package \"\\src\\main\\java\\com\\app\\web\\error_handler\\exceptions\"\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t// Any other type derived from RuntimeException and not handled in previous section is handled via below handler\n";
    osToRestErrorHandlerFile << "\t@ExceptionHandler\n";
    osToRestErrorHandlerFile << "\tpublic ResponseEntity<Map<String, String>> handleExceptions(Exception exception) {\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t\tString message = exception.getMessage() == null ?\n";
    osToRestErrorHandlerFile << "\t\t\t\"Unable to process this request.\" : exception.getMessage();\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t\tMap<String, String> error = new HashMap<String, String>(1);\n";
    osToRestErrorHandlerFile << "\t\terror.put(\"error\", message);\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "\t\treturn new ResponseEntity<Map<String, String>>(error, HttpStatus.INTERNAL_SERVER_ERROR);\n";
    osToRestErrorHandlerFile << "\t}\n";
    osToRestErrorHandlerFile << "}\n";
    osToRestErrorHandlerFile << "*/\n";
    osToRestErrorHandlerFile.close();
}

/*
  - `project-name` > src > main >
    java > com > app > web >
        controllers >
            SampleController.java
        error_handler >
            exceptions
            RestErrorHandler.java
        models
        validators >
            SampleValidator.java
*/
void generateWebLayer(string projectName, string outputDirectory) {
    string projectPath = getProjectPath(projectName, outputDirectory);

    string webDirectoryPath ("");
    webDirectoryPath += projectPath;
    webDirectoryPath += "\\src\\main\\java\\com\\app\\web";
    mkdirInProjectLayout(webDirectoryPath);

    string controllersDirectoryPath ("");
    controllersDirectoryPath += projectPath;
    controllersDirectoryPath += "\\src\\main\\java\\com\\app\\web\\controllers";
    mkdirInProjectLayout(controllersDirectoryPath);
    generateSampleController(projectName, outputDirectory);

    string errHandlerDirectoryPath ("");
    errHandlerDirectoryPath += projectPath;
    errHandlerDirectoryPath += "\\src\\main\\java\\com\\app\\web\\error_handler";
    mkdirInProjectLayout(errHandlerDirectoryPath);
    generateRestErrorHandler(projectName, outputDirectory);

    string exceptionsDirectoryPath ("");
    exceptionsDirectoryPath += projectPath;
    exceptionsDirectoryPath += "\\src\\main\\java\\com\\app\\web\\error_handler\\exceptions";
    mkdirInProjectLayout(exceptionsDirectoryPath);

    string modelsDirectoryPath ("");
    modelsDirectoryPath += projectPath;
    modelsDirectoryPath += "\\src\\main\\java\\com\\app\\web\\models";
    mkdirInProjectLayout(modelsDirectoryPath);

    string validatorsDirectoryPath ("");
    validatorsDirectoryPath += projectPath;
    validatorsDirectoryPath += "\\src\\main\\java\\com\\app\\web\\validators";
    mkdirInProjectLayout(validatorsDirectoryPath);
    // TODO: write this SampleValidator.java
}

/*
  - `project-name` > src > main >
    java > com > app > domain >
        UserService.java that belongs to authorization-layer

Take a copy from "business-component-1"
*/
void generateDomainLayer(string projectName, string outputDirectory) {

}

/*
  - `project-name` > src > main >
    java > com > app > persistence >
        entities (add entities that belongs to authorization-layer from business-component-1)
        repositories (add repositories that belongs to authorization-layer from business-component-1)
*/
void generatePersistenceLayer(string projectName, string outputDirectory) {

}

/*
  - `project-name` > src > main >
    java > com > app > infrastructure >
        configs >
            security >
                JwtAuthorizationFilter.java
                SecurityConfig.java

Take a copy from "business-component-1"
*/
void generateInfrastructureLayer(string projectName, string outputDirectory) {

}

/* *********************************************************************************************** */
/* *********************************************************************************************** */

void generateWebInterfaceComponent(string projectName, string outputDirectory) {

}
