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



#include "Json_NodeInfo.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_NodeInfo::Json_NodeInfo()
{
    m_ProcessorsIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_IpfsInfoIsSet = false;
    m_OperatingSystemUptime = 0.0;
    m_OperatingSystemUptimeIsSet = false;
    m_CpuPhysicalCores = 0;
    m_CpuPhysicalCoresIsSet = false;
    m_CpuFamily = utility::conversions::to_string_t("");
    m_CpuFamilyIsSet = false;
    m_PublicKey = utility::conversions::to_string_t("");
    m_PublicKeyIsSet = false;
    m_OperatingSystem = utility::conversions::to_string_t("");
    m_OperatingSystemIsSet = false;
    m_CpuModel = utility::conversions::to_string_t("");
    m_CpuModelIsSet = false;
    m_ConnectionURL = utility::conversions::to_string_t("");
    m_ConnectionURLIsSet = false;
    m_HardwareBaseboard = utility::conversions::to_string_t("");
    m_HardwareBaseboardIsSet = false;
    m_CpuLogicalCount = 0;
    m_CpuLogicalCountIsSet = false;
    m_CpuFrequency = utility::conversions::to_string_t("");
    m_CpuFrequencyIsSet = false;
    m_Memory = utility::conversions::to_string_t("");
    m_MemoryIsSet = false;
    m_HardwareFirmware = utility::conversions::to_string_t("");
    m_HardwareFirmwareIsSet = false;
    m_Owner = utility::conversions::to_string_t("");
    m_OwnerIsSet = false;
}

Json_NodeInfo::~Json_NodeInfo()
{
}

void Json_NodeInfo::validate()
{
    // TODO: implement validation
}

web::json::value Json_NodeInfo::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ProcessorsIsSet)
    {
        val[utility::conversions::to_string_t("processors")] = ModelBase::toJson(m_Processors);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_IpfsInfoIsSet)
    {
        val[utility::conversions::to_string_t("ipfsInfo")] = ModelBase::toJson(m_IpfsInfo);
    }
    if(m_OperatingSystemUptimeIsSet)
    {
        val[utility::conversions::to_string_t("operatingSystemUptime")] = ModelBase::toJson(m_OperatingSystemUptime);
    }
    if(m_CpuPhysicalCoresIsSet)
    {
        val[utility::conversions::to_string_t("cpuPhysicalCores")] = ModelBase::toJson(m_CpuPhysicalCores);
    }
    if(m_CpuFamilyIsSet)
    {
        val[utility::conversions::to_string_t("cpuFamily")] = ModelBase::toJson(m_CpuFamily);
    }
    if(m_PublicKeyIsSet)
    {
        val[utility::conversions::to_string_t("publicKey")] = ModelBase::toJson(m_PublicKey);
    }
    if(m_OperatingSystemIsSet)
    {
        val[utility::conversions::to_string_t("operatingSystem")] = ModelBase::toJson(m_OperatingSystem);
    }
    if(m_CpuModelIsSet)
    {
        val[utility::conversions::to_string_t("cpuModel")] = ModelBase::toJson(m_CpuModel);
    }
    if(m_ConnectionURLIsSet)
    {
        val[utility::conversions::to_string_t("connectionURL")] = ModelBase::toJson(m_ConnectionURL);
    }
    if(m_HardwareBaseboardIsSet)
    {
        val[utility::conversions::to_string_t("hardwareBaseboard")] = ModelBase::toJson(m_HardwareBaseboard);
    }
    if(m_CpuLogicalCountIsSet)
    {
        val[utility::conversions::to_string_t("cpuLogicalCount")] = ModelBase::toJson(m_CpuLogicalCount);
    }
    if(m_CpuFrequencyIsSet)
    {
        val[utility::conversions::to_string_t("cpuFrequency")] = ModelBase::toJson(m_CpuFrequency);
    }
    if(m_MemoryIsSet)
    {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(m_Memory);
    }
    if(m_HardwareFirmwareIsSet)
    {
        val[utility::conversions::to_string_t("hardwareFirmware")] = ModelBase::toJson(m_HardwareFirmware);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    }

    return val;
}

