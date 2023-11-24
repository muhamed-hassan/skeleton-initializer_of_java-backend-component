#include "utils.h"

/*
- Path of "SampleController.java"
  - `project-name` > src > main > java > com > app > web > controllers > SampleController.java
*/
void generateSampleController(string projectName, string outputDirectory) {
    string sampleControllerPath ("");
    sampleControllerPath += getProjectPath(projectName, outputDirectory);
    sampleControllerPath += "\\";
    sampleControllerPath += getWebLayerPath(projectName, outputDirectory);
    sampleControllerPath += "\\controllers\\SampleController.java";

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
- Path of "RestErrorHandler.java"
  - `project-name` > src > main > java > com > app > web > error_handler > RestErrorHandler.java
*/
void generateRestErrorHandler(string projectName, string outputDirectory) {
    string restErrorHandlerPath ("");
    restErrorHandlerPath += getProjectPath(projectName, outputDirectory);
    restErrorHandlerPath += "\\";
    restErrorHandlerPath += getWebLayerPath(projectName, outputDirectory);
    restErrorHandlerPath += "\\error_handler\\RestErrorHandler.java";

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
- Path of "SampleValidator.java"
  - `project-name` > src > main > java > com > app > web > validators > SampleValidator.java
*/
void generateSampleValidator(string projectName, string outputDirectory) {
    string sampleValidatorPath ("");
    sampleValidatorPath += getProjectPath(projectName, outputDirectory);
    sampleValidatorPath += "\\";
    sampleValidatorPath += getWebLayerPath(projectName, outputDirectory);
    sampleValidatorPath += "\\validators\\SampleValidator.java";

    ofstream osToSampleValidatorFile (sampleValidatorPath);
    osToSampleValidatorFile << "// ABSTRACT EXAMPLE\n";
    osToSampleValidatorFile << "// Based on your design, you can have multiple validators with different names based on the context\n";
    osToSampleValidatorFile << "\n";
    osToSampleValidatorFile << "/*\n";
    osToSampleValidatorFile << "package com.poc.web.validators;\n";
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
- Path of "UserService.java"
  - `project-name` > src > main > java > com > app > domain > UserService.java
*/
void generateUserService(string projectName, string outputDirectory) {
    string userServicePath ("");
    userServicePath += getProjectPath(projectName, outputDirectory);
    userServicePath += "\\";
    userServicePath += getDomainLayerPath(projectName, outputDirectory);
    userServicePath += "\\UserService.java";

    ofstream osToUserServiceFile (userServicePath);
    osToUserServiceFile << "package com.app.domain;\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "import org.springframework.beans.factory.annotation.Autowired;\n";
    osToUserServiceFile << "import org.springframework.security.core.userdetails.UserDetails;\n";
    osToUserServiceFile << "import org.springframework.security.core.userdetails.UserDetailsService;\n";
    osToUserServiceFile << "import org.springframework.security.core.userdetails.UsernameNotFoundException;\n";
    osToUserServiceFile << "import org.springframework.stereotype.Service;\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "import com.app.persistence.entities.SystemSecurityConfiguration;\n";
    osToUserServiceFile << "import com.app.persistence.repositories.SystemSecurityConfigurationRepository;\n";
    osToUserServiceFile << "import com.app.persistence.repositories.UserRepository;\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "@Service\n";
    osToUserServiceFile << "public class UserService implements UserDetailsService {\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t@Autowired\n";
    osToUserServiceFile << "\tprivate UserRepository userRepository;\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t@Autowired\n";
    osToUserServiceFile << "\tprivate SystemSecurityConfigurationRepository systemSecurityConfigurationRepository;\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t@Override\n";
    osToUserServiceFile << "\tpublic UserDetails loadUserByUsername(String username) throws UsernameNotFoundException {\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t\tUserDetails user = userRepository.findByUsername(username);\n";
    osToUserServiceFile << "\t\tif (user == null) {\n";
    osToUserServiceFile << "\t\t\tthrow new UsernameNotFoundException(\"This user name \" + username + \" does not exist\");\n";
    osToUserServiceFile << "\t\t}\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t\treturn user;\n";
    osToUserServiceFile << "\t}\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\tpublic SystemSecurityConfiguration loadJwtConfigs() {\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t\tSystemSecurityConfiguration configuration = systemSecurityConfigurationRepository.findOne(1);\n";
    osToUserServiceFile << "\t\tif (configuration == null) {\n";
    osToUserServiceFile << "\t\t\tthrow new RuntimeException(\"Failed to load Jwt Configs => please contact the System Admin\");\n";
    osToUserServiceFile << "\t\t}\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "\t\treturn configuration;\n";
    osToUserServiceFile << "\t}\n";
    osToUserServiceFile << "\n";
    osToUserServiceFile << "}\n";
    osToUserServiceFile.close();
}

/* *********************************************************************************************** */

// TODO
/*
  - `project-name` > src > main >
    java > com > app > persistence >
        entities (add entities that belongs to authorization-layer from business-component-1)
        repositories (add repositories that belongs to authorization-layer from business-component-1)
*/

void generateEntitiesOfAuthorizationLayer(string projectName, string outputDirectory) {

}

void generateRepositoriesOfAuthorizationLayer(string projectName, string outputDirectory) {

}
