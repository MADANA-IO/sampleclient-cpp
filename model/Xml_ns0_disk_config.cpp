/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.6
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_disk_config.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_disk_config::Xml_ns0_disk_config()
{
}

Xml_ns0_disk_config::~Xml_ns0_disk_config()
{
}

void Xml_ns0_disk_config::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_disk_config::toJson() const
{
    web::json::value val = this->Xml_ns0_disk_config_allOf::toJson();
    

    return val;
}

bool Xml_ns0_disk_config::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_disk_config_allOf::fromJson(val);
    
    return ok;
}

void Xml_ns0_disk_config::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ReadonlyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("readonly"), m_Readonly));
    }
    if(m_RoothashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("roothash"), m_Roothash));
    }
    if(m_Roothash_offsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("roothash_offset"), m_Roothash_offset));
    }
}

bool Xml_ns0_disk_config::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("roothash_offset")))
    {
        int32_t refVal_roothash_offset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("roothash_offset")), refVal_roothash_offset );
        setRoothashOffset(refVal_roothash_offset);
    }
    return ok;
}

}
}
}
}


