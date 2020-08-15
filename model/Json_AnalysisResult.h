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

/*
 * Json_AnalysisResult.h
 *
 * 
 */

#ifndef COM_MADANA_CLIENT_MODEL_Json_AnalysisResult_H_
#define COM_MADANA_CLIENT_MODEL_Json_AnalysisResult_H_


#include "../ModelBase.h"

#include "Json_AnalysisVisualization.h"
#include <cpprest/details/basic_types.h>
#include "Json_AnalysisResultSubGroup.h"
#include <vector>

namespace com {
namespace madana {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_AnalysisResult
    : public ModelBase
{
public:
    Json_AnalysisResult();
    virtual ~Json_AnalysisResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_AnalysisResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRawBytes() const;
    bool rawBytesIsSet() const;
    void unsetRawBytes();

    void setRawBytes(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>>& getSubGroups();
    bool subGroupsIsSet() const;
    void unsetSubGroups();

    void setSubGroups(const std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_AnalysisVisualization> getVisualization() const;
    bool visualizationIsSet() const;
    void unsetVisualization();

    void setVisualization(const std::shared_ptr<Json_AnalysisVisualization>& value);


protected:
    utility::string_t m_RawBytes;
    bool m_RawBytesIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    std::vector<std::shared_ptr<Json_AnalysisResultSubGroup>> m_SubGroups;
    bool m_SubGroupsIsSet;
    std::shared_ptr<Json_AnalysisVisualization> m_Visualization;
    bool m_VisualizationIsSet;
};


}
}
}
}

#endif /* COM_MADANA_CLIENT_MODEL_Json_AnalysisResult_H_ */
