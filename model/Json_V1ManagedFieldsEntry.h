/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.52
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_V1ManagedFieldsEntry.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_V1ManagedFieldsEntry_H_
#define COM_MADANA_APICLIENT_MODEL_Json_V1ManagedFieldsEntry_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_V1ManagedFieldsEntry
    : public ModelBase
{
public:
    Json_V1ManagedFieldsEntry();
    virtual ~Json_V1ManagedFieldsEntry();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_V1ManagedFieldsEntry members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getFieldsV1() const;
    bool fieldsV1IsSet() const;
    void unsetFieldsV1();

    void setFieldsV1(const std::shared_ptr<Object>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFieldsType() const;
    bool fieldsTypeIsSet() const;
    void unsetFieldsType();

    void setFieldsType(const utility::string_t& value);

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
    utility::string_t getOperation() const;
    bool operationIsSet() const;
    void unsetOperation();

    void setOperation(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getManager() const;
    bool managerIsSet() const;
    void unsetManager();

    void setManager(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getTime() const;
    bool timeIsSet() const;
    void unsetTime();

    void setTime(double value);


protected:
    std::shared_ptr<Object> m_FieldsV1;
    bool m_FieldsV1IsSet;
    utility::string_t m_FieldsType;
    bool m_FieldsTypeIsSet;
    utility::string_t m_ApiVersion;
    bool m_ApiVersionIsSet;
    utility::string_t m_Operation;
    bool m_OperationIsSet;
    utility::string_t m_Manager;
    bool m_ManagerIsSet;
    double m_Time;
    bool m_TimeIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_V1ManagedFieldsEntry_H_ */
