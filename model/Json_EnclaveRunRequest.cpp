/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.56
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_EnclaveRunRequest.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_EnclaveRunRequest::Json_EnclaveRunRequest()
{
    m_EnvironmentUUID = utility::conversions::to_string_t("");
    m_EnvironmentUUIDIsSet = false;
    m_EnclaveExecutionType = utility::conversions::to_string_t("");
    m_EnclaveExecutionTypeIsSet = false;
    m_UsingDefaultRunConfig = false;
    m_UsingDefaultRunConfigIsSet = false;
    m_PortsIsSet = false;
    m_WireguardPublicKey = utility::conversions::to_string_t("");
    m_WireguardPublicKeyIsSet = false;
}

Json_EnclaveRunRequest::~Json_EnclaveRunRequest()
{
}

void Json_EnclaveRunRequest::validate()
{
    // TODO: implement validation
}

web::json::value Json_EnclaveRunRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EnvironmentUUIDIsSet)
    {
        val[utility::conversions::to_string_t("environmentUUID")] = ModelBase::toJson(m_EnvironmentUUID);
    }
    if(m_EnclaveExecutionTypeIsSet)
    {
        val[utility::conversions::to_string_t("enclaveExecutionType")] = ModelBase::toJson(m_EnclaveExecutionType);
    }
    if(m_UsingDefaultRunConfigIsSet)
    {
        val[utility::conversions::to_string_t("usingDefaultRunConfig")] = ModelBase::toJson(m_UsingDefaultRunConfig);
    }
    if(m_PortsIsSet)
    {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(m_Ports);
    }
    if(m_WireguardPublicKeyIsSet)
    {
        val[utility::conversions::to_string_t("wireguardPublicKey")] = ModelBase::toJson(m_WireguardPublicKey);
    }

    return val;
}

bool Json_EnclaveRunRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("environmentUUID")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environmentUUID"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_environmentUUID;
            ok &= ModelBase::fromJson(fieldValue, refVal_environmentUUID);
            setEnvironmentUUID(refVal_environmentUUID);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveExecutionType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveExecutionType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enclaveExecutionType;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveExecutionType);
            setEnclaveExecutionType(refVal_enclaveExecutionType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usingDefaultRunConfig")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usingDefaultRunConfig"));
        if(!fieldValue.is_null())
        {
            bool refVal_usingDefaultRunConfig;
            ok &= ModelBase::fromJson(fieldValue, refVal_usingDefaultRunConfig);
            setUsingDefaultRunConfig(refVal_usingDefaultRunConfig);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_EnclavePort>> refVal_ports;
            ok &= ModelBase::fromJson(fieldValue, refVal_ports);
            setPorts(refVal_ports);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wireguardPublicKey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wireguardPublicKey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wireguardPublicKey;
            ok &= ModelBase::fromJson(fieldValue, refVal_wireguardPublicKey);
            setWireguardPublicKey(refVal_wireguardPublicKey);
        }
    }
    return ok;
}

void Json_EnclaveRunRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EnvironmentUUIDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("environmentUUID"), m_EnvironmentUUID));
    }
    if(m_EnclaveExecutionTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveExecutionType"), m_EnclaveExecutionType));
    }
    if(m_UsingDefaultRunConfigIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("usingDefaultRunConfig"), m_UsingDefaultRunConfig));
    }
    if(m_PortsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ports"), m_Ports));
    }
    if(m_WireguardPublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wireguardPublicKey"), m_WireguardPublicKey));
    }
}

bool Json_EnclaveRunRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("environmentUUID")))
    {
        utility::string_t refVal_environmentUUID;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("environmentUUID")), refVal_environmentUUID );
        setEnvironmentUUID(refVal_environmentUUID);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveExecutionType")))
    {
        utility::string_t refVal_enclaveExecutionType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveExecutionType")), refVal_enclaveExecutionType );
        setEnclaveExecutionType(refVal_enclaveExecutionType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("usingDefaultRunConfig")))
    {
        bool refVal_usingDefaultRunConfig;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("usingDefaultRunConfig")), refVal_usingDefaultRunConfig );
        setUsingDefaultRunConfig(refVal_usingDefaultRunConfig);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ports")))
    {
        std::vector<std::shared_ptr<Json_EnclavePort>> refVal_ports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ports")), refVal_ports );
        setPorts(refVal_ports);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wireguardPublicKey")))
    {
        utility::string_t refVal_wireguardPublicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wireguardPublicKey")), refVal_wireguardPublicKey );
        setWireguardPublicKey(refVal_wireguardPublicKey);
    }
    return ok;
}

utility::string_t Json_EnclaveRunRequest::getEnvironmentUUID() const
{
    return m_EnvironmentUUID;
}

void Json_EnclaveRunRequest::setEnvironmentUUID(const utility::string_t& value)
{
    m_EnvironmentUUID = value;
    m_EnvironmentUUIDIsSet = true;
}

bool Json_EnclaveRunRequest::environmentUUIDIsSet() const
{
    return m_EnvironmentUUIDIsSet;
}

void Json_EnclaveRunRequest::unsetEnvironmentUUID()
{
    m_EnvironmentUUIDIsSet = false;
}
utility::string_t Json_EnclaveRunRequest::getEnclaveExecutionType() const
{
    return m_EnclaveExecutionType;
}

void Json_EnclaveRunRequest::setEnclaveExecutionType(const utility::string_t& value)
{
    m_EnclaveExecutionType = value;
    m_EnclaveExecutionTypeIsSet = true;
}

bool Json_EnclaveRunRequest::enclaveExecutionTypeIsSet() const
{
    return m_EnclaveExecutionTypeIsSet;
}

void Json_EnclaveRunRequest::unsetEnclaveExecutionType()
{
    m_EnclaveExecutionTypeIsSet = false;
}
bool Json_EnclaveRunRequest::isUsingDefaultRunConfig() const
{
    return m_UsingDefaultRunConfig;
}

void Json_EnclaveRunRequest::setUsingDefaultRunConfig(bool value)
{
    m_UsingDefaultRunConfig = value;
    m_UsingDefaultRunConfigIsSet = true;
}

bool Json_EnclaveRunRequest::usingDefaultRunConfigIsSet() const
{
    return m_UsingDefaultRunConfigIsSet;
}

void Json_EnclaveRunRequest::unsetUsingDefaultRunConfig()
{
    m_UsingDefaultRunConfigIsSet = false;
}
std::vector<std::shared_ptr<Json_EnclavePort>>& Json_EnclaveRunRequest::getPorts()
{
    return m_Ports;
}

void Json_EnclaveRunRequest::setPorts(const std::vector<std::shared_ptr<Json_EnclavePort>>& value)
{
    m_Ports = value;
    m_PortsIsSet = true;
}

bool Json_EnclaveRunRequest::portsIsSet() const
{
    return m_PortsIsSet;
}

void Json_EnclaveRunRequest::unsetPorts()
{
    m_PortsIsSet = false;
}
utility::string_t Json_EnclaveRunRequest::getWireguardPublicKey() const
{
    return m_WireguardPublicKey;
}

void Json_EnclaveRunRequest::setWireguardPublicKey(const utility::string_t& value)
{
    m_WireguardPublicKey = value;
    m_WireguardPublicKeyIsSet = true;
}

bool Json_EnclaveRunRequest::wireguardPublicKeyIsSet() const
{
    return m_WireguardPublicKeyIsSet;
}

void Json_EnclaveRunRequest::unsetWireguardPublicKey()
{
    m_WireguardPublicKeyIsSet = false;
}
}
}
}
}


