/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.10
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * AuthenticationServiceApi.h
 *
 * 
 */

#ifndef   COM_MADANA_APICLIENT_API_AuthenticationServiceApi_H_
#define   COM_MADANA_APICLIENT_API_AuthenticationServiceApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include "Json_MDN_Certificate.h"
#include "Json_MDN_OAuthToken.h"
#include "Json_MDN_Token.h"
#include "Json_MDN_UserCredentials.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;



class  AuthenticationServiceApi 
{
public:

    explicit AuthenticationServiceApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~AuthenticationServiceApi();

    /// <summary>
    /// Authenticates a new application and returns the token.
    /// </summary>
    /// <remarks>
    /// Authenticates a new application and returns the token
    /// </remarks>
    /// <param name="body">the credentials used to validate the user (optional)</param>
    pplx::task<std::shared_ptr<Json_MDN_Token>> authenticateApplication(
        boost::optional<std::shared_ptr<Json_MDN_Certificate>> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="wallet">the wallet which should be authenticated</param>
    /// <param name="body">Token containing nonce and signate (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> authenticateEthereumWallet(
        utility::string_t wallet,
        boost::optional<std::shared_ptr<Json_MDN_OAuthToken>> body
    ) const;
    /// <summary>
    /// Authenticates a new user and returns the token (  forbidden if the credentials cannot be validated ).
    /// </summary>
    /// <remarks>
    /// Authenticates a new user and returns the token (  forbidden if the credentials cannot be validated )
    /// </remarks>
    /// <param name="body">the credentials used to validate the user (optional)</param>
    pplx::task<std::shared_ptr<Json_MDN_Token>> authenticateUser(
        boost::optional<std::shared_ptr<Json_MDN_UserCredentials>> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="wallet">the wallet which should be authenticated</param>
    /// <param name="body">Token containing nonce and signate (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> authenticateWithEthereumChallenge(
        utility::string_t wallet,
        boost::optional<std::shared_ptr<Json_MDN_OAuthToken>> body
    ) const;
    /// <summary>
    /// Returns the AUthorization URL to verify a Twitter Accounts.
    /// </summary>
    /// <remarks>
    /// Returns the AUthorization URL to verify a Twitter Accounts
    /// </remarks>
    pplx::task<std::shared_ptr<HttpContent>> getFractalAuthenticationURL(
    ) const;
    /// <summary>
    /// Returns a nonce for the client which is used as content for the to be created signature.
    /// </summary>
    /// <remarks>
    /// Returns a nonce for the client which is used as content for the to be created signature
    /// </remarks>
    /// <param name="wallet">- wallet address as String * @HTTP 417 If the address is not valid</param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Json_MDN_Token>> getNonceForEthereumWallet(
        utility::string_t wallet,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// Used to validate the active connection with the API.
    /// </summary>
    /// <remarks>
    /// Used to validate the active connection with the API
    /// </remarks>
    pplx::task<std::map<utility::string_t, std::shared_ptr<Object>>> getObject(
    ) const;
    /// <summary>
    /// Returns the AUthorization URL to verify a Twitter Accounts.
    /// </summary>
    /// <remarks>
    /// Returns the AUthorization URL to verify a Twitter Accounts
    /// </remarks>
    pplx::task<std::shared_ptr<HttpContent>> getTwitterAuthenticationURL(
    ) const;
    /// <summary>
    /// Used as Callback URL when users have successfully authorized their facbeook account.
    /// </summary>
    /// <remarks>
    /// Used as Callback URL when users have successfully authorized their facbeook account
    /// </remarks>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> setFacebookUID(
        boost::optional<utility::string_t> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> setFractalUID(
        boost::optional<utility::string_t> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> setTwitterUID(
        boost::optional<std::shared_ptr<Json_MDN_OAuthToken>> body
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /*   COM_MADANA_APICLIENT_API_AuthenticationServiceApi_H_ */

