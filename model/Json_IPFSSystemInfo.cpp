/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.18
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_IPFSSystemInfo.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_IPFSSystemInfo::Json_IPFSSystemInfo()
{
    m_PublicKey = utility::conversions::to_string_t("");
    m_PublicKeyIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_ProtocolVersion = utility::conversions::to_string_t("");
    m_ProtocolVersionIsSet = false;
    m_SwarmConnection = utility::conversions::to_string_t("");
    m_SwarmConnectionIsSet = false;
    m_AgentVersion = utility::conversions::to_string_t("");
    m_AgentVersionIsSet = false;
}

Json_IPFSSystemInfo::~Json_IPFSSystemInfo()
{
}

void Json_IPFSSystemInfo::validate()
{
    // TODO: implement validation
}

web::json::value Json_IPFSSystemInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PublicKeyIsSet)
    {
        val[utility::conversions::to_string_t("publicKey")] = ModelBase::toJson(m_PublicKey);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ProtocolVersionIsSet)
    {
        val[utility::conversions::to_string_t("protocolVersion")] = ModelBase::toJson(m_ProtocolVersion);
    }
    if(m_SwarmConnectionIsSet)
    {
        val[utility::conversions::to_string_t("swarmConnection")] = ModelBase::toJson(m_SwarmConnection);
    }
    if(m_AgentVersionIsSet)
    {
        val[utility::conversions::to_string_t("agentVersion")] = ModelBase::toJson(m_AgentVersion);
    }

    return val;
}

bool Json_IPFSSystemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicKey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicKey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_publicKey;
            ok &= ModelBase::fromJson(fieldValue, refVal_publicKey);
            setPublicKey(refVal_publicKey);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocolVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocolVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_protocolVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_protocolVersion);
            setProtocolVersion(refVal_protocolVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("swarmConnection")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swarmConnection"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_swarmConnection;
            ok &= ModelBase::fromJson(fieldValue, refVal_swarmConnection);
            setSwarmConnection(refVal_swarmConnection);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agentVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agentVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_agentVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_agentVersion);
            setAgentVersion(refVal_agentVersion);
        }
    }
    return ok;
}

void Json_IPFSSystemInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicKey"), m_PublicKey));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_ProtocolVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("protocolVersion"), m_ProtocolVersion));
    }
    if(m_SwarmConnectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("swarmConnection"), m_SwarmConnection));
    }
    if(m_AgentVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("agentVersion"), m_AgentVersion));
    }
}

bool Json_IPFSSystemInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("publicKey")))
    {
        utility::string_t refVal_publicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicKey")), refVal_publicKey );
        setPublicKey(refVal_publicKey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("protocolVersion")))
    {
        utility::string_t refVal_protocolVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("protocolVersion")), refVal_protocolVersion );
        setProtocolVersion(refVal_protocolVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("swarmConnection")))
    {
        utility::string_t refVal_swarmConnection;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("swarmConnection")), refVal_swarmConnection );
        setSwarmConnection(refVal_swarmConnection);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("agentVersion")))
    {
        utility::string_t refVal_agentVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("agentVersion")), refVal_agentVersion );
        setAgentVersion(refVal_agentVersion);
    }
    return ok;
}

utility::string_t Json_IPFSSystemInfo::getPublicKey() const
{
    return m_PublicKey;
}

void Json_IPFSSystemInfo::setPublicKey(const utility::string_t& value)
{
    m_PublicKey = value;
    m_PublicKeyIsSet = true;
}

bool Json_IPFSSystemInfo::publicKeyIsSet() const
{
    return m_PublicKeyIsSet;
}

void Json_IPFSSystemInfo::unsetPublicKey()
{
    m_PublicKeyIsSet = false;
}
utility::string_t Json_IPFSSystemInfo::getId() const
{
    return m_Id;
}

void Json_IPFSSystemInfo::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Json_IPFSSystemInfo::idIsSet() const
{
    return m_IdIsSet;
}

void Json_IPFSSystemInfo::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Json_IPFSSystemInfo::getProtocolVersion() const
{
    return m_ProtocolVersion;
}

void Json_IPFSSystemInfo::setProtocolVersion(const utility::string_t& value)
{
    m_ProtocolVersion = value;
    m_ProtocolVersionIsSet = true;
}

bool Json_IPFSSystemInfo::protocolVersionIsSet() const
{
    return m_ProtocolVersionIsSet;
}

void Json_IPFSSystemInfo::unsetProtocolVersion()
{
    m_ProtocolVersionIsSet = false;
}
utility::string_t Json_IPFSSystemInfo::getSwarmConnection() const
{
    return m_SwarmConnection;
}

void Json_IPFSSystemInfo::setSwarmConnection(const utility::string_t& value)
{
    m_SwarmConnection = value;
    m_SwarmConnectionIsSet = true;
}

bool Json_IPFSSystemInfo::swarmConnectionIsSet() const
{
    return m_SwarmConnectionIsSet;
}

void Json_IPFSSystemInfo::unsetSwarmConnection()
{
    m_SwarmConnectionIsSet = false;
}
utility::string_t Json_IPFSSystemInfo::getAgentVersion() const
{
    return m_AgentVersion;
}

void Json_IPFSSystemInfo::setAgentVersion(const utility::string_t& value)
{
    m_AgentVersion = value;
    m_AgentVersionIsSet = true;
}

bool Json_IPFSSystemInfo::agentVersionIsSet() const
{
    return m_AgentVersionIsSet;
}

void Json_IPFSSystemInfo::unsetAgentVersion()
{
    m_AgentVersionIsSet = false;
}
}
}
}
}


