/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.53
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_OAuthToken.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_OAuthToken::Json_MDN_OAuthToken()
{
    m_Verifier = utility::conversions::to_string_t("");
    m_VerifierIsSet = false;
    m_Token = utility::conversions::to_string_t("");
    m_TokenIsSet = false;
}

Json_MDN_OAuthToken::~Json_MDN_OAuthToken()
{
}

void Json_MDN_OAuthToken::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_OAuthToken::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_VerifierIsSet)
    {
        val[utility::conversions::to_string_t("verifier")] = ModelBase::toJson(m_Verifier);
    }
    if(m_TokenIsSet)
    {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);
    }

    return val;
}

bool Json_MDN_OAuthToken::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verifier")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verifier"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_verifier;
            ok &= ModelBase::fromJson(fieldValue, refVal_verifier);
            setVerifier(refVal_verifier);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_token;
            ok &= ModelBase::fromJson(fieldValue, refVal_token);
            setToken(refVal_token);
        }
    }
    return ok;
}

void Json_MDN_OAuthToken::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_VerifierIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("verifier"), m_Verifier));
    }
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
    }
}

bool Json_MDN_OAuthToken::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("verifier")))
    {
        utility::string_t refVal_verifier;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("verifier")), refVal_verifier );
        setVerifier(refVal_verifier);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("token")))
    {
        utility::string_t refVal_token;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("token")), refVal_token );
        setToken(refVal_token);
    }
    return ok;
}

utility::string_t Json_MDN_OAuthToken::getVerifier() const
{
    return m_Verifier;
}

void Json_MDN_OAuthToken::setVerifier(const utility::string_t& value)
{
    m_Verifier = value;
    m_VerifierIsSet = true;
}

bool Json_MDN_OAuthToken::verifierIsSet() const
{
    return m_VerifierIsSet;
}

void Json_MDN_OAuthToken::unsetVerifier()
{
    m_VerifierIsSet = false;
}
utility::string_t Json_MDN_OAuthToken::getToken() const
{
    return m_Token;
}

void Json_MDN_OAuthToken::setToken(const utility::string_t& value)
{
    m_Token = value;
    m_TokenIsSet = true;
}

bool Json_MDN_OAuthToken::tokenIsSet() const
{
    return m_TokenIsSet;
}

void Json_MDN_OAuthToken::unsetToken()
{
    m_TokenIsSet = false;
}
}
}
}
}


