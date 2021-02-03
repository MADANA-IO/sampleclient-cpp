/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.47
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Xml_ns0_wireguardInterface.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Xml_ns0_wireguardInterface_H_
#define COM_MADANA_APICLIENT_MODEL_Xml_ns0_wireguardInterface_H_


#include "../ModelBase.h"

#include "Xml_ns0_wireguardInterface_allOf.h"
#include <cpprest/details/basic_types.h>
#include "Xml_ns0_networkInterface.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Xml_ns0_wireguardInterface
    : public ModelBase
{
public:
    Xml_ns0_wireguardInterface();
    virtual ~Xml_ns0_wireguardInterface();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Xml_ns0_wireguardInterface members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const utility::string_t& value);

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
    utility::string_t getPort() const;
    bool portIsSet() const;
    void unsetPort();

    void setPort(const utility::string_t& value);


protected:
    utility::string_t m_Address;
    bool m_AddressIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Port;
    bool m_PortIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Xml_ns0_wireguardInterface_H_ */