bool Json_NodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("processors")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processors"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_processors;
            ok &= ModelBase::fromJson(fieldValue, refVal_processors);
            setProcessors(refVal_processors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipfsInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipfsInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_IPFSSystemInfo> refVal_ipfsInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipfsInfo);
            setIpfsInfo(refVal_ipfsInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operatingSystemUptime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operatingSystemUptime"));
        if(!fieldValue.is_null())
        {
            double refVal_operatingSystemUptime;
            ok &= ModelBase::fromJson(fieldValue, refVal_operatingSystemUptime);
            setOperatingSystemUptime(refVal_operatingSystemUptime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuPhysicalCores")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuPhysicalCores"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_cpuPhysicalCores;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuPhysicalCores);
            setCpuPhysicalCores(refVal_cpuPhysicalCores);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuFamily")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuFamily"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuFamily;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuFamily);
            setCpuFamily(refVal_cpuFamily);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicKey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicKey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_publicKey;
            ok &= ModelBase::fromJson(fieldValue, refVal_publicKey);
            setPublicKey(refVal_publicKey);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operatingSystem")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operatingSystem"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_operatingSystem;
            ok &= ModelBase::fromJson(fieldValue, refVal_operatingSystem);
            setOperatingSystem(refVal_operatingSystem);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuModel")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuModel"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuModel;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuModel);
            setCpuModel(refVal_cpuModel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connectionURL")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectionURL"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_connectionURL;
            ok &= ModelBase::fromJson(fieldValue, refVal_connectionURL);
            setConnectionURL(refVal_connectionURL);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hardwareBaseboard")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hardwareBaseboard"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hardwareBaseboard;
            ok &= ModelBase::fromJson(fieldValue, refVal_hardwareBaseboard);
            setHardwareBaseboard(refVal_hardwareBaseboard);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuLogicalCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuLogicalCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_cpuLogicalCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuLogicalCount);
            setCpuLogicalCount(refVal_cpuLogicalCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuFrequency")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuFrequency"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuFrequency;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuFrequency);
            setCpuFrequency(refVal_cpuFrequency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_memory;
            ok &= ModelBase::fromJson(fieldValue, refVal_memory);
            setMemory(refVal_memory);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hardwareFirmware")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hardwareFirmware"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hardwareFirmware;
            ok &= ModelBase::fromJson(fieldValue, refVal_hardwareFirmware);
            setHardwareFirmware(refVal_hardwareFirmware);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_owner;
            ok &= ModelBase::fromJson(fieldValue, refVal_owner);
            setOwner(refVal_owner);
        }
    }
    return ok;
}

void Json_NodeInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ProcessorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("processors"), m_Processors));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_IpfsInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipfsInfo"), m_IpfsInfo));
    }
    if(m_OperatingSystemUptimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operatingSystemUptime"), m_OperatingSystemUptime));
    }
    if(m_CpuPhysicalCoresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuPhysicalCores"), m_CpuPhysicalCores));
    }
    if(m_CpuFamilyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuFamily"), m_CpuFamily));
    }
    if(m_PublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicKey"), m_PublicKey));
    }
    if(m_OperatingSystemIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operatingSystem"), m_OperatingSystem));
    }
    if(m_CpuModelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuModel"), m_CpuModel));
    }
    if(m_ConnectionURLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("connectionURL"), m_ConnectionURL));
    }
    if(m_HardwareBaseboardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hardwareBaseboard"), m_HardwareBaseboard));
    }
    if(m_CpuLogicalCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuLogicalCount"), m_CpuLogicalCount));
    }
    if(m_CpuFrequencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuFrequency"), m_CpuFrequency));
    }
    if(m_MemoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("memory"), m_Memory));
    }
    if(m_HardwareFirmwareIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hardwareFirmware"), m_HardwareFirmware));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
    }
}

