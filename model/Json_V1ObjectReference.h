/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.50
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_V1ObjectReference.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_V1ObjectReference_H_
#define COM_MADANA_APICLIENT_MODEL_Json_V1ObjectReference_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_V1ObjectReference
    : public ModelBase
{
public:
    Json_V1ObjectReference();
    virtual ~Json_V1ObjectReference();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_V1ObjectReference members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFieldPath() const;
    bool fieldPathIsSet() const;
    void unsetFieldPath();

    void setFieldPath(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

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
    utility::string_t getUid() const;
    bool uidIsSet() const;
    void unsetUid();

    void setUid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResourceVersion() const;
    bool resourceVersionIsSet() const;
    void unsetResourceVersion();

    void setResourceVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRNamespace() const;
    bool rNamespaceIsSet() const;
    void unsetr_namespace();

    void setRNamespace(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetApiVersion();

    void setApiVersion(const utility::string_t& value);


protected:
    utility::string_t m_FieldPath;
    bool m_FieldPathIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Kind;
    bool m_KindIsSet;
    utility::string_t m_Uid;
    bool m_UidIsSet;
    utility::string_t m_ResourceVersion;
    bool m_ResourceVersionIsSet;
    utility::string_t m_r_namespace;
    bool m_r_namespaceIsSet;
    utility::string_t m_ApiVersion;
    bool m_ApiVersionIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_V1ObjectReference_H_ */
