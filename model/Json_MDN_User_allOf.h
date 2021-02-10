/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.53
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_MDN_User_allOf.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_MDN_User_allOf_H_
#define COM_MADANA_APICLIENT_MODEL_Json_MDN_User_allOf_H_


#include "../ModelBase.h"

#include "Json_MDN_UserSetting.h"
#include "Json_MDN_SocialUserObject.h"
#include "Json_MDN_UserCredentials.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_MDN_User_allOf
    : public ModelBase
{
public:
    Json_MDN_User_allOf();
    virtual ~Json_MDN_User_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_MDN_User_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_MDN_UserSetting>>& getSettings();
    bool settingsIsSet() const;
    void unsetSettings();

    void setSettings(const std::vector<std::shared_ptr<Json_MDN_UserSetting>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMail() const;
    bool mailIsSet() const;
    void unsetMail();

    void setMail(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_MDN_UserCredentials> getCredentials() const;
    bool credentialsIsSet() const;
    void unsetCredentials();

    void setCredentials(const std::shared_ptr<Json_MDN_UserCredentials>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGuid() const;
    bool guidIsSet() const;
    void unsetGuid();

    void setGuid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_MDN_SocialUserObject>>& getSocialAccounts();
    bool socialAccountsIsSet() const;
    void unsetSocialAccounts();

    void setSocialAccounts(const std::vector<std::shared_ptr<Json_MDN_SocialUserObject>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
    bool firstNameIsSet() const;
    void unsetFirstName();

    void setFirstName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
    bool lastNameIsSet() const;
    void unsetLastName();

    void setLastName(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<Json_MDN_UserSetting>> m_Settings;
    bool m_SettingsIsSet;
    utility::string_t m_Mail;
    bool m_MailIsSet;
    std::shared_ptr<Json_MDN_UserCredentials> m_Credentials;
    bool m_CredentialsIsSet;
    utility::string_t m_Guid;
    bool m_GuidIsSet;
    std::vector<std::shared_ptr<Json_MDN_SocialUserObject>> m_SocialAccounts;
    bool m_SocialAccountsIsSet;
    utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
    utility::string_t m_LastName;
    bool m_LastNameIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_MDN_User_allOf_H_ */
