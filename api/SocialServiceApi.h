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
 * SocialServiceApi.h
 *
 * 
 */

#ifndef   COM_MADANA_APICLIENT_API_SocialServiceApi_H_
#define   COM_MADANA_APICLIENT_API_SocialServiceApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include <cpprest/details/basic_types.h>
#include "../ModelBase.h"

#include <boost/optional.hpp>

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;



class  SocialServiceApi 
{
public:

    explicit SocialServiceApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SocialServiceApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<HttpContent>> getMyProfile(
    ) const;
    /// <summary>
    /// Returns all Platforms / Systems that can be Connected to the MADANA Service.
    /// </summary>
    /// <remarks>
    /// Returns all Platforms / Systems that can be Connected to the MADANA Service
    /// </remarks>
    pplx::task<std::shared_ptr<HttpContent>> getPlatforms2(
    ) const;
    /// <summary>
    /// Returns the Ranking by PTS within the System.
    /// </summary>
    /// <remarks>
    /// Returns the Ranking by PTS within the System
    /// </remarks>
    /// <param name="limit"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getRanking(
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> offset
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="platform"></param>
    pplx::task<std::shared_ptr<HttpContent>> getSocialPlatformFeed(
        utility::string_t platform
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    /// <param name="simple"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getUserProfile(
        utility::string_t username,
        boost::optional<utility::string_t> simple
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> getUserProfile_0(
        utility::string_t username
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /*   COM_MADANA_APICLIENT_API_SocialServiceApi_H_ */

