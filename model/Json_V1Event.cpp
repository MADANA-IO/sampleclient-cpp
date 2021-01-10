/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.18
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_V1Event.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1Event::Json_V1Event()
{
    m_SourceIsSet = false;
    m_ReportingComponent = utility::conversions::to_string_t("");
    m_ReportingComponentIsSet = false;
    m_MetadataIsSet = false;
    m_LastTimestamp = 0.0;
    m_LastTimestampIsSet = false;
    m_Reason = utility::conversions::to_string_t("");
    m_ReasonIsSet = false;
    m_Count = 0.0;
    m_CountIsSet = false;
    m_ApiVersion = utility::conversions::to_string_t("");
    m_ApiVersionIsSet = false;
    m_SeriesIsSet = false;
    m_ReportingInstance = utility::conversions::to_string_t("");
    m_ReportingInstanceIsSet = false;
    m_EventTime = 0.0;
    m_EventTimeIsSet = false;
    m_Action = utility::conversions::to_string_t("");
    m_ActionIsSet = false;
    m_Kind = utility::conversions::to_string_t("");
    m_KindIsSet = false;
    m_Type = utility::conversions::to_string_t("");
    m_TypeIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
    m_FirstTimestamp = 0.0;
    m_FirstTimestampIsSet = false;
    m_RelatedIsSet = false;
    m_InvolvedObjectIsSet = false;
}

Json_V1Event::~Json_V1Event()
{
}

void Json_V1Event::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1Event::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SourceIsSet)
    {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(m_Source);
    }
    if(m_ReportingComponentIsSet)
    {
        val[utility::conversions::to_string_t("reportingComponent")] = ModelBase::toJson(m_ReportingComponent);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(m_Metadata);
    }
    if(m_LastTimestampIsSet)
    {
        val[utility::conversions::to_string_t("lastTimestamp")] = ModelBase::toJson(m_LastTimestamp);
    }
    if(m_ReasonIsSet)
    {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(m_Reason);
    }
    if(m_CountIsSet)
    {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(m_Count);
    }
    if(m_ApiVersionIsSet)
    {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(m_ApiVersion);
    }
    if(m_SeriesIsSet)
    {
        val[utility::conversions::to_string_t("series")] = ModelBase::toJson(m_Series);
    }
    if(m_ReportingInstanceIsSet)
    {
        val[utility::conversions::to_string_t("reportingInstance")] = ModelBase::toJson(m_ReportingInstance);
    }
    if(m_EventTimeIsSet)
    {
        val[utility::conversions::to_string_t("eventTime")] = ModelBase::toJson(m_EventTime);
    }
    if(m_ActionIsSet)
    {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(m_Action);
    }
    if(m_KindIsSet)
    {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(m_Kind);
    }
    if(m_TypeIsSet)
    {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(m_Type);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }
    if(m_FirstTimestampIsSet)
    {
        val[utility::conversions::to_string_t("firstTimestamp")] = ModelBase::toJson(m_FirstTimestamp);
    }
    if(m_RelatedIsSet)
    {
        val[utility::conversions::to_string_t("related")] = ModelBase::toJson(m_Related);
    }
    if(m_InvolvedObjectIsSet)
    {
        val[utility::conversions::to_string_t("involvedObject")] = ModelBase::toJson(m_InvolvedObject);
    }

    return val;
}

