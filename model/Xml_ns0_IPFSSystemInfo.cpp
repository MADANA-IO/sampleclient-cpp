/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.5
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_IPFSSystemInfo.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_IPFSSystemInfo::Xml_ns0_IPFSSystemInfo()
{
}

Xml_ns0_IPFSSystemInfo::~Xml_ns0_IPFSSystemInfo()
{
}

void Xml_ns0_IPFSSystemInfo::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_IPFSSystemInfo::toJson() const
{
    web::json::value val = this->Xml_ns0_IPFSSystemInfo_allOf::toJson();
    

    return val;
}

bool Xml_ns0_IPFSSystemInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_IPFSSystemInfo_allOf::fromJson(val);
    
    return ok;
}

void Xml_ns0_IPFSSystemInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AgentVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("agentVersion"), m_AgentVersion));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_ProtocolVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("protocolVersion"), m_ProtocolVersion));
    }
    if(m_PublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicKey"), m_PublicKey));
    }
    if(m_SwarmConnectionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("swarmConnection"), m_SwarmConnection));
    }
}

bool Xml_ns0_IPFSSystemInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("agentVersion")))
    {
        utility::string_t refVal_agentVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("agentVersion")), refVal_agentVersion );
        setAgentVersion(refVal_agentVersion);
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
    if(multipart->hasContent(utility::conversions::to_string_t("publicKey")))
    {
        utility::string_t refVal_publicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicKey")), refVal_publicKey );
        setPublicKey(refVal_publicKey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("swarmConnection")))
    {
        utility::string_t refVal_swarmConnection;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("swarmConnection")), refVal_swarmConnection );
        setSwarmConnection(refVal_swarmConnection);
    }
    return ok;
}

}
}
}
}


