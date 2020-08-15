/**
 * madana-api
 * <h1>API Quickstart Guide</h1>        <p>This documentation contains a Quickstart Guide, a few <a href=\"downloads.html\">sample clients</a>  for download and information about the available  <a href=\"resources.html\">endpoints</a>  and  <a href=\"data.html\">DataTypes</a>  </p>     <p>The <a target=\"_blank\" href=\"http://madana-explorer-staging.eu-central-1.elasticbeanstalk.com/login\">  MADANA Explorer</a> can be used to verify the interactions with the API</p>           <p>Internal use only. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a></p>         <br> <br>
 *
 * The version of the OpenAPI document: 0.4.12
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_signedData.h"

namespace com {
namespace madana {
namespace client {
namespace model {




Xml_ns0_signedData::Xml_ns0_signedData()
{
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_Fingerpint = utility::conversions::to_string_t("");
    m_FingerpintIsSet = false;
    m_Signature = utility::conversions::to_string_t("");
    m_SignatureIsSet = false;
}

Xml_ns0_signedData::~Xml_ns0_signedData()
{
}

void Xml_ns0_signedData::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_signedData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_FingerpintIsSet)
    {
        val[utility::conversions::to_string_t("fingerpint")] = ModelBase::toJson(m_Fingerpint);
    }
    if(m_SignatureIsSet)
    {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(m_Signature);
    }

    return val;
}

bool Xml_ns0_signedData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerpint")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerpint"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fingerpint;
            ok &= ModelBase::fromJson(fieldValue, refVal_fingerpint);
            setFingerpint(refVal_fingerpint);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signature")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_signature;
            ok &= ModelBase::fromJson(fieldValue, refVal_signature);
            setSignature(refVal_signature);
        }
    }
    return ok;
}

void Xml_ns0_signedData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_FingerpintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fingerpint"), m_Fingerpint));
    }
    if(m_SignatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signature"), m_Signature));
    }
}

bool Xml_ns0_signedData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fingerpint")))
    {
        utility::string_t refVal_fingerpint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fingerpint")), refVal_fingerpint );
        setFingerpint(refVal_fingerpint);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("signature")))
    {
        utility::string_t refVal_signature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("signature")), refVal_signature );
        setSignature(refVal_signature);
    }
    return ok;
}

utility::string_t Xml_ns0_signedData::getData() const
{
    return m_Data;
}

void Xml_ns0_signedData::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool Xml_ns0_signedData::dataIsSet() const
{
    return m_DataIsSet;
}

void Xml_ns0_signedData::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t Xml_ns0_signedData::getFingerpint() const
{
    return m_Fingerpint;
}

void Xml_ns0_signedData::setFingerpint(const utility::string_t& value)
{
    m_Fingerpint = value;
    m_FingerpintIsSet = true;
}

bool Xml_ns0_signedData::fingerpintIsSet() const
{
    return m_FingerpintIsSet;
}

void Xml_ns0_signedData::unsetFingerpint()
{
    m_FingerpintIsSet = false;
}
utility::string_t Xml_ns0_signedData::getSignature() const
{
    return m_Signature;
}

void Xml_ns0_signedData::setSignature(const utility::string_t& value)
{
    m_Signature = value;
    m_SignatureIsSet = true;
}

bool Xml_ns0_signedData::signatureIsSet() const
{
    return m_SignatureIsSet;
}

void Xml_ns0_signedData::unsetSignature()
{
    m_SignatureIsSet = false;
}
}
}
}
}