bool Json_V1Event::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1EventSource> refVal_source;
            ok &= ModelBase::fromJson(fieldValue, refVal_source);
            setSource(refVal_source);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reportingComponent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportingComponent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_reportingComponent;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportingComponent);
            setReportingComponent(refVal_reportingComponent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1ObjectMeta> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastTimestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastTimestamp"));
        if(!fieldValue.is_null())
        {
            double refVal_lastTimestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_lastTimestamp);
            setLastTimestamp(refVal_lastTimestamp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_reason;
            ok &= ModelBase::fromJson(fieldValue, refVal_reason);
            setReason(refVal_reason);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("series")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("series"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1EventSeries> refVal_series;
            ok &= ModelBase::fromJson(fieldValue, refVal_series);
            setSeries(refVal_series);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reportingInstance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reportingInstance"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_reportingInstance;
            ok &= ModelBase::fromJson(fieldValue, refVal_reportingInstance);
            setReportingInstance(refVal_reportingInstance);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eventTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eventTime"));
        if(!fieldValue.is_null())
        {
            double refVal_eventTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_eventTime);
            setEventTime(refVal_eventTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_action;
            ok &= ModelBase::fromJson(fieldValue, refVal_action);
            setAction(refVal_action);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_kind;
            ok &= ModelBase::fromJson(fieldValue, refVal_kind);
            setKind(refVal_kind);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_type;
            ok &= ModelBase::fromJson(fieldValue, refVal_type);
            setType(refVal_type);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_message;
            ok &= ModelBase::fromJson(fieldValue, refVal_message);
            setMessage(refVal_message);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstTimestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstTimestamp"));
        if(!fieldValue.is_null())
        {
            double refVal_firstTimestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_firstTimestamp);
            setFirstTimestamp(refVal_firstTimestamp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1ObjectReference> refVal_related;
            ok &= ModelBase::fromJson(fieldValue, refVal_related);
            setRelated(refVal_related);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("involvedObject")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("involvedObject"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1ObjectReference> refVal_involvedObject;
            ok &= ModelBase::fromJson(fieldValue, refVal_involvedObject);
            setInvolvedObject(refVal_involvedObject);
        }
    }
    return ok;
}

void Json_V1Event::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SourceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("source"), m_Source));
    }
    if(m_ReportingComponentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportingComponent"), m_ReportingComponent));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("metadata"), m_Metadata));
    }
    if(m_LastTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastTimestamp"), m_LastTimestamp));
    }
    if(m_ReasonIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reason"), m_Reason));
    }
    if(m_CountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("count"), m_Count));
    }
    if(m_ApiVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("apiVersion"), m_ApiVersion));
    }
    if(m_SeriesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("series"), m_Series));
    }
    if(m_ReportingInstanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("reportingInstance"), m_ReportingInstance));
    }
    if(m_EventTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("eventTime"), m_EventTime));
    }
    if(m_ActionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("action"), m_Action));
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("kind"), m_Kind));
    }
    if(m_TypeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("type"), m_Type));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
    }
    if(m_FirstTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstTimestamp"), m_FirstTimestamp));
    }
    if(m_RelatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("related"), m_Related));
    }
    if(m_InvolvedObjectIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("involvedObject"), m_InvolvedObject));
    }
}

bool Json_V1Event::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("source")))
    {
        std::shared_ptr<Json_V1EventSource> refVal_source;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("source")), refVal_source );
        setSource(refVal_source);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reportingComponent")))
    {
        utility::string_t refVal_reportingComponent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportingComponent")), refVal_reportingComponent );
        setReportingComponent(refVal_reportingComponent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("metadata")))
    {
        std::shared_ptr<Json_V1ObjectMeta> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("metadata")), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastTimestamp")))
    {
        double refVal_lastTimestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastTimestamp")), refVal_lastTimestamp );
        setLastTimestamp(refVal_lastTimestamp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reason")))
    {
        utility::string_t refVal_reason;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reason")), refVal_reason );
        setReason(refVal_reason);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("count")))
    {
        double refVal_count;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("count")), refVal_count );
        setCount(refVal_count);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("apiVersion")))
    {
        utility::string_t refVal_apiVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("apiVersion")), refVal_apiVersion );
        setApiVersion(refVal_apiVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("series")))
    {
        std::shared_ptr<Json_V1EventSeries> refVal_series;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("series")), refVal_series );
        setSeries(refVal_series);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("reportingInstance")))
    {
        utility::string_t refVal_reportingInstance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("reportingInstance")), refVal_reportingInstance );
        setReportingInstance(refVal_reportingInstance);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("eventTime")))
    {
        double refVal_eventTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("eventTime")), refVal_eventTime );
        setEventTime(refVal_eventTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("action")))
    {
        utility::string_t refVal_action;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("action")), refVal_action );
        setAction(refVal_action);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("kind")))
    {
        utility::string_t refVal_kind;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("kind")), refVal_kind );
        setKind(refVal_kind);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("type")))
    {
        utility::string_t refVal_type;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("type")), refVal_type );
        setType(refVal_type);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        utility::string_t refVal_message;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("message")), refVal_message );
        setMessage(refVal_message);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("firstTimestamp")))
    {
        double refVal_firstTimestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstTimestamp")), refVal_firstTimestamp );
        setFirstTimestamp(refVal_firstTimestamp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("related")))
    {
        std::shared_ptr<Json_V1ObjectReference> refVal_related;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("related")), refVal_related );
        setRelated(refVal_related);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("involvedObject")))
    {
        std::shared_ptr<Json_V1ObjectReference> refVal_involvedObject;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("involvedObject")), refVal_involvedObject );
        setInvolvedObject(refVal_involvedObject);
    }
    return ok;
}

