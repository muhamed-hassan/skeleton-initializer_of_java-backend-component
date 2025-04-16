#include "../utils/utils.h"

/*
- Path of "SampleController.java"
  - `project-name` > src > main > java > com > app > web > controllers > SampleController.java
*/
void generateSampleController(string outputDirectory, string projectName) {
    string sampleControllerPath ("");
    sampleControllerPath += getProjectPath(outputDirectory, projectName);
    sampleControllerPath += getWebLayerPath();
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
void generateRestErrorHandler(string outputDirectory, string projectName) {
    string restErrorHandlerPath ("");
    restErrorHandlerPath += getProjectPath(outputDirectory, projectName);
    restErrorHandlerPath += getWebLayerPath();
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
void generateSampleValidator(string outputDirectory, string projectName) {
    string sampleValidatorPath ("");
    sampleValidatorPath += getProjectPath(outputDirectory, projectName);
    sampleValidatorPath += getWebLayerPath();
    sampleValidatorPath += "\\validators\\SampleValidator.java";

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
- Path of "UserService.java"
  - `project-name` > src > main > java > com > app > domain > UserService.java
*/
void generateUserService(string outputDirectory, string projectName) {
    string userServicePath ("");
    userServicePath += getProjectPath(outputDirectory, projectName);
    userServicePath += getDomainLayerPath();
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

/*
- Path of "CustomGrantedAuthority.java"
  - `project-name` > src > main > java > com > app > persistence > entities > CustomGrantedAuthority.java
*/
void generateCustomGrantedAuthorityEntity(string outputDirectory, string projectName) {
    string customGrantedAuthorityEntityPath ("");
    customGrantedAuthorityEntityPath += getProjectPath(outputDirectory, projectName);
    customGrantedAuthorityEntityPath += getPersistenceLayerPath();
    customGrantedAuthorityEntityPath += "\\entities\\CustomGrantedAuthority.java";

    ofstream osToCustomGrantedAuthorityEntityFile (customGrantedAuthorityEntityPath);
    osToCustomGrantedAuthorityEntityFile << "package com.app.persistence.entities;\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.Entity;\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.GeneratedValue;\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.GenerationType;\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.Id;\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.JoinColumn;\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.ManyToOne;\n";
    osToCustomGrantedAuthorityEntityFile << "import javax.persistence.Table;\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "import org.springframework.security.core.GrantedAuthority;\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "@Table(name = \"granted_authority\")\n";
    osToCustomGrantedAuthorityEntityFile << "@Entity\n";
    osToCustomGrantedAuthorityEntityFile << "public class CustomGrantedAuthority implements GrantedAuthority {\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\t@Id\n";
    osToCustomGrantedAuthorityEntityFile << "\t@GeneratedValue(strategy = GenerationType.IDENTITY)\n";
    osToCustomGrantedAuthorityEntityFile << "\tprivate int id;\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\t@ManyToOne\n";
    osToCustomGrantedAuthorityEntityFile << "\t@JoinColumn(name = \"ui_screen_id\")\n";
    osToCustomGrantedAuthorityEntityFile << "\tprivate UiScreen uiScreen;\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\t@ManyToOne\n";
    osToCustomGrantedAuthorityEntityFile << "\t@JoinColumn(name = \"system_actor_id\")\n";
    osToCustomGrantedAuthorityEntityFile << "\tprivate SystemActor systemActor;\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic int getId() {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\treturn id;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic void setId(int id) {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tthis.id = id;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic UiScreen getUiScreen() {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\treturn uiScreen;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic void setUiScreen(UiScreen uiScreen) {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tthis.uiScreen = uiScreen;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic SystemActor getSystemActor() {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\treturn systemActor;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic void setSystemActor(SystemActor systemActor) {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tthis.systemActor = systemActor;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\t@Override\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic String getAuthority() {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\treturn uiScreen.getScreenName() + \"|\" + uiScreen.getScreenType().getType();\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\t@Override\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic int hashCode() {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tfinal int prime = 31;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tint result = 1;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tresult = prime * result + id;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\treturn result;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "\t@Override\n";
    osToCustomGrantedAuthorityEntityFile << "\tpublic boolean equals(Object obj) {\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tif (this == obj)\n";
    osToCustomGrantedAuthorityEntityFile << "\t\t\treturn true;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tif (obj == null)\n";
    osToCustomGrantedAuthorityEntityFile << "\t\t\treturn false;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tif (getClass() != obj.getClass())\n";
    osToCustomGrantedAuthorityEntityFile << "\t\t\treturn false;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tCustomGrantedAuthority other = (CustomGrantedAuthority) obj;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\tif (id != other.id)\n";
    osToCustomGrantedAuthorityEntityFile << "\t\t\treturn false;\n";
    osToCustomGrantedAuthorityEntityFile << "\t\treturn true;\n";
    osToCustomGrantedAuthorityEntityFile << "\t}\n";
    osToCustomGrantedAuthorityEntityFile << "\n";
    osToCustomGrantedAuthorityEntityFile << "}\n";
    osToCustomGrantedAuthorityEntityFile.close();
}

/*
- Path of "ScreenType.java"
  - `project-name` > src > main > java > com > app > persistence > entities > ScreenType.java
*/
void generateScreenTypeEntity(string outputDirectory, string projectName) {
    string screenTypeEntityPath ("");
    screenTypeEntityPath += getProjectPath(outputDirectory, projectName);
    screenTypeEntityPath += getPersistenceLayerPath();
    screenTypeEntityPath += "\\entities\\ScreenType.java";

    ofstream osToScreenTypeEntityFile (screenTypeEntityPath);
    osToScreenTypeEntityFile << "package com.app.persistence.entities;\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "import javax.persistence.Entity;\n";
    osToScreenTypeEntityFile << "import javax.persistence.GeneratedValue;\n";
    osToScreenTypeEntityFile << "import javax.persistence.GenerationType;\n";
    osToScreenTypeEntityFile << "import javax.persistence.Id;\n";
    osToScreenTypeEntityFile << "import javax.persistence.Table;\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "@Table(name = \"screen_type\")\n";
    osToScreenTypeEntityFile << "@Entity\n";
    osToScreenTypeEntityFile << "public class ScreenType {\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\t@Id\n";
    osToScreenTypeEntityFile << "\t@GeneratedValue(strategy = GenerationType.IDENTITY)\n";
    osToScreenTypeEntityFile << "\tprivate int id;\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\tprivate String type;\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\tpublic int getId() {\n";
    osToScreenTypeEntityFile << "\t\treturn id;\n";
    osToScreenTypeEntityFile << "\t}\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\tpublic void setId(int id) {\n";
    osToScreenTypeEntityFile << "\t\tthis.id = id;\n";
    osToScreenTypeEntityFile << "\t}\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\tpublic String getType() {\n";
    osToScreenTypeEntityFile << "\t\treturn type;\n";
    osToScreenTypeEntityFile << "\t}\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\tpublic void setType(String type) {\n";
    osToScreenTypeEntityFile << "\t\tthis.type = type;\n";
    osToScreenTypeEntityFile << "\t}\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\t@Override\n";
    osToScreenTypeEntityFile << "\tpublic int hashCode() {\n";
    osToScreenTypeEntityFile << "\t\tfinal int prime = 31;\n";
    osToScreenTypeEntityFile << "\t\tint result = 1;\n";
    osToScreenTypeEntityFile << "\t\tresult = prime * result + id;\n";
    osToScreenTypeEntityFile << "\t\treturn result;\n";
    osToScreenTypeEntityFile << "\t}\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "\t@Override\n";
    osToScreenTypeEntityFile << "\tpublic boolean equals(Object obj) {\n";
    osToScreenTypeEntityFile << "\t\tif (this == obj)\n";
    osToScreenTypeEntityFile << "\t\t\treturn true;\n";
    osToScreenTypeEntityFile << "\t\tif (obj == null)\n";
    osToScreenTypeEntityFile << "\t\t\treturn false;\n";
    osToScreenTypeEntityFile << "\t\tif (getClass() != obj.getClass())\n";
    osToScreenTypeEntityFile << "\t\t\treturn false;\n";
    osToScreenTypeEntityFile << "\t\tScreenType other = (ScreenType) obj;\n";
    osToScreenTypeEntityFile << "\t\tif (id != other.id)\n";
    osToScreenTypeEntityFile << "\t\t\treturn false;\n";
    osToScreenTypeEntityFile << "\t\treturn true;\n";
    osToScreenTypeEntityFile << "\t}\n";
    osToScreenTypeEntityFile << "\n";
    osToScreenTypeEntityFile << "}\n";
    osToScreenTypeEntityFile.close();
}

/*
- Path of "SystemActor.java"
  - `project-name` > src > main > java > com > app > persistence > entities > SystemActor.java
*/
void generateSystemActorEntity(string outputDirectory, string projectName) {
    string systemActorEntityPath ("");
    systemActorEntityPath += getProjectPath(outputDirectory, projectName);
    systemActorEntityPath += getPersistenceLayerPath();
    systemActorEntityPath += "\\entities\\SystemActor.java";

    ofstream osToSystemActorEntityFile (systemActorEntityPath);
    osToSystemActorEntityFile << "package com.app.persistence.entities;\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "import java.util.List;\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "import javax.persistence.Entity;\n";
    osToSystemActorEntityFile << "import javax.persistence.FetchType;\n";
    osToSystemActorEntityFile << "import javax.persistence.GeneratedValue;\n";
    osToSystemActorEntityFile << "import javax.persistence.GenerationType;\n";
    osToSystemActorEntityFile << "import javax.persistence.Id;\n";
    osToSystemActorEntityFile << "import javax.persistence.OneToMany;\n";
    osToSystemActorEntityFile << "import javax.persistence.Table;\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "@Table(name = \"system_actor\")\n";
    osToSystemActorEntityFile << "@Entity\n";
    osToSystemActorEntityFile << "public class SystemActor {\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\t@Id\n";
    osToSystemActorEntityFile << "\t@GeneratedValue(strategy = GenerationType.IDENTITY)\n";
    osToSystemActorEntityFile << "\tprivate int id;\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tprivate String type;\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\t@OneToMany(mappedBy = \"systemActor\", fetch = FetchType.EAGER)\n";
    osToSystemActorEntityFile << "\tprivate List<CustomGrantedAuthority> authorities;\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tpublic int getId() {\n";
    osToSystemActorEntityFile << "\t\treturn id;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tpublic void setId(int id) {\n";
    osToSystemActorEntityFile << "\t\tthis.id = id;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tpublic String getType() {\n";
    osToSystemActorEntityFile << "\t\treturn type;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tpublic void setType(String type) {\n";
    osToSystemActorEntityFile << "\t\tthis.type = type;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tpublic List<CustomGrantedAuthority> getAuthorities() {\n";
    osToSystemActorEntityFile << "\t\treturn authorities;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\tpublic void setAuthorities(List<CustomGrantedAuthority> authorities) {\n";
    osToSystemActorEntityFile << "\t\tthis.authorities = authorities;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\t@Override\n";
    osToSystemActorEntityFile << "\tpublic int hashCode() {\n";
    osToSystemActorEntityFile << "\t\tfinal int prime = 31;\n";
    osToSystemActorEntityFile << "\t\tint result = 1;\n";
    osToSystemActorEntityFile << "\t\tresult = prime * result + id;\n";
    osToSystemActorEntityFile << "\t\treturn result;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "\t@Override\n";
    osToSystemActorEntityFile << "\tpublic boolean equals(Object obj) {\n";
    osToSystemActorEntityFile << "\t\tif (this == obj)\n";
    osToSystemActorEntityFile << "\t\t\treturn true;\n";
    osToSystemActorEntityFile << "\t\tif (obj == null)\n";
    osToSystemActorEntityFile << "\t\t\treturn false;\n";
    osToSystemActorEntityFile << "\t\tif (getClass() != obj.getClass())\n";
    osToSystemActorEntityFile << "\t\t\treturn false;\n";
    osToSystemActorEntityFile << "\t\tSystemActor other = (SystemActor) obj;\n";
    osToSystemActorEntityFile << "\t\tif (id != other.id)\n";
    osToSystemActorEntityFile << "\t\t\treturn false;\n";
    osToSystemActorEntityFile << "\t\treturn true;\n";
    osToSystemActorEntityFile << "\t}\n";
    osToSystemActorEntityFile << "\n";
    osToSystemActorEntityFile << "}\n";
    osToSystemActorEntityFile.close();
}

/*
- Path of "SystemSecurityConfiguration.java"
  - `project-name` > src > main > java > com > app > persistence > entities > SystemSecurityConfiguration.java
*/
void generateSystemSecurityConfigurationEntity(string outputDirectory, string projectName) {
    string systemSecurityConfigurationEntityPath ("");
    systemSecurityConfigurationEntityPath += getProjectPath(outputDirectory, projectName);
    systemSecurityConfigurationEntityPath += getPersistenceLayerPath();
    systemSecurityConfigurationEntityPath += "\\entities\\SystemSecurityConfiguration.java";

    ofstream osToSystemSecurityConfigurationEntityFile (systemSecurityConfigurationEntityPath);
    osToSystemSecurityConfigurationEntityFile << "package com.app.persistence.entities;\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "import javax.persistence.Column;\n";
    osToSystemSecurityConfigurationEntityFile << "import javax.persistence.Entity;\n";
    osToSystemSecurityConfigurationEntityFile << "import javax.persistence.GeneratedValue;\n";
    osToSystemSecurityConfigurationEntityFile << "import javax.persistence.GenerationType;\n";
    osToSystemSecurityConfigurationEntityFile << "import javax.persistence.Id;\n";
    osToSystemSecurityConfigurationEntityFile << "import javax.persistence.Table;\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "@Table(name = \"system_security_configuration\")\n";
    osToSystemSecurityConfigurationEntityFile << "@Entity\n";
    osToSystemSecurityConfigurationEntityFile << "public class SystemSecurityConfiguration {\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\t@Id\n";
    osToSystemSecurityConfigurationEntityFile << "\t@GeneratedValue(strategy = GenerationType.IDENTITY)\n";
    osToSystemSecurityConfigurationEntityFile << "\tprivate int id;\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\t@Column(name = \"jwt_secret\")\n";
    osToSystemSecurityConfigurationEntityFile << "\tprivate String jwtSecret;\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\t@Column(name = \"jwt_expiration\")\n";
    osToSystemSecurityConfigurationEntityFile << "\tprivate int jwtExpiration;\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\t@Column(name = \"authentication_path\")\n";
    osToSystemSecurityConfigurationEntityFile << "\tprivate String authenticationPath;\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic int getId() {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\treturn id;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic void setId(int id) {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tthis.id = id;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic String getJwtSecret() {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\treturn jwtSecret;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic void setJwtSecret(String jwtSecret) {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tthis.jwtSecret = jwtSecret;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic int getJwtExpiration() {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\treturn jwtExpiration;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic void setJwtExpiration(int jwtExpiration) {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tthis.jwtExpiration = jwtExpiration;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\t@Override\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic int hashCode() {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tfinal int prime = 31;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tint result = 1;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tresult = prime * result + id;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\treturn result;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "\t@Override\n";
    osToSystemSecurityConfigurationEntityFile << "\tpublic boolean equals(Object obj) {\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tif (this == obj)\n";
    osToSystemSecurityConfigurationEntityFile << "\t\t\treturn true;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tif (obj == null)\n";
    osToSystemSecurityConfigurationEntityFile << "\t\t\treturn false;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tif (getClass() != obj.getClass())\n";
    osToSystemSecurityConfigurationEntityFile << "\t\t\treturn false;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tSystemSecurityConfiguration other = (SystemSecurityConfiguration) obj;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\tif (id != other.id)\n";
    osToSystemSecurityConfigurationEntityFile << "\t\t\treturn false;\n";
    osToSystemSecurityConfigurationEntityFile << "\t\treturn true;\n";
    osToSystemSecurityConfigurationEntityFile << "\t}\n";
    osToSystemSecurityConfigurationEntityFile << "\n";
    osToSystemSecurityConfigurationEntityFile << "}\n";
    osToSystemSecurityConfigurationEntityFile.close();
}

/*
- Path of "UiScreen.java"
  - `project-name` > src > main > java > com > app > persistence > entities > UiScreen.java
*/
void generateUiScreenEntity(string outputDirectory, string projectName) {
    string uiScreenEntityPath ("");
    uiScreenEntityPath += getProjectPath(outputDirectory, projectName);
    uiScreenEntityPath += getPersistenceLayerPath();
    uiScreenEntityPath += "\\entities\\UiScreen.java";

    ofstream osToUiScreenEntityFile (uiScreenEntityPath);
    osToUiScreenEntityFile << "package com.app.persistence.entities;\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "import javax.persistence.Column;\n";
    osToUiScreenEntityFile << "import javax.persistence.Entity;\n";
    osToUiScreenEntityFile << "import javax.persistence.GeneratedValue;\n";
    osToUiScreenEntityFile << "import javax.persistence.GenerationType;\n";
    osToUiScreenEntityFile << "import javax.persistence.Id;\n";
    osToUiScreenEntityFile << "import javax.persistence.JoinColumn;\n";
    osToUiScreenEntityFile << "import javax.persistence.ManyToOne;\n";
    osToUiScreenEntityFile << "import javax.persistence.Table;\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "@Table(name = \"ui_screen\")\n";
    osToUiScreenEntityFile << "@Entity\n";
    osToUiScreenEntityFile << "public class UiScreen {\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\t@Id\n";
    osToUiScreenEntityFile << "\t@GeneratedValue(strategy = GenerationType.IDENTITY)\n";
    osToUiScreenEntityFile << "\tprivate int id;\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\t@Column(name = \"screen_name\")\n";
    osToUiScreenEntityFile << "\tprivate String screenName;\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\t@ManyToOne\n";
    osToUiScreenEntityFile << "\t@JoinColumn(name = \"screen_type_id\")\n";
    osToUiScreenEntityFile << "\tprivate ScreenType screenType;\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\tpublic int getId() {\n";
    osToUiScreenEntityFile << "\t\treturn id;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\tpublic void setId(int id) {\n";
    osToUiScreenEntityFile << "\t\tthis.id = id;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\tpublic String getScreenName() {\n";
    osToUiScreenEntityFile << "\t\treturn screenName;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\tpublic void setScreenName(String screenName) {\n";
    osToUiScreenEntityFile << "\t\tthis.screenName = screenName;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\tpublic ScreenType getScreenType() {\n";
    osToUiScreenEntityFile << "\t\treturn screenType;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\tpublic void setScreenType(ScreenType screenType) {\n";
    osToUiScreenEntityFile << "\t\tthis.screenType = screenType;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\t@Override\n";
    osToUiScreenEntityFile << "\tpublic int hashCode() {\n";
    osToUiScreenEntityFile << "\t\tfinal int prime = 31;\n";
    osToUiScreenEntityFile << "\t\tint result = 1;\n";
    osToUiScreenEntityFile << "\t\tresult = prime * result + id;\n";
    osToUiScreenEntityFile << "\t\treturn result;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "\t@Override\n";
    osToUiScreenEntityFile << "\tpublic boolean equals(Object obj) {\n";
    osToUiScreenEntityFile << "\t\tif (this == obj)\n";
    osToUiScreenEntityFile << "\t\t\treturn true;\n";
    osToUiScreenEntityFile << "\t\tif (obj == null)\n";
    osToUiScreenEntityFile << "\t\t\treturn false;\n";
    osToUiScreenEntityFile << "\t\tif (getClass() != obj.getClass())\n";
    osToUiScreenEntityFile << "\t\t\treturn false;\n";
    osToUiScreenEntityFile << "\t\tUiScreen other = (UiScreen) obj;\n";
    osToUiScreenEntityFile << "\t\tif (id != other.id)\n";
    osToUiScreenEntityFile << "\t\t\treturn false;\n";
    osToUiScreenEntityFile << "\t\treturn true;\n";
    osToUiScreenEntityFile << "\t}\n";
    osToUiScreenEntityFile << "\n";
    osToUiScreenEntityFile << "}\n";
    osToUiScreenEntityFile.close();
}

/*
- Path of "User.java"
  - `project-name` > src > main > java > com > app > persistence > entities > User.java
*/
void generateUserEntity(string outputDirectory, string projectName) {
    string userEntityPath ("");
    userEntityPath += getProjectPath(outputDirectory, projectName);
    userEntityPath += getPersistenceLayerPath();
    userEntityPath += "\\entities\\User.java";

    ofstream osToUserEntityFile (userEntityPath);
    osToUserEntityFile << "package com.app.persistence.entities;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "import javax.persistence.Column;\n";
    osToUserEntityFile << "import javax.persistence.Entity;\n";
    osToUserEntityFile << "import javax.persistence.GeneratedValue;\n";
    osToUserEntityFile << "import javax.persistence.GenerationType;\n";
    osToUserEntityFile << "import javax.persistence.Id;\n";
    osToUserEntityFile << "import javax.persistence.JoinColumn;\n";
    osToUserEntityFile << "import javax.persistence.ManyToOne;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "import org.springframework.security.core.GrantedAuthority;\n";
    osToUserEntityFile << "import org.springframework.security.core.userdetails.UserDetails;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "@Entity\n";
    osToUserEntityFile << "public class User implements UserDetails {\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Id\n";
    osToUserEntityFile << "\t@GeneratedValue(strategy = GenerationType.IDENTITY)\n";
    osToUserEntityFile << "\tprivate int id;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tprivate String username;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tprivate String password;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tprivate String name;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tprivate String mobile;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tprivate String email;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Column(name = \"account_non_expired\")\n";
    osToUserEntityFile << "\tprivate boolean accountNonExpired;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Column(name = \"account_non_locked\")\n";
    osToUserEntityFile << "\tprivate boolean accountNonLocked;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Column(name = \"credentials_non_expired\")\n";
    osToUserEntityFile << "\tprivate boolean credentialsNonExpired;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tprivate boolean enabled;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@ManyToOne\n";
    osToUserEntityFile << "\t@JoinColumn(name = \"system_actor_id\")\n";
    osToUserEntityFile << "\tprivate SystemActor systemActor;\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic int getId() {\n";
    osToUserEntityFile << "\t\treturn id;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setId(int id) {\n";
    osToUserEntityFile << "\t\tthis.id = id;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic String getUsername() {\n";
    osToUserEntityFile << "\t\treturn username;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setUsername(String username) {\n";
    osToUserEntityFile << "\t\tthis.username = username;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic String getPassword() {\n";
    osToUserEntityFile << "\t\treturn username;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setPassword(String password) {\n";
    osToUserEntityFile << "\t\tthis.username = username;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic String getName() {\n";
    osToUserEntityFile << "\t\treturn name;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setName(String name) {\n";
    osToUserEntityFile << "\t\tthis.name = name;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic String getMobile() {\n";
    osToUserEntityFile << "\t\treturn mobile;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setMobile(String mobile) {\n";
    osToUserEntityFile << "\t\tthis.mobile = mobile;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic String getEmail() {\n";
    osToUserEntityFile << "\t\treturn email;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setEmail(String email) {\n";
    osToUserEntityFile << "\t\tthis.email = email;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic boolean isAccountNonExpired() {\n";
    osToUserEntityFile << "\t\treturn accountNonExpired;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setAccountNonExpired(boolean accountNonExpired) {\n";
    osToUserEntityFile << "\t\tthis.accountNonExpired = accountNonExpired;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic boolean isAccountNonLocked() {\n";
    osToUserEntityFile << "\t\treturn accountNonLocked;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setAccountNonLocked(boolean accountNonLocked) {\n";
    osToUserEntityFile << "\t\tthis.accountNonLocked = accountNonLocked;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic boolean isCredentialsNonExpired() {\n";
    osToUserEntityFile << "\t\treturn credentialsNonExpired;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setCredentialsNonExpired(boolean credentialsNonExpired) {\n";
    osToUserEntityFile << "\t\tthis.credentialsNonExpired = credentialsNonExpired;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic boolean isEnabled() {\n";
    osToUserEntityFile << "\t\treturn enabled;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setEnabled(boolean enabled)) {\n";
    osToUserEntityFile << "\t\tthis.enabled = enabled;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic SystemActor getSystemActor() {\n";
    osToUserEntityFile << "\t\treturn systemActor;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\tpublic void setSystemActor(SystemActor systemActor) {\n";
    osToUserEntityFile << "\t\tthis.systemActor = systemActor;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Override\n";
    osToUserEntityFile << "\tpublic Collection<? extends GrantedAuthority> getAuthorities() {\n";
    osToUserEntityFile << "\t\treturn systemActor.getAuthorities();\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Override\n";
    osToUserEntityFile << "\tpublic int hashCode() {\n";
    osToUserEntityFile << "\t\tfinal int prime = 31;\n";
    osToUserEntityFile << "\t\tint result = 1;\n";
    osToUserEntityFile << "\t\tresult = prime * result + id;\n";
    osToUserEntityFile << "\t\treturn result;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "\t@Override\n";
    osToUserEntityFile << "\tpublic boolean equals(Object obj) {\n";
    osToUserEntityFile << "\t\tif (this == obj)\n";
    osToUserEntityFile << "\t\t\treturn true;\n";
    osToUserEntityFile << "\t\tif (obj == null)\n";
    osToUserEntityFile << "\t\t\treturn false;\n";
    osToUserEntityFile << "\t\tif (getClass() != obj.getClass())\n";
    osToUserEntityFile << "\t\t\treturn false;\n";
    osToUserEntityFile << "\t\tUser other = (User) obj;\n";
    osToUserEntityFile << "\t\tif (id != other.id)\n";
    osToUserEntityFile << "\t\t\treturn false;\n";
    osToUserEntityFile << "\t\treturn true;\n";
    osToUserEntityFile << "\t}\n";
    osToUserEntityFile << "\n";
    osToUserEntityFile << "}\n";
    osToUserEntityFile.close();
}

/*
  - `project-name` > src > main > java > com > app > persistence >
       entities (add entities that belongs to authorization-layer from business-component-1)
       repositories (add repositories that belongs to authorization-layer from business-component-1)
*/

void generateEntitiesOfAuthorizationLayer(string outputDirectory, string projectName) {
    generateCustomGrantedAuthorityEntity(outputDirectory, projectName);
    generateScreenTypeEntity(outputDirectory, projectName);
    generateSystemActorEntity(outputDirectory, projectName);
    generateSystemSecurityConfigurationEntity(outputDirectory, projectName);
    generateUiScreenEntity(outputDirectory, projectName);
    generateUserEntity(outputDirectory, projectName);
}

void generateRepositoriesOfAuthorizationLayer(string outputDirectory, string projectName) {

}
