/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.2
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_runConfig_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_runConfig_allOf::Xml_ns0_runConfig_allOf()
{
    m_ArgsIsSet = false;
    m_Disk_configIsSet = false;
    m_EnvironmentIsSet = false;
    m_Run = utility::conversions::to_string_t("");
    m_RunIsSet = false;
}

Xml_ns0_runConfig_allOf::~Xml_ns0_runConfig_allOf()
{
}

void Xml_ns0_runConfig_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_runConfig_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ArgsIsSet)
    {
        val[utility::conversions::to_string_t("args")] = ModelBase::toJson(m_Args);
    }
    if(m_Disk_configIsSet)
    {
        val[utility::conversions::to_string_t("disk_config")] = ModelBase::toJson(m_Disk_config);
    }
    if(m_EnvironmentIsSet)
    {
        val[utility::conversions::to_string_t("environment")] = ModelBase::toJson(m_Environment);
    }
    if(m_RunIsSet)
    {
        val[utility::conversions::to_string_t("run")] = ModelBase::toJson(m_Run);
    }

    return val;
}

bool Xml_ns0_runConfig_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("args")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("args"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_args;
            ok &= ModelBase::fromJson(fieldValue, refVal_args);
            setArgs(refVal_args);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_config")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_config"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Xml_ns0_disk_config>> refVal_disk_config;
            ok &= ModelBase::fromJson(fieldValue, refVal_disk_config);
            setDiskConfig(refVal_disk_config);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_environment;
            ok &= ModelBase::fromJson(fieldValue, refVal_environment);
            setEnvironment(refVal_environment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_run;
            ok &= ModelBase::fromJson(fieldValue, refVal_run);
            setRun(refVal_run);
        }
    }
    return ok;
}

void Xml_ns0_runConfig_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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

bool Xml_ns0_runConfig_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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

std::vector<utility::string_t>& Xml_ns0_runConfig_allOf::getArgs()
{
    return m_Args;
}

void Xml_ns0_runConfig_allOf::setArgs(const std::vector<utility::string_t>& value)
{
    m_Args = value;
    m_ArgsIsSet = true;
}

bool Xml_ns0_runConfig_allOf::argsIsSet() const
{
    return m_ArgsIsSet;
}

void Xml_ns0_runConfig_allOf::unsetArgs()
{
    m_ArgsIsSet = false;
}
std::vector<std::shared_ptr<Xml_ns0_disk_config>>& Xml_ns0_runConfig_allOf::getDiskConfig()
{
    return m_Disk_config;
}

void Xml_ns0_runConfig_allOf::setDiskConfig(const std::vector<std::shared_ptr<Xml_ns0_disk_config>>& value)
{
    m_Disk_config = value;
    m_Disk_configIsSet = true;
}

bool Xml_ns0_runConfig_allOf::diskConfigIsSet() const
{
    return m_Disk_configIsSet;
}

void Xml_ns0_runConfig_allOf::unsetDisk_config()
{
    m_Disk_configIsSet = false;
}
std::shared_ptr<Object> Xml_ns0_runConfig_allOf::getEnvironment() const
{
    return m_Environment;
}

void Xml_ns0_runConfig_allOf::setEnvironment(const std::shared_ptr<Object>& value)
{
    m_Environment = value;
    m_EnvironmentIsSet = true;
}

bool Xml_ns0_runConfig_allOf::environmentIsSet() const
{
    return m_EnvironmentIsSet;
}

void Xml_ns0_runConfig_allOf::unsetEnvironment()
{
    m_EnvironmentIsSet = false;
}
utility::string_t Xml_ns0_runConfig_allOf::getRun() const
{
    return m_Run;
}

void Xml_ns0_runConfig_allOf::setRun(const utility::string_t& value)
{
    m_Run = value;
    m_RunIsSet = true;
}

bool Xml_ns0_runConfig_allOf::runIsSet() const
{
    return m_RunIsSet;
}

void Xml_ns0_runConfig_allOf::unsetRun()
{
    m_RunIsSet = false;
}
}
}
}
}


