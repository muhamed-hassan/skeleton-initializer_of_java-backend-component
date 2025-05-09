#ifndef AUTHORIZATION_LAYER_FILES_H
#define AUTHORIZATION_LAYER_FILES_H

#include "../utils/utils.h"

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
    osToUserEntityFile << "import java.util.Collection;\n";
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
    osToUserEntityFile << "\tpublic void setEnabled(boolean enabled) {\n";
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

/* *********************************************************************************************** */

/*
- Path of "SystemSecurityConfigurationRepository.java"
  - `project-name` > src > main > java > com > app > persistence > repositories > SystemSecurityConfigurationRepository.java
*/
void generateSystemSecurityConfigurationRepository(string outputDirectory, string projectName) {
    string systemSecurityConfigurationRepositoryPath ("");
    systemSecurityConfigurationRepositoryPath += getProjectPath(outputDirectory, projectName);
    systemSecurityConfigurationRepositoryPath += getPersistenceLayerPath();
    systemSecurityConfigurationRepositoryPath += "\\repositories\\SystemSecurityConfigurationRepository.java";

    ofstream osToSystemSecurityConfigurationRepositoryFile (systemSecurityConfigurationRepositoryPath);
    osToSystemSecurityConfigurationRepositoryFile << "package com.app.persistence.repositories;\n";
    osToSystemSecurityConfigurationRepositoryFile << "\n";
    osToSystemSecurityConfigurationRepositoryFile << "import org.springframework.data.jpa.repository.JpaRepository;\n";
    osToSystemSecurityConfigurationRepositoryFile << "import org.springframework.stereotype.Repository;\n";
    osToSystemSecurityConfigurationRepositoryFile << "\n";
    osToSystemSecurityConfigurationRepositoryFile << "import com.app.persistence.entities.SystemSecurityConfiguration;\n";
    osToSystemSecurityConfigurationRepositoryFile << "\n";
    osToSystemSecurityConfigurationRepositoryFile << "@Repository\n";
    osToSystemSecurityConfigurationRepositoryFile << "public interface SystemSecurityConfigurationRepository extends JpaRepository<SystemSecurityConfiguration, Integer> {\n";
    osToSystemSecurityConfigurationRepositoryFile << "\n";
    osToSystemSecurityConfigurationRepositoryFile << "}\n";
    osToSystemSecurityConfigurationRepositoryFile.close();
}

/*
- Path of "UserRepository.java"
  - `project-name` > src > main > java > com > app > persistence > repositories > UserRepository.java
*/
void generateUserRepository(string outputDirectory, string projectName) {
    string userRepositoryPath ("");
    userRepositoryPath += getProjectPath(outputDirectory, projectName);
    userRepositoryPath += getPersistenceLayerPath();
    userRepositoryPath += "\\repositories\\UserRepository.java";

    ofstream osToUserRepositoryFile (userRepositoryPath);
    osToUserRepositoryFile << "package com.app.persistence.repositories;\n";
    osToUserRepositoryFile << "\n";
    osToUserRepositoryFile << "import org.springframework.data.jpa.repository.JpaRepository;\n";
    osToUserRepositoryFile << "import org.springframework.stereotype.Repository;\n";
    osToUserRepositoryFile << "\n";
    osToUserRepositoryFile << "import com.app.persistence.entities.User;\n";
    osToUserRepositoryFile << "\n";
    osToUserRepositoryFile << "@Repository\n";
    osToUserRepositoryFile << "public interface UserRepository extends JpaRepository<User, Integer> {\n";
    osToUserRepositoryFile << "\n";
    osToUserRepositoryFile << "\tUser findByUsername(String username);\n";
    osToUserRepositoryFile << "\n";
    osToUserRepositoryFile << "}\n";
    osToUserRepositoryFile.close();
}

/* *********************************************************************************************** */

