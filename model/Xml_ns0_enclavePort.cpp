/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.8
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_enclavePort.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_enclavePort::Xml_ns0_enclavePort()
{
}

Xml_ns0_enclavePort::~Xml_ns0_enclavePort()
{
}

void Xml_ns0_enclavePort::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_enclavePort::toJson() const
{
    web::json::value val = this->Xml_ns0_enclavePort_allOf::toJson();
    

    return val;
}

bool Xml_ns0_enclavePort::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_enclavePort_allOf::fromJson(val);
    
    return ok;
}

void Xml_ns0_enclavePort::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("port"), m_Port));
    }
    if(m_ProtocolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("protocol"), m_Protocol));
    }
}

bool Xml_ns0_enclavePort::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("port")))
    {
        utility::string_t refVal_port;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("port")), refVal_port );
        setPort(refVal_port);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("protocol")))
    {
        utility::string_t refVal_protocol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("protocol")), refVal_protocol );
        setProtocol(refVal_protocol);
    }
    return ok;
}

}
}
}
}


