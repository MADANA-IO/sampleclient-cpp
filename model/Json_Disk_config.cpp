/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.3
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_Disk_config.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_Disk_config::Json_Disk_config()
{
    m_Disk = utility::conversions::to_string_t("");
    m_DiskIsSet = false;
    m_Roothash_offset = 0;
    m_Roothash_offsetIsSet = false;
    m_Readonly = false;
    m_ReadonlyIsSet = false;
    m_Roothash = utility::conversions::to_string_t("");
    m_RoothashIsSet = false;
}

Json_Disk_config::~Json_Disk_config()
{
}

void Json_Disk_config::validate()
{
    // TODO: implement validation
}

web::json::value Json_Disk_config::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DiskIsSet)
    {
        val[utility::conversions::to_string_t("disk")] = ModelBase::toJson(m_Disk);
    }
    if(m_Roothash_offsetIsSet)
    {
        val[utility::conversions::to_string_t("roothash_offset")] = ModelBase::toJson(m_Roothash_offset);
    }
    if(m_ReadonlyIsSet)
    {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(m_Readonly);
    }
    if(m_RoothashIsSet)
    {
        val[utility::conversions::to_string_t("roothash")] = ModelBase::toJson(m_Roothash);
    }

    return val;
}

bool Json_Disk_config::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disk")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_disk;
            ok &= ModelBase::fromJson(fieldValue, refVal_disk);
            setDisk(refVal_disk);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roothash_offset")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roothash_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_roothash_offset;
            ok &= ModelBase::fromJson(fieldValue, refVal_roothash_offset);
            setRoothashOffset(refVal_roothash_offset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal_readonly;
            ok &= ModelBase::fromJson(fieldValue, refVal_readonly);
            setReadonly(refVal_readonly);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roothash")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roothash"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_roothash;
            ok &= ModelBase::fromJson(fieldValue, refVal_roothash);
            setRoothash(refVal_roothash);
        }
    }
    return ok;
}

void Json_Disk_config::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DiskIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("disk"), m_Disk));
    }
    if(m_Roothash_offsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("roothash_offset"), m_Roothash_offset));
    }
    if(m_ReadonlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("readonly"), m_Readonly));
    }
    if(m_RoothashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("roothash"), m_Roothash));
    }
}

bool Json_Disk_config::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("disk")))
    {
        utility::string_t refVal_disk;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("disk")), refVal_disk );
        setDisk(refVal_disk);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("roothash_offset")))
    {
        int32_t refVal_roothash_offset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("roothash_offset")), refVal_roothash_offset );
        setRoothashOffset(refVal_roothash_offset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("readonly")))
    {
        bool refVal_readonly;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("readonly")), refVal_readonly );
        setReadonly(refVal_readonly);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("roothash")))
    {
        utility::string_t refVal_roothash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("roothash")), refVal_roothash );
        setRoothash(refVal_roothash);
    }
    return ok;
}

utility::string_t Json_Disk_config::getDisk() const
{
    return m_Disk;
}

void Json_Disk_config::setDisk(const utility::string_t& value)
{
    m_Disk = value;
    m_DiskIsSet = true;
}

bool Json_Disk_config::diskIsSet() const
{
    return m_DiskIsSet;
}

void Json_Disk_config::unsetDisk()
{
    m_DiskIsSet = false;
}
int32_t Json_Disk_config::getRoothashOffset() const
{
    return m_Roothash_offset;
}

void Json_Disk_config::setRoothashOffset(int32_t value)
{
    m_Roothash_offset = value;
    m_Roothash_offsetIsSet = true;
}

bool Json_Disk_config::roothashOffsetIsSet() const
{
    return m_Roothash_offsetIsSet;
}

void Json_Disk_config::unsetRoothash_offset()
{
    m_Roothash_offsetIsSet = false;
}
bool Json_Disk_config::isReadonly() const
{
    return m_Readonly;
}

void Json_Disk_config::setReadonly(bool value)
{
    m_Readonly = value;
    m_ReadonlyIsSet = true;
}

bool Json_Disk_config::readonlyIsSet() const
{
    return m_ReadonlyIsSet;
}

void Json_Disk_config::unsetReadonly()
{
    m_ReadonlyIsSet = false;
}
utility::string_t Json_Disk_config::getRoothash() const
{
    return m_Roothash;
}

void Json_Disk_config::setRoothash(const utility::string_t& value)
{
    m_Roothash = value;
    m_RoothashIsSet = true;
}

bool Json_Disk_config::roothashIsSet() const
{
    return m_RoothashIsSet;
}

void Json_Disk_config::unsetRoothash()
{
    m_RoothashIsSet = false;
}
}
}
}
}


