#ifndef WEB_INTERFACE_COMPONENT_FILES_H
#define WEB_INTERFACE_COMPONENT_FILES_H

#include "../utils/utils.h"
#include "authorization-layer-files.h"

/*
- Path of "SampleController"
  - `project-name` > src > main > java > com > app > web > controllers > SampleController
*/
void generateSampleController(string outputDirectory, string projectName) {
    string sampleControllerPath ("");
    sampleControllerPath += getProjectPath(outputDirectory, projectName);
    sampleControllerPath += getWebLayerPath();
    sampleControllerPath += "\\controllers\\SampleController";

    ofstream osToSampleControllerFile (sampleControllerPath);
    osToSampleControllerFile << "// ABSTRACT EXAMPLE\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "/*\n";
    osToSampleControllerFile << "package com.app.web.controllers;\n";
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
    osToSampleControllerFile << "import com.app.web.validators.SampleValidator;\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "@RestController\n";
    osToSampleControllerFile << "@RequestMapping(\"v1/PLURAL-NAME-OF-THE-RESOURCE-THAT-SHOULD-BE-HANDLED-BY-THIS-CONTROLLER\")\n";
    osToSampleControllerFile << "public class SampleController {\n";
    osToSampleControllerFile << "\n";
    osToSampleControllerFile << "\t@Autowired\n";
    osToSampleControllerFile << "\tprivate SampleValidator sampleValidator;\n";
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
- Path of "SampleException"
  - `project-name` > src > main > java > com > app > web > error_handler > exceptions > SampleException
*/
void generateSampleException(string outputDirectory, string projectName) {
    string sampleExceptionPath ("");
    sampleExceptionPath += getProjectPath(outputDirectory, projectName);
    sampleExceptionPath += getWebLayerPath();
    sampleExceptionPath += "\\error_handler\\exceptions\\SampleException";

    ofstream osToSampleExceptionFile (sampleExceptionPath);
    osToSampleExceptionFile << "// ABSTRACT EXAMPLE\n";
    osToSampleExceptionFile << "// You can follow this pattern to make your own custom exception type as below to be handled later via RestErrorHandler class\n";
    osToSampleExceptionFile << "// You shall throw it in business-logic layer (domain package) on certain use cases based on the business need\n";
    osToSampleExceptionFile << "/*\n";
    osToSampleExceptionFile << "package com.app.web.error_handler.exceptions;\n";
    osToSampleExceptionFile << "\n";
    osToSampleExceptionFile << "public class SampleException extends RuntimeException {\n";
    osToSampleExceptionFile << "\n";
    osToSampleExceptionFile << "\tpublic SampleException(Throwable cause) {\n";
    osToSampleExceptionFile << "\t\tsuper(\"<YOUR_CUSTOM_EXCEPTION_MSG_GOES_HERE>\", cause);\n";
    osToSampleExceptionFile << "\t}\n";
    osToSampleExceptionFile << "\n";
    osToSampleExceptionFile << "}\n";
    osToSampleExceptionFile << "*/\n";
    osToSampleExceptionFile.close();
}

/*
- Path of "SampleRestErrorHandler"
  - `project-name` > src > main > java > com > app > web > error_handler > SampleRestErrorHandler
*/
void generateSampleRestErrorHandler(string outputDirectory, string projectName) {
    string restErrorHandlerPath ("");
    restErrorHandlerPath += getProjectPath(outputDirectory, projectName);
    restErrorHandlerPath += getWebLayerPath();
    restErrorHandlerPath += "\\error_handler\\SampleRestErrorHandler";

    ofstream osToRestErrorHandlerFile (restErrorHandlerPath);
    osToRestErrorHandlerFile << "// ABSTRACT EXAMPLE\n";
    osToRestErrorHandlerFile << "\n";
    osToRestErrorHandlerFile << "/*\n";
    osToRestErrorHandlerFile << "package com.app.web.error_handler;\n";
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
    osToRestErrorHandlerFile << "public class SampleRestErrorHandler {\n";
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
- Path of "SampleValidator"
  - `project-name` > src > main > java > com > app > web > validators > SampleValidator
*/
void generateSampleValidator(string outputDirectory, string projectName) {
    string sampleValidatorPath ("");
    sampleValidatorPath += getProjectPath(outputDirectory, projectName);
    sampleValidatorPath += getWebLayerPath();
    sampleValidatorPath += "\\validators\\SampleValidator";

    ofstream osToSampleValidatorFile (sampleValidatorPath);
    osToSampleValidatorFile << "// ABSTRACT EXAMPLE\n";
    osToSampleValidatorFile << "// Based on your design, you can have multiple validators with different names based on the context\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "/*\n";
    osToSampleValidatorFile << "package com.app.web.validators;\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "import org.springframework.stereotype.Component;\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "//https://en.wikipedia.org/wiki/Fail-fast approach is used to report validation errors\n";
    osToSampleValidatorFile << "@Component\n";
    osToSampleValidatorFile << "public class SampleValidator {\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "\tpublic void validate(RequestModelType1 requestModelType1) {\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "\t\t// do validation logic\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "\t\t// Upon error detection:\n";
    osToSampleValidatorFile << "\t\t// 	THEN => throw new IllegalArgumentException(\"validation error message\");\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "\t\treturn new ResponseEntity<Map<String, String>>(errorMsg, HttpStatus.CODE);\n";
    osToSampleValidatorFile << "\t}\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "\t// . .\n";
    osToSampleValidatorFile << "\t// validate(RequestModelType_N requestModelType_N)\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "}\n";
    osToSampleValidatorFile << "*/\n";
    osToSampleValidatorFile.close();
}

/* *********************************************************************************************** */

/*
  - `project-name` > src > main > java > com > app > persistence >
       entities (add entities that belongs to authorization-layer from business-component-1)
*/
void generateEntitiesOfAuthorizationLayer(string outputDirectory, string projectName) {
    generateCustomGrantedAuthorityEntity(outputDirectory, projectName);
    generateScreenTypeEntity(outputDirectory, projectName);
    generateSystemActorEntity(outputDirectory, projectName);
    generateSystemSecurityConfigurationEntity(outputDirectory, projectName);
    generateUiScreenEntity(outputDirectory, projectName);
    generateUserEntity(outputDirectory, projectName);
}

/*
  - `project-name` > src > main > java > com > app > persistence >
       repositories (add repositories that belongs to authorization-layer from business-component-1)
*/
void generateRepositoriesOfAuthorizationLayer(string outputDirectory, string projectName) {
    generateSystemSecurityConfigurationRepository(outputDirectory, projectName);
    generateUserRepository(outputDirectory, projectName);
}

/*
  - `project-name` > src > main > java > com > app > infrastructure >
       configs >
         security >
           CorsFilter.java
           JwtAuthorizationFilter.java
           SecurityConfig.java
*/
void generateSecurityConfigurationsOfBusinessComponent(string outputDirectory, string projectName) {
    generateCorsFilter(outputDirectory, projectName);
    generateJwtAuthorizationFilter(outputDirectory, projectName);
    generateSecurityConfig(outputDirectory, projectName);
}

#endif
