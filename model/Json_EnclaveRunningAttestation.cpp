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



#include "Json_EnclaveRunningAttestation.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_EnclaveRunningAttestation::Json_EnclaveRunningAttestation()
{
    m_NodeInfoIsSet = false;
    m_EnclaveProcessIsSet = false;
}

Json_EnclaveRunningAttestation::~Json_EnclaveRunningAttestation()
{
}

void Json_EnclaveRunningAttestation::validate()
{
    // TODO: implement validation
}

web::json::value Json_EnclaveRunningAttestation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NodeInfoIsSet)
    {
        val[utility::conversions::to_string_t("nodeInfo")] = ModelBase::toJson(m_NodeInfo);
    }
    if(m_EnclaveProcessIsSet)
    {
        val[utility::conversions::to_string_t("enclaveProcess")] = ModelBase::toJson(m_EnclaveProcess);
    }

    return val;
}

bool Json_EnclaveRunningAttestation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_NodeInfo> refVal_nodeInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_nodeInfo);
            setNodeInfo(refVal_nodeInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveProcess")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveProcess"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_EnclaveProcess> refVal_enclaveProcess;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveProcess);
            setEnclaveProcess(refVal_enclaveProcess);
        }
    }
    return ok;
}

void Json_EnclaveRunningAttestation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NodeInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeInfo"), m_NodeInfo));
    }
    if(m_EnclaveProcessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveProcess"), m_EnclaveProcess));
    }
}

bool Json_EnclaveRunningAttestation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("nodeInfo")))
    {
        std::shared_ptr<Json_NodeInfo> refVal_nodeInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeInfo")), refVal_nodeInfo );
        setNodeInfo(refVal_nodeInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveProcess")))
    {
        std::shared_ptr<Json_EnclaveProcess> refVal_enclaveProcess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveProcess")), refVal_enclaveProcess );
        setEnclaveProcess(refVal_enclaveProcess);
    }
    return ok;
}

std::shared_ptr<Json_NodeInfo> Json_EnclaveRunningAttestation::getNodeInfo() const
{
    return m_NodeInfo;
}

void Json_EnclaveRunningAttestation::setNodeInfo(const std::shared_ptr<Json_NodeInfo>& value)
{
    m_NodeInfo = value;
    m_NodeInfoIsSet = true;
}

bool Json_EnclaveRunningAttestation::nodeInfoIsSet() const
{
    return m_NodeInfoIsSet;
}

void Json_EnclaveRunningAttestation::unsetNodeInfo()
{
    m_NodeInfoIsSet = false;
}
std::shared_ptr<Json_EnclaveProcess> Json_EnclaveRunningAttestation::getEnclaveProcess() const
{
    return m_EnclaveProcess;
}

void Json_EnclaveRunningAttestation::setEnclaveProcess(const std::shared_ptr<Json_EnclaveProcess>& value)
{
    m_EnclaveProcess = value;
    m_EnclaveProcessIsSet = true;
}

bool Json_EnclaveRunningAttestation::enclaveProcessIsSet() const
{
    return m_EnclaveProcessIsSet;
}

void Json_EnclaveRunningAttestation::unsetEnclaveProcess()
{
    m_EnclaveProcessIsSet = false;
}
}
}
}
}


