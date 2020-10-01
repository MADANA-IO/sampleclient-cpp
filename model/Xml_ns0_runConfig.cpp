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



#include "Xml_ns0_runConfig.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_runConfig::Xml_ns0_runConfig()
{
}

Xml_ns0_runConfig::~Xml_ns0_runConfig()
{
}

void Xml_ns0_runConfig::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_runConfig::toJson() const
{
    web::json::value val = this->Xml_ns0_runConfig_allOf::toJson();
    

    return val;
}

bool Xml_ns0_runConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_runConfig_allOf::fromJson(val);
    
    return ok;
}

void Xml_ns0_runConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ArgsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("args"), m_Args));
    }
    if(m_Disk_configIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("disk_config"), m_Disk_config));
    }
    if(m_EnvironmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("environment"), m_Environment));
    }
    if(m_RunIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("run"), m_Run));
    }
}

bool Xml_ns0_runConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("args")))
    {
        std::vector<utility::string_t> refVal_args;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("args")), refVal_args );
        setArgs(refVal_args);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("disk_config")))
    {
        std::vector<std::shared_ptr<Xml_ns0_disk_config>> refVal_disk_config;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("disk_config")), refVal_disk_config );
        setDiskConfig(refVal_disk_config);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("environment")))
    {
        std::shared_ptr<Object> refVal_environment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("environment")), refVal_environment );
        setEnvironment(refVal_environment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("run")))
    {
        utility::string_t refVal_run;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("run")), refVal_run );
        setRun(refVal_run);
    }
    return ok;
}

}
}
}
}