std::shared_ptr<Json_V1EventSource> Json_V1Event::getSource() const
{
    return m_Source;
}

void Json_V1Event::setSource(const std::shared_ptr<Json_V1EventSource>& value)
{
    m_Source = value;
    m_SourceIsSet = true;
}

bool Json_V1Event::sourceIsSet() const
{
    return m_SourceIsSet;
}

void Json_V1Event::unsetSource()
{
    m_SourceIsSet = false;
}
utility::string_t Json_V1Event::getReportingComponent() const
{
    return m_ReportingComponent;
}

void Json_V1Event::setReportingComponent(const utility::string_t& value)
{
    m_ReportingComponent = value;
    m_ReportingComponentIsSet = true;
}

bool Json_V1Event::reportingComponentIsSet() const
{
    return m_ReportingComponentIsSet;
}

void Json_V1Event::unsetReportingComponent()
{
    m_ReportingComponentIsSet = false;
}
std::shared_ptr<Json_V1ObjectMeta> Json_V1Event::getMetadata() const
{
    return m_Metadata;
}

void Json_V1Event::setMetadata(const std::shared_ptr<Json_V1ObjectMeta>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool Json_V1Event::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void Json_V1Event::unsetMetadata()
{
    m_MetadataIsSet = false;
}
double Json_V1Event::getLastTimestamp() const
{
    return m_LastTimestamp;
}

void Json_V1Event::setLastTimestamp(double value)
{
    m_LastTimestamp = value;
    m_LastTimestampIsSet = true;
}

bool Json_V1Event::lastTimestampIsSet() const
{
    return m_LastTimestampIsSet;
}

void Json_V1Event::unsetLastTimestamp()
{
    m_LastTimestampIsSet = false;
}
utility::string_t Json_V1Event::getReason() const
{
    return m_Reason;
}

void Json_V1Event::setReason(const utility::string_t& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}

bool Json_V1Event::reasonIsSet() const
{
    return m_ReasonIsSet;
}

void Json_V1Event::unsetReason()
{
    m_ReasonIsSet = false;
}
double Json_V1Event::getCount() const
{
    return m_Count;
}

void Json_V1Event::setCount(double value)
{
    m_Count = value;
    m_CountIsSet = true;
}

bool Json_V1Event::countIsSet() const
{
    return m_CountIsSet;
}

void Json_V1Event::unsetCount()
{
    m_CountIsSet = false;
}
utility::string_t Json_V1Event::getApiVersion() const
{
    return m_ApiVersion;
}

void Json_V1Event::setApiVersion(const utility::string_t& value)
{
    m_ApiVersion = value;
    m_ApiVersionIsSet = true;
}

bool Json_V1Event::apiVersionIsSet() const
{
    return m_ApiVersionIsSet;
}

void Json_V1Event::unsetApiVersion()
{
    m_ApiVersionIsSet = false;
}
std::shared_ptr<Json_V1EventSeries> Json_V1Event::getSeries() const
{
    return m_Series;
}

void Json_V1Event::setSeries(const std::shared_ptr<Json_V1EventSeries>& value)
{
    m_Series = value;
    m_SeriesIsSet = true;
}

bool Json_V1Event::seriesIsSet() const
{
    return m_SeriesIsSet;
}

void Json_V1Event::unsetSeries()
{
    m_SeriesIsSet = false;
}
utility::string_t Json_V1Event::getReportingInstance() const
{
    return m_ReportingInstance;
}

void Json_V1Event::setReportingInstance(const utility::string_t& value)
{
    m_ReportingInstance = value;
    m_ReportingInstanceIsSet = true;
}

bool Json_V1Event::reportingInstanceIsSet() const
{
    return m_ReportingInstanceIsSet;
}

void Json_V1Event::unsetReportingInstance()
{
    m_ReportingInstanceIsSet = false;
}
double Json_V1Event::getEventTime() const
{
    return m_EventTime;
}

void Json_V1Event::setEventTime(double value)
{
    m_EventTime = value;
    m_EventTimeIsSet = true;
}

bool Json_V1Event::eventTimeIsSet() const
{
    return m_EventTimeIsSet;
}

void Json_V1Event::unsetEventTime()
{
    m_EventTimeIsSet = false;
}
utility::string_t Json_V1Event::getAction() const
{
    return m_Action;
}

void Json_V1Event::setAction(const utility::string_t& value)
{
    m_Action = value;
    m_ActionIsSet = true;
}

bool Json_V1Event::actionIsSet() const
{
    return m_ActionIsSet;
}

void Json_V1Event::unsetAction()
{
    m_ActionIsSet = false;
}
utility::string_t Json_V1Event::getKind() const
{
    return m_Kind;
}

void Json_V1Event::setKind(const utility::string_t& value)
{
    m_Kind = value;
    m_KindIsSet = true;
}

bool Json_V1Event::kindIsSet() const
{
    return m_KindIsSet;
}

void Json_V1Event::unsetKind()
{
    m_KindIsSet = false;
}
utility::string_t Json_V1Event::getType() const
{
    return m_Type;
}

void Json_V1Event::setType(const utility::string_t& value)
{
    m_Type = value;
    m_TypeIsSet = true;
}

bool Json_V1Event::typeIsSet() const
{
    return m_TypeIsSet;
}

void Json_V1Event::unsetType()
{
    m_TypeIsSet = false;
}
utility::string_t Json_V1Event::getMessage() const
{
    return m_Message;
}

void Json_V1Event::setMessage(const utility::string_t& value)
{
    m_Message = value;
    m_MessageIsSet = true;
}

bool Json_V1Event::messageIsSet() const
{
    return m_MessageIsSet;
}

void Json_V1Event::unsetMessage()
{
    m_MessageIsSet = false;
}
double Json_V1Event::getFirstTimestamp() const
{
    return m_FirstTimestamp;
}

void Json_V1Event::setFirstTimestamp(double value)
{
    m_FirstTimestamp = value;
    m_FirstTimestampIsSet = true;
}

bool Json_V1Event::firstTimestampIsSet() const
{
    return m_FirstTimestampIsSet;
}

void Json_V1Event::unsetFirstTimestamp()
{
    m_FirstTimestampIsSet = false;
}
std::shared_ptr<Json_V1ObjectReference> Json_V1Event::getRelated() const
{
    return m_Related;
}

void Json_V1Event::setRelated(const std::shared_ptr<Json_V1ObjectReference>& value)
{
    m_Related = value;
    m_RelatedIsSet = true;
}

bool Json_V1Event::relatedIsSet() const
{
    return m_RelatedIsSet;
}

void Json_V1Event::unsetRelated()
{
    m_RelatedIsSet = false;
}
std::shared_ptr<Json_V1ObjectReference> Json_V1Event::getInvolvedObject() const
{
    return m_InvolvedObject;
}

void Json_V1Event::setInvolvedObject(const std::shared_ptr<Json_V1ObjectReference>& value)
{
    m_InvolvedObject = value;
    m_InvolvedObjectIsSet = true;
}

bool Json_V1Event::involvedObjectIsSet() const
{
    return m_InvolvedObjectIsSet;
}

void Json_V1Event::unsetInvolvedObject()
{
    m_InvolvedObjectIsSet = false;
}
}
}
}
}