/*
- Path of "CorsFilter.java"
  - `project-name` > src > main > java > com > app > infrastructure > configs > security > CorsFilter.java
*/
void generateCorsFilter(string outputDirectory, string projectName) {
    string corsFilterPath ("");
    corsFilterPath += getProjectPath(outputDirectory, projectName);
    corsFilterPath += getInfrastructureLayerPath();
    corsFilterPath += "\\configs\\security\\CorsFilter.java";

    ofstream osToCorsFilterFile (corsFilterPath);
    osToCorsFilterFile << "package com.app.infrastructure.configs.security;\n";
    osToCorsFilterFile << "\n";
    osToCorsFilterFile << "import java.io.IOException;\n";
    osToCorsFilterFile << "\n";
    osToCorsFilterFile << "import javax.servlet.FilterChain;\n";
    osToCorsFilterFile << "import javax.servlet.ServletException;\n";
    osToCorsFilterFile << "import javax.servlet.http.HttpServletRequest;\n";
    osToCorsFilterFile << "import javax.servlet.http.HttpServletResponse;\n";
    osToCorsFilterFile << "\n";
    osToCorsFilterFile << "import org.springframework.stereotype.Component;\n";
    osToCorsFilterFile << "import org.springframework.web.filter.OncePerRequestFilter;\n";
    osToCorsFilterFile << "\n";
    osToCorsFilterFile << "@Component\n";
    osToCorsFilterFile << "public class CorsFilter extends OncePerRequestFilter {\n";
    osToCorsFilterFile << "\n";
    osToCorsFilterFile << "\t@Override\n";
    osToCorsFilterFile << "\tprotected void doFilterInternal(HttpServletRequest request, HttpServletResponse response, FilterChain filterChain)\n";
    osToCorsFilterFile << "\t\t\tthrows ServletException, IOException {\n";
    osToCorsFilterFile << "\t\tresponse.setHeader(\"Access-Control-Allow-Origin\", \"*\");\n";
    osToCorsFilterFile << "\t\tresponse.setHeader(\"Access-Control-Allow-Methods\", \"GET, POST, PUT, DELETE, OPTIONS\");\n";
    osToCorsFilterFile << "\t\tresponse.setHeader(\"Access-Control-Allow-Headers\", \"*\");\n";
    osToCorsFilterFile << "\t\tif (\"OPTIONS\".equals(request.getMethod())) {\n";
    osToCorsFilterFile << "\t\t\tresponse.setStatus(HttpServletResponse.SC_OK);\n";
    osToCorsFilterFile << "\t\t} else { \n";
    osToCorsFilterFile << "\t\t\tfilterChain.doFilter(request, response);\n";
    osToCorsFilterFile << "\t\t}\n";
    osToCorsFilterFile << "\t}\n";
    osToCorsFilterFile << "\n";
    osToCorsFilterFile << "}\n";
    osToCorsFilterFile.close();
}