bool Json_NodeInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("processors")))
    {
        std::vector<utility::string_t> refVal_processors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("processors")), refVal_processors );
        setProcessors(refVal_processors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipfsInfo")))
    {
        std::shared_ptr<Json_IPFSSystemInfo> refVal_ipfsInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipfsInfo")), refVal_ipfsInfo );
        setIpfsInfo(refVal_ipfsInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("operatingSystemUptime")))
    {
        double refVal_operatingSystemUptime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operatingSystemUptime")), refVal_operatingSystemUptime );
        setOperatingSystemUptime(refVal_operatingSystemUptime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuPhysicalCores")))
    {
        int32_t refVal_cpuPhysicalCores;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuPhysicalCores")), refVal_cpuPhysicalCores );
        setCpuPhysicalCores(refVal_cpuPhysicalCores);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuFamily")))
    {
        utility::string_t refVal_cpuFamily;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuFamily")), refVal_cpuFamily );
        setCpuFamily(refVal_cpuFamily);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("publicKey")))
    {
        utility::string_t refVal_publicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicKey")), refVal_publicKey );
        setPublicKey(refVal_publicKey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("operatingSystem")))
    {
        utility::string_t refVal_operatingSystem;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operatingSystem")), refVal_operatingSystem );
        setOperatingSystem(refVal_operatingSystem);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuModel")))
    {
        utility::string_t refVal_cpuModel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuModel")), refVal_cpuModel );
        setCpuModel(refVal_cpuModel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("connectionURL")))
    {
        utility::string_t refVal_connectionURL;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("connectionURL")), refVal_connectionURL );
        setConnectionURL(refVal_connectionURL);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hardwareBaseboard")))
    {
        utility::string_t refVal_hardwareBaseboard;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hardwareBaseboard")), refVal_hardwareBaseboard );
        setHardwareBaseboard(refVal_hardwareBaseboard);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuLogicalCount")))
    {
        int32_t refVal_cpuLogicalCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuLogicalCount")), refVal_cpuLogicalCount );
        setCpuLogicalCount(refVal_cpuLogicalCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuFrequency")))
    {
        utility::string_t refVal_cpuFrequency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuFrequency")), refVal_cpuFrequency );
        setCpuFrequency(refVal_cpuFrequency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("memory")))
    {
        utility::string_t refVal_memory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("memory")), refVal_memory );
        setMemory(refVal_memory);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hardwareFirmware")))
    {
        utility::string_t refVal_hardwareFirmware;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hardwareFirmware")), refVal_hardwareFirmware );
        setHardwareFirmware(refVal_hardwareFirmware);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        utility::string_t refVal_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner")), refVal_owner );
        setOwner(refVal_owner);
    }
    return ok;
}

std::vector<utility::string_t>& Json_NodeInfo::getProcessors()
{
    return m_Processors;
}

void Json_NodeInfo::setProcessors(const std::vector<utility::string_t>& value)
{
    m_Processors = value;
    m_ProcessorsIsSet = true;
}

bool Json_NodeInfo::processorsIsSet() const
{
    return m_ProcessorsIsSet;
}

void Json_NodeInfo::unsetProcessors()
{
    m_ProcessorsIsSet = false;
}
utility::string_t Json_NodeInfo::getStatus() const
{
    return m_Status;
}

void Json_NodeInfo::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Json_NodeInfo::statusIsSet() const
{
    return m_StatusIsSet;
}

void Json_NodeInfo::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<Json_IPFSSystemInfo> Json_NodeInfo::getIpfsInfo() const
{
    return m_IpfsInfo;
}

void Json_NodeInfo::setIpfsInfo(const std::shared_ptr<Json_IPFSSystemInfo>& value)
{
    m_IpfsInfo = value;
    m_IpfsInfoIsSet = true;
}

bool Json_NodeInfo::ipfsInfoIsSet() const
{
    return m_IpfsInfoIsSet;
}

void Json_NodeInfo::unsetIpfsInfo()
{
    m_IpfsInfoIsSet = false;
}
double Json_NodeInfo::getOperatingSystemUptime() const
{
    return m_OperatingSystemUptime;
}

void Json_NodeInfo::setOperatingSystemUptime(double value)
{
    m_OperatingSystemUptime = value;
    m_OperatingSystemUptimeIsSet = true;
}

bool Json_NodeInfo::operatingSystemUptimeIsSet() const
{
    return m_OperatingSystemUptimeIsSet;
}

void Json_NodeInfo::unsetOperatingSystemUptime()
{
    m_OperatingSystemUptimeIsSet = false;
}
int32_t Json_NodeInfo::getCpuPhysicalCores() const
{
    return m_CpuPhysicalCores;
}

void Json_NodeInfo::setCpuPhysicalCores(int32_t value)
{
    m_CpuPhysicalCores = value;
    m_CpuPhysicalCoresIsSet = true;
}

bool Json_NodeInfo::cpuPhysicalCoresIsSet() const
{
    return m_CpuPhysicalCoresIsSet;
}

void Json_NodeInfo::unsetCpuPhysicalCores()
{
    m_CpuPhysicalCoresIsSet = false;
}
utility::string_t Json_NodeInfo::getCpuFamily() const
{
    return m_CpuFamily;
}

void Json_NodeInfo::setCpuFamily(const utility::string_t& value)
{
    m_CpuFamily = value;
    m_CpuFamilyIsSet = true;
}

bool Json_NodeInfo::cpuFamilyIsSet() const
{
    return m_CpuFamilyIsSet;
}

void Json_NodeInfo::unsetCpuFamily()
{
    m_CpuFamilyIsSet = false;
}
utility::string_t Json_NodeInfo::getPublicKey() const
{
    return m_PublicKey;
}

void Json_NodeInfo::setPublicKey(const utility::string_t& value)
{
    m_PublicKey = value;
    m_PublicKeyIsSet = true;
}

bool Json_NodeInfo::publicKeyIsSet() const
{
    return m_PublicKeyIsSet;
}

void Json_NodeInfo::unsetPublicKey()
{
    m_PublicKeyIsSet = false;
}
utility::string_t Json_NodeInfo::getOperatingSystem() const
{
    return m_OperatingSystem;
}

void Json_NodeInfo::setOperatingSystem(const utility::string_t& value)
{
    m_OperatingSystem = value;
    m_OperatingSystemIsSet = true;
}

bool Json_NodeInfo::operatingSystemIsSet() const
{
    return m_OperatingSystemIsSet;
}

void Json_NodeInfo::unsetOperatingSystem()
{
    m_OperatingSystemIsSet = false;
}
utility::string_t Json_NodeInfo::getCpuModel() const
{
    return m_CpuModel;
}

void Json_NodeInfo::setCpuModel(const utility::string_t& value)
{
    m_CpuModel = value;
    m_CpuModelIsSet = true;
}

bool Json_NodeInfo::cpuModelIsSet() const
{
    return m_CpuModelIsSet;
}

void Json_NodeInfo::unsetCpuModel()
{
    m_CpuModelIsSet = false;
}
utility::string_t Json_NodeInfo::getConnectionURL() const
{
    return m_ConnectionURL;
}

void Json_NodeInfo::setConnectionURL(const utility::string_t& value)
{
    m_ConnectionURL = value;
    m_ConnectionURLIsSet = true;
}

bool Json_NodeInfo::connectionURLIsSet() const
{
    return m_ConnectionURLIsSet;
}

void Json_NodeInfo::unsetConnectionURL()
{
    m_ConnectionURLIsSet = false;
}
utility::string_t Json_NodeInfo::getHardwareBaseboard() const
{
    return m_HardwareBaseboard;
}

void Json_NodeInfo::setHardwareBaseboard(const utility::string_t& value)
{
    m_HardwareBaseboard = value;
    m_HardwareBaseboardIsSet = true;
}

bool Json_NodeInfo::hardwareBaseboardIsSet() const
{
    return m_HardwareBaseboardIsSet;
}

void Json_NodeInfo::unsetHardwareBaseboard()
{
    m_HardwareBaseboardIsSet = false;
}
int32_t Json_NodeInfo::getCpuLogicalCount() const
{
    return m_CpuLogicalCount;
}

void Json_NodeInfo::setCpuLogicalCount(int32_t value)
{
    m_CpuLogicalCount = value;
    m_CpuLogicalCountIsSet = true;
}

bool Json_NodeInfo::cpuLogicalCountIsSet() const
{
    return m_CpuLogicalCountIsSet;
}

void Json_NodeInfo::unsetCpuLogicalCount()
{
    m_CpuLogicalCountIsSet = false;
}
utility::string_t Json_NodeInfo::getCpuFrequency() const
{
    return m_CpuFrequency;
}

void Json_NodeInfo::setCpuFrequency(const utility::string_t& value)
{
    m_CpuFrequency = value;
    m_CpuFrequencyIsSet = true;
}

bool Json_NodeInfo::cpuFrequencyIsSet() const
{
    return m_CpuFrequencyIsSet;
}

void Json_NodeInfo::unsetCpuFrequency()
{
    m_CpuFrequencyIsSet = false;
}
utility::string_t Json_NodeInfo::getMemory() const
{
    return m_Memory;
}

void Json_NodeInfo::setMemory(const utility::string_t& value)
{
    m_Memory = value;
    m_MemoryIsSet = true;
}

bool Json_NodeInfo::memoryIsSet() const
{
    return m_MemoryIsSet;
}

void Json_NodeInfo::unsetMemory()
{
    m_MemoryIsSet = false;
}
utility::string_t Json_NodeInfo::getHardwareFirmware() const
{
    return m_HardwareFirmware;
}

void Json_NodeInfo::setHardwareFirmware(const utility::string_t& value)
{
    m_HardwareFirmware = value;
    m_HardwareFirmwareIsSet = true;
}

bool Json_NodeInfo::hardwareFirmwareIsSet() const
{
    return m_HardwareFirmwareIsSet;
}

void Json_NodeInfo::unsetHardwareFirmware()
{
    m_HardwareFirmwareIsSet = false;
}
utility::string_t Json_NodeInfo::getOwner() const
{
    return m_Owner;
}

void Json_NodeInfo::setOwner(const utility::string_t& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool Json_NodeInfo::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void Json_NodeInfo::unsetOwner()
{
    m_OwnerIsSet = false;
}
}
}
}
}


