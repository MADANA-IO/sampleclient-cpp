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



#include "Json_V1ManagedFieldsEntry.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1ManagedFieldsEntry::Json_V1ManagedFieldsEntry()
{
    m_Time = 0.0;
    m_TimeIsSet = false;
    m_FieldsType = utility::conversions::to_string_t("");
    m_FieldsTypeIsSet = false;
    m_ApiVersion = utility::conversions::to_string_t("");
    m_ApiVersionIsSet = false;
    m_Operation = utility::conversions::to_string_t("");
    m_OperationIsSet = false;
    m_FieldsV1IsSet = false;
    m_Manager = utility::conversions::to_string_t("");
    m_ManagerIsSet = false;
}

Json_V1ManagedFieldsEntry::~Json_V1ManagedFieldsEntry()
{
}

void Json_V1ManagedFieldsEntry::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1ManagedFieldsEntry::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(m_Time);
    }
    if(m_FieldsTypeIsSet)
    {
        val[utility::conversions::to_string_t("fieldsType")] = ModelBase::toJson(m_FieldsType);
    }
    if(m_ApiVersionIsSet)
    {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(m_ApiVersion);
    }
    if(m_OperationIsSet)
    {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(m_Operation);
    }
    if(m_FieldsV1IsSet)
    {
        val[utility::conversions::to_string_t("fieldsV1")] = ModelBase::toJson(m_FieldsV1);
    }
    if(m_ManagerIsSet)
    {
        val[utility::conversions::to_string_t("manager")] = ModelBase::toJson(m_Manager);
    }

    return val;
}

bool Json_V1ManagedFieldsEntry::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            double refVal_time;
            ok &= ModelBase::fromJson(fieldValue, refVal_time);
            setTime(refVal_time);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fieldsType")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldsType"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fieldsType;
            ok &= ModelBase::fromJson(fieldValue, refVal_fieldsType);
            setFieldsType(refVal_fieldsType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_apiVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_apiVersion);
            setApiVersion(refVal_apiVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_operation;
            ok &= ModelBase::fromJson(fieldValue, refVal_operation);
            setOperation(refVal_operation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fieldsV1")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldsV1"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_fieldsV1;
            ok &= ModelBase::fromJson(fieldValue, refVal_fieldsV1);
            setFieldsV1(refVal_fieldsV1);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manager")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manager"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_manager;
            ok &= ModelBase::fromJson(fieldValue, refVal_manager);
            setManager(refVal_manager);
        }
    }
    return ok;
}

void Json_V1ManagedFieldsEntry::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("time"), m_Time));
    }
    if(m_FieldsTypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fieldsType"), m_FieldsType));
    }
    if(m_ApiVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("apiVersion"), m_ApiVersion));
    }
    if(m_OperationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operation"), m_Operation));
    }
    if(m_FieldsV1IsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fieldsV1"), m_FieldsV1));
    }
    if(m_ManagerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("manager"), m_Manager));
    }
}

bool Json_V1ManagedFieldsEntry::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("time")))
    {
        double refVal_time;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("time")), refVal_time );
        setTime(refVal_time);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fieldsType")))
    {
        utility::string_t refVal_fieldsType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fieldsType")), refVal_fieldsType );
        setFieldsType(refVal_fieldsType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("apiVersion")))
    {
        utility::string_t refVal_apiVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("apiVersion")), refVal_apiVersion );
        setApiVersion(refVal_apiVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("operation")))
    {
        utility::string_t refVal_operation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operation")), refVal_operation );
        setOperation(refVal_operation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fieldsV1")))
    {
        std::shared_ptr<Object> refVal_fieldsV1;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fieldsV1")), refVal_fieldsV1 );
        setFieldsV1(refVal_fieldsV1);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("manager")))
    {
        utility::string_t refVal_manager;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("manager")), refVal_manager );
        setManager(refVal_manager);
    }
    return ok;
}

double Json_V1ManagedFieldsEntry::getTime() const
{
    return m_Time;
}

void Json_V1ManagedFieldsEntry::setTime(double value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool Json_V1ManagedFieldsEntry::timeIsSet() const
{
    return m_TimeIsSet;
}

void Json_V1ManagedFieldsEntry::unsetTime()
{
    m_TimeIsSet = false;
}
utility::string_t Json_V1ManagedFieldsEntry::getFieldsType() const
{
    return m_FieldsType;
}

void Json_V1ManagedFieldsEntry::setFieldsType(const utility::string_t& value)
{
    m_FieldsType = value;
    m_FieldsTypeIsSet = true;
}

bool Json_V1ManagedFieldsEntry::fieldsTypeIsSet() const
{
    return m_FieldsTypeIsSet;
}

void Json_V1ManagedFieldsEntry::unsetFieldsType()
{
    m_FieldsTypeIsSet = false;
}
utility::string_t Json_V1ManagedFieldsEntry::getApiVersion() const
{
    return m_ApiVersion;
}

void Json_V1ManagedFieldsEntry::setApiVersion(const utility::string_t& value)
{
    m_ApiVersion = value;
    m_ApiVersionIsSet = true;
}

bool Json_V1ManagedFieldsEntry::apiVersionIsSet() const
{
    return m_ApiVersionIsSet;
}

void Json_V1ManagedFieldsEntry::unsetApiVersion()
{
    m_ApiVersionIsSet = false;
}
utility::string_t Json_V1ManagedFieldsEntry::getOperation() const
{
    return m_Operation;
}

void Json_V1ManagedFieldsEntry::setOperation(const utility::string_t& value)
{
    m_Operation = value;
    m_OperationIsSet = true;
}

bool Json_V1ManagedFieldsEntry::operationIsSet() const
{
    return m_OperationIsSet;
}

void Json_V1ManagedFieldsEntry::unsetOperation()
{
    m_OperationIsSet = false;
}
std::shared_ptr<Object> Json_V1ManagedFieldsEntry::getFieldsV1() const
{
    return m_FieldsV1;
}

void Json_V1ManagedFieldsEntry::setFieldsV1(const std::shared_ptr<Object>& value)
{
    m_FieldsV1 = value;
    m_FieldsV1IsSet = true;
}

bool Json_V1ManagedFieldsEntry::fieldsV1IsSet() const
{
    return m_FieldsV1IsSet;
}

void Json_V1ManagedFieldsEntry::unsetFieldsV1()
{
    m_FieldsV1IsSet = false;
}
utility::string_t Json_V1ManagedFieldsEntry::getManager() const
{
    return m_Manager;
}

void Json_V1ManagedFieldsEntry::setManager(const utility::string_t& value)
{
    m_Manager = value;
    m_ManagerIsSet = true;
}

bool Json_V1ManagedFieldsEntry::managerIsSet() const
{
    return m_ManagerIsSet;
}

void Json_V1ManagedFieldsEntry::unsetManager()
{
    m_ManagerIsSet = false;
}
}
}
}
}


