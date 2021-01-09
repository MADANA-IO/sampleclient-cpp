/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.17
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_V1Event.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_V1Event_H_
#define COM_MADANA_APICLIENT_MODEL_Json_V1Event_H_


#include "../ModelBase.h"

#include "Json_V1EventSource.h"
#include "Json_V1EventSeries.h"
#include "Json_V1ObjectMeta.h"
#include <cpprest/details/basic_types.h>
#include "Json_V1ObjectReference.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_V1Event
    : public ModelBase
{
public:
    Json_V1Event();
    virtual ~Json_V1Event();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_V1Event members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMessage() const;
    bool messageIsSet() const;
    void unsetMessage();

    void setMessage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getFirstTimestamp() const;
    bool firstTimestampIsSet() const;
    void unsetFirstTimestamp();

    void setFirstTimestamp(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1ObjectReference> getRelated() const;
    bool relatedIsSet() const;
    void unsetRelated();

    void setRelated(const std::shared_ptr<Json_V1ObjectReference>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAction() const;
    bool actionIsSet() const;
    void unsetAction();

    void setAction(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1ObjectMeta> getMetadata() const;
    bool metadataIsSet() const;
    void unsetMetadata();

    void setMetadata(const std::shared_ptr<Json_V1ObjectMeta>& value);

    /// <summary>
    /// 
    /// </summary>
    double getEventTime() const;
    bool eventTimeIsSet() const;
    void unsetEventTime();

    void setEventTime(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetApiVersion();

    void setApiVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReportingInstance() const;
    bool reportingInstanceIsSet() const;
    void unsetReportingInstance();

    void setReportingInstance(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReportingComponent() const;
    bool reportingComponentIsSet() const;
    void unsetReportingComponent();

    void setReportingComponent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getKind() const;
    bool kindIsSet() const;
    void unsetKind();

    void setKind(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1EventSource> getSource() const;
    bool sourceIsSet() const;
    void unsetSource();

    void setSource(const std::shared_ptr<Json_V1EventSource>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1EventSeries> getSeries() const;
    bool seriesIsSet() const;
    void unsetSeries();

    void setSeries(const std::shared_ptr<Json_V1EventSeries>& value);

    /// <summary>
    /// 
    /// </summary>
    double getLastTimestamp() const;
    bool lastTimestampIsSet() const;
    void unsetLastTimestamp();

    void setLastTimestamp(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getReason() const;
    bool reasonIsSet() const;
    void unsetReason();

    void setReason(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1ObjectReference> getInvolvedObject() const;
    bool involvedObjectIsSet() const;
    void unsetInvolvedObject();

    void setInvolvedObject(const std::shared_ptr<Json_V1ObjectReference>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getType() const;
    bool typeIsSet() const;
    void unsetType();

    void setType(const utility::string_t& value);


protected:
    utility::string_t m_Message;
    bool m_MessageIsSet;
    double m_FirstTimestamp;
    bool m_FirstTimestampIsSet;
    std::shared_ptr<Json_V1ObjectReference> m_Related;
    bool m_RelatedIsSet;
    utility::string_t m_Action;
    bool m_ActionIsSet;
    std::shared_ptr<Json_V1ObjectMeta> m_Metadata;
    bool m_MetadataIsSet;
    double m_EventTime;
    bool m_EventTimeIsSet;
    utility::string_t m_ApiVersion;
    bool m_ApiVersionIsSet;
    utility::string_t m_ReportingInstance;
    bool m_ReportingInstanceIsSet;
    utility::string_t m_ReportingComponent;
    bool m_ReportingComponentIsSet;
    double m_Count;
    bool m_CountIsSet;
    utility::string_t m_Kind;
    bool m_KindIsSet;
    std::shared_ptr<Json_V1EventSource> m_Source;
    bool m_SourceIsSet;
    std::shared_ptr<Json_V1EventSeries> m_Series;
    bool m_SeriesIsSet;
    double m_LastTimestamp;
    bool m_LastTimestampIsSet;
    utility::string_t m_Reason;
    bool m_ReasonIsSet;
    std::shared_ptr<Json_V1ObjectReference> m_InvolvedObject;
    bool m_InvolvedObjectIsSet;
    utility::string_t m_Type;
    bool m_TypeIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_V1Event_H_ */
