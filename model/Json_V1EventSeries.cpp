/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.42
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_V1EventSeries.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1EventSeries::Json_V1EventSeries()
{
    m_Count = 0.0;
    m_CountIsSet = false;
    m_LastObservedTime = 0.0;
    m_LastObservedTimeIsSet = false;
    m_State = utility::conversions::to_string_t("");
    m_StateIsSet = false;
}

Json_V1EventSeries::~Json_V1EventSeries()
{
}

void Json_V1EventSeries::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1EventSeries::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_Count);
    }
    if(m_LastObservedTimeIsSet)
    {
        val[utility::conversions::to_string_t("lastObservedTime")] = ModelBase::toJson(m_LastObservedTime);
    }
    if(m_StateIsSet)
    {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(m_State);
    }

    return val;
}

bool Json_V1EventSeries::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            double refVal_count;
            ok &= ModelBase::fromJson(fieldValue, refVal_count);
            setCount(refVal_count);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastObservedTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastObservedTime"));
        if(!fieldValue.is_null())
        {
            double refVal_lastObservedTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_lastObservedTime);
            setLastObservedTime(refVal_lastObservedTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_state;
            ok &= ModelBase::fromJson(fieldValue, refVal_state);
            setState(refVal_state);
        }
    }
    return ok;
}

void Json_V1EventSeries::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_Count));
    }
    if(m_LastObservedTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastObservedTime"), m_LastObservedTime));
    }
    if(m_StateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("state"), m_State));
    }
}

bool Json_V1EventSeries::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        double refVal_count;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("count")), refVal_count );
        setCount(refVal_count);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastObservedTime")))
    {
        double refVal_lastObservedTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastObservedTime")), refVal_lastObservedTime );
        setLastObservedTime(refVal_lastObservedTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("state")))
    {
        utility::string_t refVal_state;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("state")), refVal_state );
        setState(refVal_state);
    }
    return ok;
}

double Json_V1EventSeries::getCount() const
{
    return m_Count;
}

void Json_V1EventSeries::setCount(double value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool Json_V1EventSeries::countIsSet() const
{
    return m_CountIsSet;
}

void Json_V1EventSeries::unsetCount()
{
    m_CountIsSet = false;
}
double Json_V1EventSeries::getLastObservedTime() const
{
    return m_LastObservedTime;
}

void Json_V1EventSeries::setLastObservedTime(double value)
{
    m_LastObservedTime = value;
    m_LastObservedTimeIsSet = true;
}

bool Json_V1EventSeries::lastObservedTimeIsSet() const
{
    return m_LastObservedTimeIsSet;
}

void Json_V1EventSeries::unsetLastObservedTime()
{
    m_LastObservedTimeIsSet = false;
}
utility::string_t Json_V1EventSeries::getState() const
{
    return m_State;
}

void Json_V1EventSeries::setState(const utility::string_t& value)
{
    m_State = value;
    m_StateIsSet = true;
}

bool Json_V1EventSeries::stateIsSet() const
{
    return m_StateIsSet;
}

void Json_V1EventSeries::unsetState()
{
    m_StateIsSet = false;
}
}
}
}
}


