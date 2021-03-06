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



#include "Json_Process.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_Process::Json_Process()
{
    m_InputStreamIsSet = false;
    m_Alive = false;
    m_AliveIsSet = false;
    m_ErrorStreamIsSet = false;
    m_OutputStreamIsSet = false;
}

Json_Process::~Json_Process()
{
}

void Json_Process::validate()
{
    // TODO: implement validation
}

web::json::value Json_Process::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InputStreamIsSet)
    {
        val[utility::conversions::to_string_t("inputStream")] = ModelBase::toJson(m_InputStream);
    }
    if(m_AliveIsSet)
    {
        val[utility::conversions::to_string_t("alive")] = ModelBase::toJson(m_Alive);
    }
    if(m_ErrorStreamIsSet)
    {
        val[utility::conversions::to_string_t("errorStream")] = ModelBase::toJson(m_ErrorStream);
    }
    if(m_OutputStreamIsSet)
    {
        val[utility::conversions::to_string_t("outputStream")] = ModelBase::toJson(m_OutputStream);
    }

    return val;
}

bool Json_Process::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputStream")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputStream"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_inputStream;
            ok &= ModelBase::fromJson(fieldValue, refVal_inputStream);
            setInputStream(refVal_inputStream);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alive")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alive"));
        if(!fieldValue.is_null())
        {
            bool refVal_alive;
            ok &= ModelBase::fromJson(fieldValue, refVal_alive);
            setAlive(refVal_alive);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorStream")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorStream"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_errorStream;
            ok &= ModelBase::fromJson(fieldValue, refVal_errorStream);
            setErrorStream(refVal_errorStream);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("outputStream")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outputStream"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_outputStream;
            ok &= ModelBase::fromJson(fieldValue, refVal_outputStream);
            setOutputStream(refVal_outputStream);
        }
    }
    return ok;
}

void Json_Process::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_InputStreamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("inputStream"), m_InputStream));
    }
    if(m_AliveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("alive"), m_Alive));
    }
    if(m_ErrorStreamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("errorStream"), m_ErrorStream));
    }
    if(m_OutputStreamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("outputStream"), m_OutputStream));
    }
}

bool Json_Process::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("inputStream")))
    {
        std::shared_ptr<Object> refVal_inputStream;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("inputStream")), refVal_inputStream );
        setInputStream(refVal_inputStream);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("alive")))
    {
        bool refVal_alive;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("alive")), refVal_alive );
        setAlive(refVal_alive);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("errorStream")))
    {
        std::shared_ptr<Object> refVal_errorStream;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("errorStream")), refVal_errorStream );
        setErrorStream(refVal_errorStream);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("outputStream")))
    {
        std::shared_ptr<Object> refVal_outputStream;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("outputStream")), refVal_outputStream );
        setOutputStream(refVal_outputStream);
    }
    return ok;
}

std::shared_ptr<Object> Json_Process::getInputStream() const
{
    return m_InputStream;
}

void Json_Process::setInputStream(const std::shared_ptr<Object>& value)
{
    m_InputStream = value;
    m_InputStreamIsSet = true;
}

bool Json_Process::inputStreamIsSet() const
{
    return m_InputStreamIsSet;
}

void Json_Process::unsetInputStream()
{
    m_InputStreamIsSet = false;
}
bool Json_Process::isAlive() const
{
    return m_Alive;
}

void Json_Process::setAlive(bool value)
{
    m_Alive = value;
    m_AliveIsSet = true;
}

bool Json_Process::aliveIsSet() const
{
    return m_AliveIsSet;
}

void Json_Process::unsetAlive()
{
    m_AliveIsSet = false;
}
std::shared_ptr<Object> Json_Process::getErrorStream() const
{
    return m_ErrorStream;
}

void Json_Process::setErrorStream(const std::shared_ptr<Object>& value)
{
    m_ErrorStream = value;
    m_ErrorStreamIsSet = true;
}

bool Json_Process::errorStreamIsSet() const
{
    return m_ErrorStreamIsSet;
}

void Json_Process::unsetErrorStream()
{
    m_ErrorStreamIsSet = false;
}
std::shared_ptr<Object> Json_Process::getOutputStream() const
{
    return m_OutputStream;
}

void Json_Process::setOutputStream(const std::shared_ptr<Object>& value)
{
    m_OutputStream = value;
    m_OutputStreamIsSet = true;
}

bool Json_Process::outputStreamIsSet() const
{
    return m_OutputStreamIsSet;
}

void Json_Process::unsetOutputStream()
{
    m_OutputStreamIsSet = false;
}
}
}
}
}


