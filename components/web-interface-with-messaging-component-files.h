#ifndef WEB_INTERFACE_WITH_MESSAGING_COMPONENT_FILES_H
#define WEB_INTERFACE_WITH_MESSAGING_COMPONENT_FILES_H

#include "../utils/utils.h"

/*
  - `project-name` > src > main > java > com > app > domain > messaging > consumers > SampleMessageListener
*/
void generateSampleMessageListener(string outputDirectory, string projectName) {
    string sampleMessageListenerPath ("");
    sampleMessageListenerPath += getProjectPath(outputDirectory, projectName);
    sampleMessageListenerPath += getDomainLayerPath();
    sampleMessageListenerPath += "\\messaging\\consumers\\SampleMessageListener";

    ofstream osToSampleMessageListenerFile (sampleMessageListenerPath);
    osToSampleMessageListenerFile << "// ABSTRACT EXAMPLE\n";
    osToSampleMessageListenerFile << "/*\n";
    osToSampleMessageListenerFile << "package com.app.domain.messaging.consumers;\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "import javax.jms.JMSException;\n";
    osToSampleMessageListenerFile << "import javax.jms.Message;\n";
    osToSampleMessageListenerFile << "import javax.jms.MessageListener;\n";
    osToSampleMessageListenerFile << "import javax.jms.ObjectMessage;\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "public class SampleMessageListener implements MessageListener {\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "\t@Override\n";
    osToSampleMessageListenerFile << "\tpublic void onMessage(Message message) {\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "\t\tObjectMessage objectMessage = (ObjectMessage) message;\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "\t\ttry {\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "\t\t\tCustomMessageType customMessageType = (<CAST_THE_TYPE_DOWN_TO_THE_OBJECT_UNDER_WORK>) objectMessage.getObject();\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "\t\t\t// DO YOUR BUSINESS LOGIC HERE\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "\t\t} catch (JMSException e) {\n";
    osToSampleMessageListenerFile << "\t\t\tthrow new RuntimeException(e);\n";
    osToSampleMessageListenerFile << "\t\t}\n";
    osToSampleMessageListenerFile << "\t}\n";
    osToSampleMessageListenerFile << "\n";
    osToSampleMessageListenerFile << "}\n";
    osToSampleMessageListenerFile << "*/\n";
    osToSampleMessageListenerFile.close();
}

/*
  - `project-name` > src > main > java > com > app > domain > messaging > producers > SampleProducer
*/
void generateSampleProducer(string outputDirectory, string projectName) {
    string sampleProducerPath ("");
    sampleProducerPath += getProjectPath(outputDirectory, projectName);
    sampleProducerPath += getDomainLayerPath();
    sampleProducerPath += "\\messaging\\producers\\SampleProducer";

    ofstream osToSampleProducerFile (sampleProducerPath);
    osToSampleProducerFile << "// ABSTRACT EXAMPLE\n";
    osToSampleProducerFile << "/*\n";
    osToSampleProducerFile << "package com.app.domain.messaging.producers;\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "import org.springframework.beans.factory.annotation.Autowired;\n";
    osToSampleProducerFile << "import org.springframework.jms.core.JmsTemplate;\n";
    osToSampleProducerFile << "import org.springframework.stereotype.Component;\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "@Component\n";
    osToSampleProducerFile << "public class SampleProducer {\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "\t@Autowired\n";
    osToSampleProducerFile << "\tprivate JmsTemplate jmsTemplate;\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "\t// MessageType can be either:\n";
    osToSampleProducerFile << "\t// 1. A request model type from the web interface directly\n";
    osToSampleProducerFile << "\t// 2. A custom message model type made in business logic layer (domain) to be send later\n";
    osToSampleProducerFile << "\t//    - make a package under \"messaging\" called models\n";
    osToSampleProducerFile << "\t//    - make another 2 packages under \"models\" called requests, responses\n";
    osToSampleProducerFile << "\tpublic void pushMessage(MessageType messageType) {\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "\t\t// DO YOUR BUSINESS LOGIC HERE\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "\t\tjmsTemplate.convertAndSend(<MESSAGE_TYPE_OBJECT_AFTER_PROCESSING_IF_ANY>);\n";
    osToSampleProducerFile << "\t}\n";
    osToSampleProducerFile << "\n";
    osToSampleProducerFile << "}\n";
    osToSampleProducerFile << "*/\n";
    osToSampleProducerFile.close();
}

#endif
