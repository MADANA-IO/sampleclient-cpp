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
 * Xml_ns0_enclaveRunningAttestationApproval.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Xml_ns0_enclaveRunningAttestationApproval_H_
#define COM_MADANA_APICLIENT_MODEL_Xml_ns0_enclaveRunningAttestationApproval_H_


#include "../ModelBase.h"

#include "Xml_ns0_enclaveRunningAttestationApproval_allOf.h"
#include "Xml_ns0_enclaveRunningAttestation.h"
#include <cpprest/details/basic_types.h>
#include "Xml_ns0_enclaveProcess.h"
#include "Xml_ns0_nodeInfo.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Xml_ns0_enclaveRunningAttestationApproval
    : public ModelBase
{
public:
    Xml_ns0_enclaveRunningAttestationApproval();
    virtual ~Xml_ns0_enclaveRunningAttestationApproval();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Xml_ns0_enclaveRunningAttestationApproval members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_enclaveProcess> getEnclaveProcess() const;
    bool enclaveProcessIsSet() const;
    void unsetEnclaveProcess();

    void setEnclaveProcess(const std::shared_ptr<Xml_ns0_enclaveProcess>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_nodeInfo> getNodeInfo() const;
    bool nodeInfoIsSet() const;
    void unsetNodeInfo();

    void setNodeInfo(const std::shared_ptr<Xml_ns0_nodeInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApproved() const;
    bool approvedIsSet() const;
    void unsetApproved();

    void setApproved(const utility::string_t& value);


protected:
    std::shared_ptr<Xml_ns0_enclaveProcess> m_EnclaveProcess;
    bool m_EnclaveProcessIsSet;
    std::shared_ptr<Xml_ns0_nodeInfo> m_NodeInfo;
    bool m_NodeInfoIsSet;
    utility::string_t m_Approved;
    bool m_ApprovedIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Xml_ns0_enclaveRunningAttestationApproval_H_ */
