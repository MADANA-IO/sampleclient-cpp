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



#include "Json_V1ListMeta.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1ListMeta::Json_V1ListMeta()
{
    m_ResourceVersion = utility::conversions::to_string_t("");
    m_ResourceVersionIsSet = false;
    m_r_continue = utility::conversions::to_string_t("");
    m_r_continueIsSet = false;
    m_RemainingItemCount = 0.0;
    m_RemainingItemCountIsSet = false;
    m_SelfLink = utility::conversions::to_string_t("");
    m_SelfLinkIsSet = false;
}

Json_V1ListMeta::~Json_V1ListMeta()
{
}

void Json_V1ListMeta::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1ListMeta::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ResourceVersionIsSet)
    {
        val[utility::conversions::to_string_t("resourceVersion")] = ModelBase::toJson(m_ResourceVersion);
    }
    if(m_r_continueIsSet)
    {
        val[utility::conversions::to_string_t("continue")] = ModelBase::toJson(m_r_continue);
    }
    if(m_RemainingItemCountIsSet)
    {
        val[utility::conversions::to_string_t("remainingItemCount")] = ModelBase::toJson(m_RemainingItemCount);
    }
    if(m_SelfLinkIsSet)
    {
        val[utility::conversions::to_string_t("selfLink")] = ModelBase::toJson(m_SelfLink);
    }

    return val;
}

bool Json_V1ListMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resourceVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_resourceVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_resourceVersion);
            setResourceVersion(refVal_resourceVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continue")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_continue;
            ok &= ModelBase::fromJson(fieldValue, refVal_continue);
            setRContinue(refVal_continue);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remainingItemCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remainingItemCount"));
        if(!fieldValue.is_null())
        {
            double refVal_remainingItemCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_remainingItemCount);
            setRemainingItemCount(refVal_remainingItemCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("selfLink")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selfLink"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_selfLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_selfLink);
            setSelfLink(refVal_selfLink);
        }
    }
    return ok;
}

void Json_V1ListMeta::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ResourceVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resourceVersion"), m_ResourceVersion));
    }
    if(m_r_continueIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("continue"), m_r_continue));
    }
    if(m_RemainingItemCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remainingItemCount"), m_RemainingItemCount));
    }
    if(m_SelfLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("selfLink"), m_SelfLink));
    }
}

bool Json_V1ListMeta::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("resourceVersion")))
    {
        utility::string_t refVal_resourceVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("resourceVersion")), refVal_resourceVersion );
        setResourceVersion(refVal_resourceVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("continue")))
    {
        utility::string_t refVal_continue;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("continue")), refVal_continue );
        setRContinue(refVal_continue);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("remainingItemCount")))
    {
        double refVal_remainingItemCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("remainingItemCount")), refVal_remainingItemCount );
        setRemainingItemCount(refVal_remainingItemCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("selfLink")))
    {
        utility::string_t refVal_selfLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("selfLink")), refVal_selfLink );
        setSelfLink(refVal_selfLink);
    }
    return ok;
}

utility::string_t Json_V1ListMeta::getResourceVersion() const
{
    return m_ResourceVersion;
}

void Json_V1ListMeta::setResourceVersion(const utility::string_t& value)
{
    m_ResourceVersion = value;
    m_ResourceVersionIsSet = true;
}

bool Json_V1ListMeta::resourceVersionIsSet() const
{
    return m_ResourceVersionIsSet;
}

void Json_V1ListMeta::unsetResourceVersion()
{
    m_ResourceVersionIsSet = false;
}
utility::string_t Json_V1ListMeta::getRContinue() const
{
    return m_r_continue;
}

void Json_V1ListMeta::setRContinue(const utility::string_t& value)
{
    m_r_continue = value;
    m_r_continueIsSet = true;
}

bool Json_V1ListMeta::rContinueIsSet() const
{
    return m_r_continueIsSet;
}

void Json_V1ListMeta::unsetr_continue()
{
    m_r_continueIsSet = false;
}
double Json_V1ListMeta::getRemainingItemCount() const
{
    return m_RemainingItemCount;
}

void Json_V1ListMeta::setRemainingItemCount(double value)
{
    m_RemainingItemCount = value;
    m_RemainingItemCountIsSet = true;
}

bool Json_V1ListMeta::remainingItemCountIsSet() const
{
    return m_RemainingItemCountIsSet;
}

void Json_V1ListMeta::unsetRemainingItemCount()
{
    m_RemainingItemCountIsSet = false;
}
utility::string_t Json_V1ListMeta::getSelfLink() const
{
    return m_SelfLink;
}

void Json_V1ListMeta::setSelfLink(const utility::string_t& value)
{
    m_SelfLink = value;
    m_SelfLinkIsSet = true;
}

bool Json_V1ListMeta::selfLinkIsSet() const
{
    return m_SelfLinkIsSet;
}

void Json_V1ListMeta::unsetSelfLink()
{
    m_SelfLinkIsSet = false;
}
}
}
}
}


