/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.38
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RequestServiceApi.h
 *
 * 
 */

#ifndef   COM_MADANA_APICLIENT_API_RequestServiceApi_H_
#define   COM_MADANA_APICLIENT_API_RequestServiceApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include "Json_SignedData_utils.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;



class  RequestServiceApi 
{
public:

    explicit RequestServiceApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~RequestServiceApi();

    /// <summary>
    /// Is used to upload and park the data till the AnalysisRequest gets processed.
    /// </summary>
    /// <remarks>
    /// Is used to upload and park the data till the AnalysisRequest gets processed
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> addData(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization,
        boost::optional<std::shared_ptr<Json_SignedData_utils>> body
    ) const;
    /// <summary>
    /// Endpoint is called from the Analysis Processing entity to submit the result.
    /// </summary>
    /// <remarks>
    /// Endpoint is called from the Analysis Processing entity to submit the result
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> cancelProcessing(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization,
        boost::optional<std::shared_ptr<Json_SignedData_utils>> body
    ) const;
    /// <summary>
    /// Endpoint used to create a new Analysis Request.
    /// </summary>
    /// <remarks>
    /// Endpoint used to create a new Analysis Request
    /// </remarks>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body"> (optional)</param>
    pplx::task<utility::string_t> createNewRequest(
        boost::optional<utility::string_t> authorization,
        boost::optional<std::shared_ptr<Json_SignedData_utils>> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="limit"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getActions(
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> offset
    ) const;
    /// <summary>
    /// Is called from the APE to request all parked datasets.
    /// </summary>
    /// <remarks>
    /// Is called from the APE to request all parked datasets. Returns the transmitted data for certain Request. When requesting the data, the status of the request is automatically set to processing.
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getAgent(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// Returns UUIDs of existing analyses.
    /// </summary>
    /// <remarks>
    /// Returns UUIDs of existing analyses.
    /// </remarks>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="created">- if Queryparam \&quot;created&#x3D;true\&quot; only the UUIDs of own Requests are shown (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="history">- if queryparam \&quot;history\&quot; is set to true, endpoint returns all user actions. False per default. (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">Used for offset pagination. Limit/Offset Paging would look like GET /request?limit&#x3D;20&amp;offset&#x3D;100. This query would return the 20 rows starting with the 100th row (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="r_new">-  if Queryparam \&quot;new&#x3D;true\&quot; only the UUIDs of new Requests ( Requests the user has not participated in and still allow participation) are shown (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset">Used for offset pagination. Limit/Offset Paging would look like GET /request?limit&#x3D;20&amp;offset&#x3D;100. This query would return the 20 rows starting with the 100th row (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="preview"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="ready"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getAllRequests(
        boost::optional<utility::string_t> authorization,
        boost::optional<utility::string_t> created,
        boost::optional<utility::string_t> history,
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> r_new,
        boost::optional<utility::string_t> offset,
        boost::optional<utility::string_t> preview,
        boost::optional<utility::string_t> ready
    ) const;
    /// <summary>
    /// Is called from the APE to request all parked datasets.
    /// </summary>
    /// <remarks>
    /// Is called from the APE to request all parked datasets. Returns the transmitted data for certain Request. When requesting the data, the status of the request is automatically set to processing.
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<Json_SignedData_utils>> getData(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// Returns the details for certain Request.
    /// </summary>
    /// <remarks>
    /// Returns the details for certain Request. When requesting an analysis a view of the analysis is stored in the database
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getRequest(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// Can be called from creator to request the AnalysisResult.
    /// </summary>
    /// <remarks>
    /// Can be called from creator to request the AnalysisResult.
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getResult(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<HttpContent>> getStatus(
    ) const;
    /// <summary>
    /// Used to give consent for request.
    /// </summary>
    /// <remarks>
    /// Used to give consent for request. If the Endpoint is called from the creator of the Analysis, the status of the request is set to completed. If called by another is interpreted as giving consent to participate.
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> giveConsent(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// Endpoint used initialized addition datacollection parameters for requester.
    /// </summary>
    /// <remarks>
    /// Endpoint used initialized addition datacollection parameters for requester
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body"> (optional)</param>
    pplx::task<utility::string_t> initRequestParameters(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization,
        boost::optional<utility::string_t> body
    ) const;
    /// <summary>
    /// Is called from the APE to request all parked datasets.
    /// </summary>
    /// <remarks>
    /// Is called from the APE to request all parked datasets. Returns the transmitted data for certain Request. When requesting the data, the status of the request is automatically set to processing.
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> setAgent(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization
    ) const;
    /// <summary>
    /// Endpoint is called from the Analysis Processing entity to submit the result.
    /// </summary>
    /// <remarks>
    /// Endpoint is called from the Analysis Processing entity to submit the result
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> setResult(
        utility::string_t uuid,
        boost::optional<utility::string_t> authorization,
        boost::optional<std::shared_ptr<Json_SignedData_utils>> body
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /*   COM_MADANA_APICLIENT_API_RequestServiceApi_H_ */

