/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.5
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_EnvironmentPublishingRequest.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_EnvironmentPublishingRequest::Json_EnvironmentPublishingRequest()
{
    m_IsPublic = utility::conversions::to_string_t("");
    m_IsPublicIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
    m_Content = utility::conversions::to_string_t("");
    m_ContentIsSet = false;
    m_Size = utility::conversions::to_string_t("");
    m_SizeIsSet = false;
    m_IpfsPrimaryPeer = utility::conversions::to_string_t("");
    m_IpfsPrimaryPeerIsSet = false;
    m_Packages = utility::conversions::to_string_t("");
    m_PackagesIsSet = false;
    m_IpfsHash = utility::conversions::to_string_t("");
    m_IpfsHashIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
}

Json_EnvironmentPublishingRequest::~Json_EnvironmentPublishingRequest()
{
}

void Json_EnvironmentPublishingRequest::validate()
{
    // TODO: implement validation
}

web::json::value Json_EnvironmentPublishingRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IsPublicIsSet)
    {
        val[utility::conversions::to_string_t("isPublic")] = ModelBase::toJson(m_IsPublic);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_UuidIsSet)
    {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(m_Uuid);
    }
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_Content);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_IpfsPrimaryPeerIsSet)
    {
        val[utility::conversions::to_string_t("ipfsPrimaryPeer")] = ModelBase::toJson(m_IpfsPrimaryPeer);
    }
    if(m_PackagesIsSet)
    {
        val[utility::conversions::to_string_t("packages")] = ModelBase::toJson(m_Packages);
    }
    if(m_IpfsHashIsSet)
    {
        val[utility::conversions::to_string_t("ipfsHash")] = ModelBase::toJson(m_IpfsHash);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }

    return val;
}

bool Json_EnvironmentPublishingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isPublic")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isPublic"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_isPublic;
            ok &= ModelBase::fromJson(fieldValue, refVal_isPublic);
            setIsPublic(refVal_isPublic);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_uuid;
            ok &= ModelBase::fromJson(fieldValue, refVal_uuid);
            setUuid(refVal_uuid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_content;
            ok &= ModelBase::fromJson(fieldValue, refVal_content);
            setContent(refVal_content);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipfsPrimaryPeer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipfsPrimaryPeer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipfsPrimaryPeer;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipfsPrimaryPeer);
            setIpfsPrimaryPeer(refVal_ipfsPrimaryPeer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packages")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packages"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_packages;
            ok &= ModelBase::fromJson(fieldValue, refVal_packages);
            setPackages(refVal_packages);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipfsHash")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipfsHash"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipfsHash;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipfsHash);
            setIpfsHash(refVal_ipfsHash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    return ok;
}

void Json_EnvironmentPublishingRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IsPublicIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isPublic"), m_IsPublic));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_UuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uuid"), m_Uuid));
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_Content));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_IpfsPrimaryPeerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipfsPrimaryPeer"), m_IpfsPrimaryPeer));
    }
    if(m_PackagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("packages"), m_Packages));
    }
    if(m_IpfsHashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipfsHash"), m_IpfsHash));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
}

bool Json_EnvironmentPublishingRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("isPublic")))
    {
        utility::string_t refVal_isPublic;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isPublic")), refVal_isPublic );
        setIsPublic(refVal_isPublic);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uuid")))
    {
        utility::string_t refVal_uuid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uuid")), refVal_uuid );
        setUuid(refVal_uuid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        utility::string_t refVal_content;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("content")), refVal_content );
        setContent(refVal_content);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        utility::string_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipfsPrimaryPeer")))
    {
        utility::string_t refVal_ipfsPrimaryPeer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipfsPrimaryPeer")), refVal_ipfsPrimaryPeer );
        setIpfsPrimaryPeer(refVal_ipfsPrimaryPeer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("packages")))
    {
        utility::string_t refVal_packages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("packages")), refVal_packages );
        setPackages(refVal_packages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipfsHash")))
    {
        utility::string_t refVal_ipfsHash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipfsHash")), refVal_ipfsHash );
        setIpfsHash(refVal_ipfsHash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    return ok;
}

utility::string_t Json_EnvironmentPublishingRequest::getIsPublic() const
{
    return m_IsPublic;
}

void Json_EnvironmentPublishingRequest::setIsPublic(const utility::string_t& value)
{
    m_IsPublic = value;
    m_IsPublicIsSet = true;
}

bool Json_EnvironmentPublishingRequest::isPublicIsSet() const
{
    return m_IsPublicIsSet;
}

void Json_EnvironmentPublishingRequest::unsetIsPublic()
{
    m_IsPublicIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getName() const
{
    return m_Name;
}

void Json_EnvironmentPublishingRequest::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Json_EnvironmentPublishingRequest::nameIsSet() const
{
    return m_NameIsSet;
}

void Json_EnvironmentPublishingRequest::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getUuid() const
{
    return m_Uuid;
}

void Json_EnvironmentPublishingRequest::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Json_EnvironmentPublishingRequest::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Json_EnvironmentPublishingRequest::unsetUuid()
{
    m_UuidIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getContent() const
{
    return m_Content;
}

void Json_EnvironmentPublishingRequest::setContent(const utility::string_t& value)
{
    m_Content = value;
    m_ContentIsSet = true;
}

bool Json_EnvironmentPublishingRequest::contentIsSet() const
{
    return m_ContentIsSet;
}

void Json_EnvironmentPublishingRequest::unsetContent()
{
    m_ContentIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getSize() const
{
    return m_Size;
}

void Json_EnvironmentPublishingRequest::setSize(const utility::string_t& value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool Json_EnvironmentPublishingRequest::sizeIsSet() const
{
    return m_SizeIsSet;
}

void Json_EnvironmentPublishingRequest::unsetSize()
{
    m_SizeIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getIpfsPrimaryPeer() const
{
    return m_IpfsPrimaryPeer;
}

void Json_EnvironmentPublishingRequest::setIpfsPrimaryPeer(const utility::string_t& value)
{
    m_IpfsPrimaryPeer = value;
    m_IpfsPrimaryPeerIsSet = true;
}

bool Json_EnvironmentPublishingRequest::ipfsPrimaryPeerIsSet() const
{
    return m_IpfsPrimaryPeerIsSet;
}

void Json_EnvironmentPublishingRequest::unsetIpfsPrimaryPeer()
{
    m_IpfsPrimaryPeerIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getPackages() const
{
    return m_Packages;
}

void Json_EnvironmentPublishingRequest::setPackages(const utility::string_t& value)
{
    m_Packages = value;
    m_PackagesIsSet = true;
}

bool Json_EnvironmentPublishingRequest::packagesIsSet() const
{
    return m_PackagesIsSet;
}

void Json_EnvironmentPublishingRequest::unsetPackages()
{
    m_PackagesIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getIpfsHash() const
{
    return m_IpfsHash;
}

void Json_EnvironmentPublishingRequest::setIpfsHash(const utility::string_t& value)
{
    m_IpfsHash = value;
    m_IpfsHashIsSet = true;
}

bool Json_EnvironmentPublishingRequest::ipfsHashIsSet() const
{
    return m_IpfsHashIsSet;
}

void Json_EnvironmentPublishingRequest::unsetIpfsHash()
{
    m_IpfsHashIsSet = false;
}
utility::string_t Json_EnvironmentPublishingRequest::getDescription() const
{
    return m_Description;
}

void Json_EnvironmentPublishingRequest::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Json_EnvironmentPublishingRequest::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Json_EnvironmentPublishingRequest::unsetDescription()
{
    m_DescriptionIsSet = false;
}
}
}
}
}


