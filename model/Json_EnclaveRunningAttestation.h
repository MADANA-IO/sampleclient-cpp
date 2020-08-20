/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.14-master.22
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_EnclaveRunningAttestation.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_EnclaveRunningAttestation_H_
#define COM_MADANA_APICLIENT_MODEL_Json_EnclaveRunningAttestation_H_


#include "../ModelBase.h"

#include "Json_EnclaveProcess.h"
#include "Json_NodeInfo.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_EnclaveRunningAttestation
    : public ModelBase
{
public:
    Json_EnclaveRunningAttestation();
    virtual ~Json_EnclaveRunningAttestation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_EnclaveRunningAttestation members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_EnclaveProcess> getEnclaveProcess() const;
    bool enclaveProcessIsSet() const;
    void unsetEnclaveProcess();

    void setEnclaveProcess(const std::shared_ptr<Json_EnclaveProcess>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_NodeInfo> getNodeInfo() const;
    bool nodeInfoIsSet() const;
    void unsetNodeInfo();

    void setNodeInfo(const std::shared_ptr<Json_NodeInfo>& value);


protected:
    std::shared_ptr<Json_EnclaveProcess> m_EnclaveProcess;
    bool m_EnclaveProcessIsSet;
    std::shared_ptr<Json_NodeInfo> m_NodeInfo;
    bool m_NodeInfoIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_EnclaveRunningAttestation_H_ */
