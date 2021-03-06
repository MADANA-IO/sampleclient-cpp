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



#include "Json_AnalysisResult.h"

namespace com {
namespace madana {
namespace client {
namespace model {




Json_AnalysisResult::Json_AnalysisResult()
{
    m_RawBytes = utility::conversions::to_string_t("");
    m_RawBytesIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_SubGroupsIsSet = false;
    m_VisualizationIsSet = false;
}

Json_AnalysisResult::~Json_AnalysisResult()
{
}

void Json_AnalysisResult::validate()
{
    // TODO: implement validation
}

web::json::value Json_AnalysisResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RawBytesIsSet)
    {
        val[utility::conversions::to_string_t("rawBytes")] = ModelBase::toJson(m_RawBytes);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_SubGroupsIsSet)
    {
        val[utility::conversions::to_string_t("subGroups")] = ModelBase::toJson(m_SubGroups);
    }
    if(m_VisualizationIsSet)
    {
        val[utility::conversions::to_string_t("visualization")] = ModelBase::toJson(m_Visualization);
    }

    return val;
}

bool Json_AnalysisResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rawBytes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rawBytes"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_rawBytes;
            ok &= ModelBase::fromJson(fieldValue, refVal_rawBytes);
            setRawBytes(refVal_rawBytes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subGroups")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>> refVal_subGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_subGroups);
            setSubGroups(refVal_subGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visualization")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visualization"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_AnalysisVisualization> refVal_visualization;
            ok &= ModelBase::fromJson(fieldValue, refVal_visualization);
            setVisualization(refVal_visualization);
        }
    }
    return ok;
}

void Json_AnalysisResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_RawBytesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rawBytes"), m_RawBytes));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_SubGroupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subGroups"), m_SubGroups));
    }
    if(m_VisualizationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("visualization"), m_Visualization));
    }
}

bool Json_AnalysisResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("rawBytes")))
    {
        utility::string_t refVal_rawBytes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rawBytes")), refVal_rawBytes );
        setRawBytes(refVal_rawBytes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subGroups")))
    {
        std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>> refVal_subGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subGroups")), refVal_subGroups );
        setSubGroups(refVal_subGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("visualization")))
    {
        std::shared_ptr<Json_AnalysisVisualization> refVal_visualization;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("visualization")), refVal_visualization );
        setVisualization(refVal_visualization);
    }
    return ok;
}

utility::string_t Json_AnalysisResult::getRawBytes() const
{
    return m_RawBytes;
}

void Json_AnalysisResult::setRawBytes(const utility::string_t& value)
{
    m_RawBytes = value;
    m_RawBytesIsSet = true;
}

bool Json_AnalysisResult::rawBytesIsSet() const
{
    return m_RawBytesIsSet;
}

void Json_AnalysisResult::unsetRawBytes()
{
    m_RawBytesIsSet = false;
}
utility::string_t Json_AnalysisResult::getDescription() const
{
    return m_Description;
}

void Json_AnalysisResult::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Json_AnalysisResult::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Json_AnalysisResult::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>>& Json_AnalysisResult::getSubGroups()
{
    return m_SubGroups;
}

void Json_AnalysisResult::setSubGroups(const std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>>& value)
{
    m_SubGroups = value;
    m_SubGroupsIsSet = true;
}

bool Json_AnalysisResult::subGroupsIsSet() const
{
    return m_SubGroupsIsSet;
}

void Json_AnalysisResult::unsetSubGroups()
{
    m_SubGroupsIsSet = false;
}
std::shared_ptr<Json_AnalysisVisualization> Json_AnalysisResult::getVisualization() const
{
    return m_Visualization;
}

void Json_AnalysisResult::setVisualization(const std::shared_ptr<Json_AnalysisVisualization>& value)
{
    m_Visualization = value;
    m_VisualizationIsSet = true;
}

bool Json_AnalysisResult::visualizationIsSet() const
{
    return m_VisualizationIsSet;
}

void Json_AnalysisResult::unsetVisualization()
{
    m_VisualizationIsSet = false;
}
}
}
}
}


