/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.22
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_Process.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_Process_H_
#define COM_MADANA_APICLIENT_MODEL_Json_Process_H_


#include "../ModelBase.h"

#include "Object.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_Process
    : public ModelBase
{
public:
    Json_Process();
    virtual ~Json_Process();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_Process members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getErrorStream() const;
    bool errorStreamIsSet() const;
    void unsetErrorStream();

    void setErrorStream(const std::shared_ptr<Object>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getInputStream() const;
    bool inputStreamIsSet() const;
    void unsetInputStream();

    void setInputStream(const std::shared_ptr<Object>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getOutputStream() const;
    bool outputStreamIsSet() const;
    void unsetOutputStream();

    void setOutputStream(const std::shared_ptr<Object>& value);

    /// <summary>
    /// 
    /// </summary>
    bool isAlive() const;
    bool aliveIsSet() const;
    void unsetAlive();

    void setAlive(bool value);


protected:
    std::shared_ptr<Object> m_ErrorStream;
    bool m_ErrorStreamIsSet;
    std::shared_ptr<Object> m_InputStream;
    bool m_InputStreamIsSet;
    std::shared_ptr<Object> m_OutputStream;
    bool m_OutputStreamIsSet;
    bool m_Alive;
    bool m_AliveIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_Process_H_ */