/*
- Path of "JwtAuthorizationFilter.java"
  - `project-name` > src > main > java > com > app > infrastructure > configs > security > JwtAuthorizationFilter.java
*/
void generateJwtAuthorizationFilter(string outputDirectory, string projectName) {
    string jwtAuthorizationFilterPath ("");
    jwtAuthorizationFilterPath += getProjectPath(outputDirectory, projectName);
    jwtAuthorizationFilterPath += getInfrastructureLayerPath();
    jwtAuthorizationFilterPath += "\\configs\\security\\JwtAuthorizationFilter.java";

    ofstream osToJwtAuthorizationFilterFile (jwtAuthorizationFilterPath);
    osToJwtAuthorizationFilterFile << "package com.app.infrastructure.configs.security;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "import java.io.IOException;\n";
    osToJwtAuthorizationFilterFile << "import java.util.ArrayList;\n";
    osToJwtAuthorizationFilterFile << "import java.util.Iterator;\n";
    osToJwtAuthorizationFilterFile << "import java.util.List;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "import javax.servlet.FilterChain;\n";
    osToJwtAuthorizationFilterFile << "import javax.servlet.ServletException;\n";
    osToJwtAuthorizationFilterFile << "import javax.servlet.http.HttpServletRequest;\n";
    osToJwtAuthorizationFilterFile << "import javax.servlet.http.HttpServletResponse;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "import org.springframework.security.authentication.UsernamePasswordAuthenticationToken;\n";
    osToJwtAuthorizationFilterFile << "import org.springframework.security.core.authority.SimpleGrantedAuthority;\n";
    osToJwtAuthorizationFilterFile << "import org.springframework.security.core.context.SecurityContextHolder;\n";
    osToJwtAuthorizationFilterFile << "import org.springframework.web.filter.OncePerRequestFilter;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "import com.app.persistence.entities.SystemSecurityConfiguration;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "import io.jsonwebtoken.Claims;\n";
    osToJwtAuthorizationFilterFile << "import io.jsonwebtoken.Jws;\n";
    osToJwtAuthorizationFilterFile << "import io.jsonwebtoken.Jwts;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "public class JwtAuthorizationFilter extends OncePerRequestFilter {\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\tprivate final SystemSecurityConfiguration systemSecurityConfiguration;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\tpublic JwtAuthorizationFilter(SystemSecurityConfiguration systemSecurityConfiguration) {\n";
    osToJwtAuthorizationFilterFile << "\t\tthis.systemSecurityConfiguration = systemSecurityConfiguration;\n";
    osToJwtAuthorizationFilterFile << "\t}\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t@Override\n";
    osToJwtAuthorizationFilterFile << "\tprotected void doFilterInternal(HttpServletRequest request, HttpServletResponse response, FilterChain filterChain)\n";
    osToJwtAuthorizationFilterFile << "\t\t\tthrows ServletException, IOException {\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\tString authorizationHeaderValue = request.getHeader(\"Authorization\");\n";
    osToJwtAuthorizationFilterFile << "\t\tif (authorizationHeaderValue != null && authorizationHeaderValue.length() > 0 && authorizationHeaderValue.startsWith(\"Bearer \")) {\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\t\tString token = authorizationHeaderValue.replace(\"Bearer \", \"\");\n";
    osToJwtAuthorizationFilterFile << "\t\t\tJws<Claims> parsedToken = Jwts.parserBuilder()\n";
    osToJwtAuthorizationFilterFile << "\t\t\t\t\t\t\t\t\t\t\t.setSigningKey(systemSecurityConfiguration.getJwtSecret().getBytes())\n";
    osToJwtAuthorizationFilterFile << "\t\t\t\t\t\t\t\t\t\t\t.build()\n";
    osToJwtAuthorizationFilterFile << "\t\t\t\t\t\t\t\t\t\t\t.parseClaimsJws(token);\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\t\tString username = parsedToken.getBody().getSubject();\n";
    osToJwtAuthorizationFilterFile << "\t\t\tList<String> roles = (List<String>) parsedToken.getBody().get(\"rol\");\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\t\tList<SimpleGrantedAuthority> authorities = new ArrayList<SimpleGrantedAuthority>();\n";
    osToJwtAuthorizationFilterFile << "\t\t\tIterator<String> iterator = roles.iterator();\n";
    osToJwtAuthorizationFilterFile << "\t\t\twhile (iterator.hasNext()) {\n";
    osToJwtAuthorizationFilterFile << "\t\t\t\tString currentElement = iterator.next();\n";
    osToJwtAuthorizationFilterFile << "\t\t\t\tSimpleGrantedAuthority authority = new SimpleGrantedAuthority(currentElement);\n";
    osToJwtAuthorizationFilterFile << "\t\t\t\tauthorities.add(authority);\n";
    osToJwtAuthorizationFilterFile << "\t\t\t}\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\t\tif (username.length() == 0 && authorities.isEmpty()) return;\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\t\tSecurityContextHolder.getContext().setAuthentication(new UsernamePasswordAuthenticationToken(username, null, authorities));\n";
    osToJwtAuthorizationFilterFile << "\t\t}\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "\t\tfilterChain.doFilter(request, response);\n";
    osToJwtAuthorizationFilterFile << "\t}\n";
    osToJwtAuthorizationFilterFile << "\n";
    osToJwtAuthorizationFilterFile << "}\n";
    osToJwtAuthorizationFilterFile.close();
}

/*
- Path of "SecurityConfig.java"
  - `project-name` > src > main > java > com > app > infrastructure > configs > security > SecurityConfig.java
*/
void generateSecurityConfig(string outputDirectory, string projectName) {
    string securityConfigPath ("");
    securityConfigPath += getProjectPath(outputDirectory, projectName);
    securityConfigPath += getInfrastructureLayerPath();
    securityConfigPath += "\\configs\\security\\SecurityConfig.java";

    ofstream osToSecurityConfigFile (securityConfigPath);
    osToSecurityConfigFile << "package com.app.infrastructure.configs.security;\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "import org.springframework.beans.factory.annotation.Autowired;\n";
    osToSecurityConfigFile << "import org.springframework.context.annotation.Bean;\n";
    osToSecurityConfigFile << "import org.springframework.context.annotation.Configuration;\n";
    osToSecurityConfigFile << "import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;\n";
    osToSecurityConfigFile << "import org.springframework.security.config.annotation.web.builders.HttpSecurity;\n";
    osToSecurityConfigFile << "import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;\n";
    osToSecurityConfigFile << "import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;\n";
    osToSecurityConfigFile << "import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;\n";
    osToSecurityConfigFile << "import org.springframework.security.crypto.password.PasswordEncoder;\n";
    osToSecurityConfigFile << "import org.springframework.security.web.authentication.www.BasicAuthenticationFilter;\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "import com.app.domain.UserService;\n";
    osToSecurityConfigFile << "import com.app.persistence.entities.SystemSecurityConfiguration;\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "@Configuration\n";
    osToSecurityConfigFile << "@EnableWebSecurity\n";
    osToSecurityConfigFile << "public class SecurityConfig extends WebSecurityConfigurerAdapter {\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t@Autowired\n";
    osToSecurityConfigFile << "\tprivate UserService userService;\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t@Autowired\n";
    osToSecurityConfigFile << "\tprivate PasswordEncoder passwordEncoder;\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t@Bean\n";
    osToSecurityConfigFile << "\tpublic PasswordEncoder passwordEncoder() {\n";
    osToSecurityConfigFile << "\t\treturn new BCryptPasswordEncoder();\n";
    osToSecurityConfigFile << "\t}\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t@Override\n";
    osToSecurityConfigFile << "\tprotected void configure(HttpSecurity http) throws Exception {\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t\tSystemSecurityConfiguration systemSecurityConfiguration = userService.loadJwtConfigs();\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t\thttp.csrf().disable()\n";
    osToSecurityConfigFile << "\t\t\t.authorizeRequests()\n";
    osToSecurityConfigFile << "\t\t\t.anyRequest().authenticated()\n";
    osToSecurityConfigFile << "\t\t\t.and()\n";
    osToSecurityConfigFile << "\t\t\t.addFilterAfter(new JwtAuthorizationFilter(systemSecurityConfiguration), BasicAuthenticationFilter.class);\n";
    osToSecurityConfigFile << "\t}\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "\t@Override\n";
    osToSecurityConfigFile << "\tpublic void configure(AuthenticationManagerBuilder authenticationManagerBuilder) throws Exception {\n";
    osToSecurityConfigFile << "\t\tauthenticationManagerBuilder.userDetailsService(userService)\n";
    osToSecurityConfigFile << "\t\t\t\t\t\t\t\t\t.passwordEncoder(passwordEncoder);\n";
    osToSecurityConfigFile << "\t}\n";
    osToSecurityConfigFile << "\n";
    osToSecurityConfigFile << "}\n";
    osToSecurityConfigFile.close();
}

#endif
