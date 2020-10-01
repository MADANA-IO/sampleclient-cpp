/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.3
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_EnclaveProcess.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_EnclaveProcess::Json_EnclaveProcess()
{
    m_InternalWireguardServer = utility::conversions::to_string_t("");
    m_InternalWireguardServerIsSet = false;
    m_StartupCMD = utility::conversions::to_string_t("");
    m_StartupCMDIsSet = false;
    m_InternalAttesationServer = utility::conversions::to_string_t("");
    m_InternalAttesationServerIsSet = false;
    m_EnclaveIdent = utility::conversions::to_string_t("");
    m_EnclaveIdentIsSet = false;
    m_WgInterfaceIsSet = false;
    m_SignerIdent = utility::conversions::to_string_t("");
    m_SignerIdentIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_ProcessIsSet = false;
    m_WireguardServer = utility::conversions::to_string_t("");
    m_WireguardServerIsSet = false;
    m_EndingTime = utility::conversions::to_string_t("");
    m_EndingTimeIsSet = false;
    m_InternalIdent = utility::conversions::to_string_t("");
    m_InternalIdentIsSet = false;
    m_EnclaveInputstreamIsSet = false;
    m_WireguardPublicKey = utility::conversions::to_string_t("");
    m_WireguardPublicKeyIsSet = false;
    m_PublicIdent = utility::conversions::to_string_t("");
    m_PublicIdentIsSet = false;
    m_ConsoleOutput = utility::conversions::to_string_t("");
    m_ConsoleOutputIsSet = false;
    m_AttestationServer = utility::conversions::to_string_t("");
    m_AttestationServerIsSet = false;
    m_RemoteControlServer = utility::conversions::to_string_t("");
    m_RemoteControlServerIsSet = false;
    m_StartupTime = utility::conversions::to_string_t("");
    m_StartupTimeIsSet = false;
    m_InternalRemoteControlServer = utility::conversions::to_string_t("");
    m_InternalRemoteControlServerIsSet = false;
    m_EnvironmentIsSet = false;
}

Json_EnclaveProcess::~Json_EnclaveProcess()
{
}

void Json_EnclaveProcess::validate()
{
    // TODO: implement validation
}

web::json::value Json_EnclaveProcess::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_InternalWireguardServerIsSet)
    {
        val[utility::conversions::to_string_t("internalWireguardServer")] = ModelBase::toJson(m_InternalWireguardServer);
    }
    if(m_StartupCMDIsSet)
    {
        val[utility::conversions::to_string_t("startupCMD")] = ModelBase::toJson(m_StartupCMD);
    }
    if(m_InternalAttesationServerIsSet)
    {
        val[utility::conversions::to_string_t("internalAttesationServer")] = ModelBase::toJson(m_InternalAttesationServer);
    }
    if(m_EnclaveIdentIsSet)
    {
        val[utility::conversions::to_string_t("enclaveIdent")] = ModelBase::toJson(m_EnclaveIdent);
    }
    if(m_WgInterfaceIsSet)
    {
        val[utility::conversions::to_string_t("wgInterface")] = ModelBase::toJson(m_WgInterface);
    }
    if(m_SignerIdentIsSet)
    {
        val[utility::conversions::to_string_t("signerIdent")] = ModelBase::toJson(m_SignerIdent);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_ProcessIsSet)
    {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(m_Process);
    }
    if(m_WireguardServerIsSet)
    {
        val[utility::conversions::to_string_t("wireguardServer")] = ModelBase::toJson(m_WireguardServer);
    }
    if(m_EndingTimeIsSet)
    {
        val[utility::conversions::to_string_t("endingTime")] = ModelBase::toJson(m_EndingTime);
    }
    if(m_InternalIdentIsSet)
    {
        val[utility::conversions::to_string_t("internalIdent")] = ModelBase::toJson(m_InternalIdent);
    }
    if(m_EnclaveInputstreamIsSet)
    {
        val[utility::conversions::to_string_t("enclaveInputstream")] = ModelBase::toJson(m_EnclaveInputstream);
    }
    if(m_WireguardPublicKeyIsSet)
    {
        val[utility::conversions::to_string_t("wireguardPublicKey")] = ModelBase::toJson(m_WireguardPublicKey);
    }
    if(m_PublicIdentIsSet)
    {
        val[utility::conversions::to_string_t("publicIdent")] = ModelBase::toJson(m_PublicIdent);
    }
    if(m_ConsoleOutputIsSet)
    {
        val[utility::conversions::to_string_t("consoleOutput")] = ModelBase::toJson(m_ConsoleOutput);
    }
    if(m_AttestationServerIsSet)
    {
        val[utility::conversions::to_string_t("attestationServer")] = ModelBase::toJson(m_AttestationServer);
    }
    if(m_RemoteControlServerIsSet)
    {
        val[utility::conversions::to_string_t("remoteControlServer")] = ModelBase::toJson(m_RemoteControlServer);
    }
    if(m_StartupTimeIsSet)
    {
        val[utility::conversions::to_string_t("startupTime")] = ModelBase::toJson(m_StartupTime);
    }
    if(m_InternalRemoteControlServerIsSet)
    {
        val[utility::conversions::to_string_t("internalRemoteControlServer")] = ModelBase::toJson(m_InternalRemoteControlServer);
    }
    if(m_EnvironmentIsSet)
    {
        val[utility::conversions::to_string_t("environment")] = ModelBase::toJson(m_Environment);
    }

    return val;
}

bool Json_EnclaveProcess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internalWireguardServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalWireguardServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalWireguardServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalWireguardServer);
            setInternalWireguardServer(refVal_internalWireguardServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startupCMD")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startupCMD"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_startupCMD;
            ok &= ModelBase::fromJson(fieldValue, refVal_startupCMD);
            setStartupCMD(refVal_startupCMD);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalAttesationServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalAttesationServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalAttesationServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalAttesationServer);
            setInternalAttesationServer(refVal_internalAttesationServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enclaveIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveIdent);
            setEnclaveIdent(refVal_enclaveIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wgInterface")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wgInterface"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_WireguardInterface> refVal_wgInterface;
            ok &= ModelBase::fromJson(fieldValue, refVal_wgInterface);
            setWgInterface(refVal_wgInterface);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signerIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signerIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_signerIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_signerIdent);
            setSignerIdent(refVal_signerIdent);
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
    if(val.has_field(utility::conversions::to_string_t("process")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_Process> refVal_process;
            ok &= ModelBase::fromJson(fieldValue, refVal_process);
            setProcess(refVal_process);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wireguardServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wireguardServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wireguardServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_wireguardServer);
            setWireguardServer(refVal_wireguardServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endingTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endingTime"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_endingTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_endingTime);
            setEndingTime(refVal_endingTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalIdent);
            setInternalIdent(refVal_internalIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveInputstream")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveInputstream"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_enclaveInputstream;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveInputstream);
            setEnclaveInputstream(refVal_enclaveInputstream);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wireguardPublicKey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wireguardPublicKey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wireguardPublicKey;
            ok &= ModelBase::fromJson(fieldValue, refVal_wireguardPublicKey);
            setWireguardPublicKey(refVal_wireguardPublicKey);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_publicIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_publicIdent);
            setPublicIdent(refVal_publicIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consoleOutput")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consoleOutput"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_consoleOutput;
            ok &= ModelBase::fromJson(fieldValue, refVal_consoleOutput);
            setConsoleOutput(refVal_consoleOutput);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attestationServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attestationServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_attestationServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_attestationServer);
            setAttestationServer(refVal_attestationServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remoteControlServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remoteControlServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_remoteControlServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_remoteControlServer);
            setRemoteControlServer(refVal_remoteControlServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startupTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startupTime"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_startupTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_startupTime);
            setStartupTime(refVal_startupTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalRemoteControlServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalRemoteControlServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalRemoteControlServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalRemoteControlServer);
            setInternalRemoteControlServer(refVal_internalRemoteControlServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_Environment> refVal_environment;
            ok &= ModelBase::fromJson(fieldValue, refVal_environment);
            setEnvironment(refVal_environment);
        }
    }
    return ok;
}

void Json_EnclaveProcess::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_InternalWireguardServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalWireguardServer"), m_InternalWireguardServer));
    }
    if(m_StartupCMDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startupCMD"), m_StartupCMD));
    }
    if(m_InternalAttesationServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalAttesationServer"), m_InternalAttesationServer));
    }
    if(m_EnclaveIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveIdent"), m_EnclaveIdent));
    }
    if(m_WgInterfaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wgInterface"), m_WgInterface));
    }
    if(m_SignerIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signerIdent"), m_SignerIdent));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_ProcessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("process"), m_Process));
    }
    if(m_WireguardServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wireguardServer"), m_WireguardServer));
    }
    if(m_EndingTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endingTime"), m_EndingTime));
    }
    if(m_InternalIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalIdent"), m_InternalIdent));
    }
    if(m_EnclaveInputstreamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveInputstream"), m_EnclaveInputstream));
    }
    if(m_WireguardPublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wireguardPublicKey"), m_WireguardPublicKey));
    }
    if(m_PublicIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicIdent"), m_PublicIdent));
    }
    if(m_ConsoleOutputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("consoleOutput"), m_ConsoleOutput));
    }
    if(m_AttestationServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attestationServer"), m_AttestationServer));
    }
    if(m_RemoteControlServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remoteControlServer"), m_RemoteControlServer));
    }
    if(m_StartupTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startupTime"), m_StartupTime));
    }
    if(m_InternalRemoteControlServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalRemoteControlServer"), m_InternalRemoteControlServer));
    }
    if(m_EnvironmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("environment"), m_Environment));
    }
}

bool Json_EnclaveProcess::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("internalWireguardServer")))
    {
        utility::string_t refVal_internalWireguardServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalWireguardServer")), refVal_internalWireguardServer );
        setInternalWireguardServer(refVal_internalWireguardServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startupCMD")))
    {
        utility::string_t refVal_startupCMD;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startupCMD")), refVal_startupCMD );
        setStartupCMD(refVal_startupCMD);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalAttesationServer")))
    {
        utility::string_t refVal_internalAttesationServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalAttesationServer")), refVal_internalAttesationServer );
        setInternalAttesationServer(refVal_internalAttesationServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveIdent")))
    {
        utility::string_t refVal_enclaveIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveIdent")), refVal_enclaveIdent );
        setEnclaveIdent(refVal_enclaveIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wgInterface")))
    {
        std::shared_ptr<Json_WireguardInterface> refVal_wgInterface;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wgInterface")), refVal_wgInterface );
        setWgInterface(refVal_wgInterface);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("signerIdent")))
    {
        utility::string_t refVal_signerIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("signerIdent")), refVal_signerIdent );
        setSignerIdent(refVal_signerIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("process")))
    {
        std::shared_ptr<Json_Process> refVal_process;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("process")), refVal_process );
        setProcess(refVal_process);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wireguardServer")))
    {
        utility::string_t refVal_wireguardServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wireguardServer")), refVal_wireguardServer );
        setWireguardServer(refVal_wireguardServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endingTime")))
    {
        utility::string_t refVal_endingTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endingTime")), refVal_endingTime );
        setEndingTime(refVal_endingTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalIdent")))
    {
        utility::string_t refVal_internalIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalIdent")), refVal_internalIdent );
        setInternalIdent(refVal_internalIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveInputstream")))
    {
        std::shared_ptr<Object> refVal_enclaveInputstream;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveInputstream")), refVal_enclaveInputstream );
        setEnclaveInputstream(refVal_enclaveInputstream);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wireguardPublicKey")))
    {
        utility::string_t refVal_wireguardPublicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wireguardPublicKey")), refVal_wireguardPublicKey );
        setWireguardPublicKey(refVal_wireguardPublicKey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("publicIdent")))
    {
        utility::string_t refVal_publicIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicIdent")), refVal_publicIdent );
        setPublicIdent(refVal_publicIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("consoleOutput")))
    {
        utility::string_t refVal_consoleOutput;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("consoleOutput")), refVal_consoleOutput );
        setConsoleOutput(refVal_consoleOutput);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attestationServer")))
    {
        utility::string_t refVal_attestationServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attestationServer")), refVal_attestationServer );
        setAttestationServer(refVal_attestationServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("remoteControlServer")))
    {
        utility::string_t refVal_remoteControlServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("remoteControlServer")), refVal_remoteControlServer );
        setRemoteControlServer(refVal_remoteControlServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startupTime")))
    {
        utility::string_t refVal_startupTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startupTime")), refVal_startupTime );
        setStartupTime(refVal_startupTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalRemoteControlServer")))
    {
        utility::string_t refVal_internalRemoteControlServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalRemoteControlServer")), refVal_internalRemoteControlServer );
        setInternalRemoteControlServer(refVal_internalRemoteControlServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("environment")))
    {
        std::shared_ptr<Json_Environment> refVal_environment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("environment")), refVal_environment );
        setEnvironment(refVal_environment);
    }
    return ok;
}

utility::string_t Json_EnclaveProcess::getInternalWireguardServer() const
{
    return m_InternalWireguardServer;
}

void Json_EnclaveProcess::setInternalWireguardServer(const utility::string_t& value)
{
    m_InternalWireguardServer = value;
    m_InternalWireguardServerIsSet = true;
}

bool Json_EnclaveProcess::internalWireguardServerIsSet() const
{
    return m_InternalWireguardServerIsSet;
}

void Json_EnclaveProcess::unsetInternalWireguardServer()
{
    m_InternalWireguardServerIsSet = false;
}
utility::string_t Json_EnclaveProcess::getStartupCMD() const
{
    return m_StartupCMD;
}

void Json_EnclaveProcess::setStartupCMD(const utility::string_t& value)
{
    m_StartupCMD = value;
    m_StartupCMDIsSet = true;
}

bool Json_EnclaveProcess::startupCMDIsSet() const
{
    return m_StartupCMDIsSet;
}

void Json_EnclaveProcess::unsetStartupCMD()
{
    m_StartupCMDIsSet = false;
}
utility::string_t Json_EnclaveProcess::getInternalAttesationServer() const
{
    return m_InternalAttesationServer;
}

void Json_EnclaveProcess::setInternalAttesationServer(const utility::string_t& value)
{
    m_InternalAttesationServer = value;
    m_InternalAttesationServerIsSet = true;
}

bool Json_EnclaveProcess::internalAttesationServerIsSet() const
{
    return m_InternalAttesationServerIsSet;
}

void Json_EnclaveProcess::unsetInternalAttesationServer()
{
    m_InternalAttesationServerIsSet = false;
}
utility::string_t Json_EnclaveProcess::getEnclaveIdent() const
{
    return m_EnclaveIdent;
}

void Json_EnclaveProcess::setEnclaveIdent(const utility::string_t& value)
{
    m_EnclaveIdent = value;
    m_EnclaveIdentIsSet = true;
}

bool Json_EnclaveProcess::enclaveIdentIsSet() const
{
    return m_EnclaveIdentIsSet;
}

void Json_EnclaveProcess::unsetEnclaveIdent()
{
    m_EnclaveIdentIsSet = false;
}
std::shared_ptr<Json_WireguardInterface> Json_EnclaveProcess::getWgInterface() const
{
    return m_WgInterface;
}

void Json_EnclaveProcess::setWgInterface(const std::shared_ptr<Json_WireguardInterface>& value)
{
    m_WgInterface = value;
    m_WgInterfaceIsSet = true;
}

bool Json_EnclaveProcess::wgInterfaceIsSet() const
{
    return m_WgInterfaceIsSet;
}

void Json_EnclaveProcess::unsetWgInterface()
{
    m_WgInterfaceIsSet = false;
}
utility::string_t Json_EnclaveProcess::getSignerIdent() const
{
    return m_SignerIdent;
}

void Json_EnclaveProcess::setSignerIdent(const utility::string_t& value)
{
    m_SignerIdent = value;
    m_SignerIdentIsSet = true;
}

bool Json_EnclaveProcess::signerIdentIsSet() const
{
    return m_SignerIdentIsSet;
}

void Json_EnclaveProcess::unsetSignerIdent()
{
    m_SignerIdentIsSet = false;
}
utility::string_t Json_EnclaveProcess::getStatus() const
{
    return m_Status;
}

void Json_EnclaveProcess::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Json_EnclaveProcess::statusIsSet() const
{
    return m_StatusIsSet;
}

void Json_EnclaveProcess::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<Json_Process> Json_EnclaveProcess::getProcess() const
{
    return m_Process;
}

void Json_EnclaveProcess::setProcess(const std::shared_ptr<Json_Process>& value)
{
    m_Process = value;
    m_ProcessIsSet = true;
}

bool Json_EnclaveProcess::processIsSet() const
{
    return m_ProcessIsSet;
}

void Json_EnclaveProcess::unsetProcess()
{
    m_ProcessIsSet = false;
}
utility::string_t Json_EnclaveProcess::getWireguardServer() const
{
    return m_WireguardServer;
}

void Json_EnclaveProcess::setWireguardServer(const utility::string_t& value)
{
    m_WireguardServer = value;
    m_WireguardServerIsSet = true;
}

bool Json_EnclaveProcess::wireguardServerIsSet() const
{
    return m_WireguardServerIsSet;
}

void Json_EnclaveProcess::unsetWireguardServer()
{
    m_WireguardServerIsSet = false;
}
utility::string_t Json_EnclaveProcess::getEndingTime() const
{
    return m_EndingTime;
}

void Json_EnclaveProcess::setEndingTime(const utility::string_t& value)
{
    m_EndingTime = value;
    m_EndingTimeIsSet = true;
}

bool Json_EnclaveProcess::endingTimeIsSet() const
{
    return m_EndingTimeIsSet;
}

void Json_EnclaveProcess::unsetEndingTime()
{
    m_EndingTimeIsSet = false;
}
utility::string_t Json_EnclaveProcess::getInternalIdent() const
{
    return m_InternalIdent;
}

void Json_EnclaveProcess::setInternalIdent(const utility::string_t& value)
{
    m_InternalIdent = value;
    m_InternalIdentIsSet = true;
}

bool Json_EnclaveProcess::internalIdentIsSet() const
{
    return m_InternalIdentIsSet;
}

void Json_EnclaveProcess::unsetInternalIdent()
{
    m_InternalIdentIsSet = false;
}
std::shared_ptr<Object> Json_EnclaveProcess::getEnclaveInputstream() const
{
    return m_EnclaveInputstream;
}

void Json_EnclaveProcess::setEnclaveInputstream(const std::shared_ptr<Object>& value)
{
    m_EnclaveInputstream = value;
    m_EnclaveInputstreamIsSet = true;
}

bool Json_EnclaveProcess::enclaveInputstreamIsSet() const
{
    return m_EnclaveInputstreamIsSet;
}

void Json_EnclaveProcess::unsetEnclaveInputstream()
{
    m_EnclaveInputstreamIsSet = false;
}
utility::string_t Json_EnclaveProcess::getWireguardPublicKey() const
{
    return m_WireguardPublicKey;
}

void Json_EnclaveProcess::setWireguardPublicKey(const utility::string_t& value)
{
    m_WireguardPublicKey = value;
    m_WireguardPublicKeyIsSet = true;
}

bool Json_EnclaveProcess::wireguardPublicKeyIsSet() const
{
    return m_WireguardPublicKeyIsSet;
}

void Json_EnclaveProcess::unsetWireguardPublicKey()
{
    m_WireguardPublicKeyIsSet = false;
}
utility::string_t Json_EnclaveProcess::getPublicIdent() const
{
    return m_PublicIdent;
}

void Json_EnclaveProcess::setPublicIdent(const utility::string_t& value)
{
    m_PublicIdent = value;
    m_PublicIdentIsSet = true;
}

bool Json_EnclaveProcess::publicIdentIsSet() const
{
    return m_PublicIdentIsSet;
}

void Json_EnclaveProcess::unsetPublicIdent()
{
    m_PublicIdentIsSet = false;
}
utility::string_t Json_EnclaveProcess::getConsoleOutput() const
{
    return m_ConsoleOutput;
}

void Json_EnclaveProcess::setConsoleOutput(const utility::string_t& value)
{
    m_ConsoleOutput = value;
    m_ConsoleOutputIsSet = true;
}

bool Json_EnclaveProcess::consoleOutputIsSet() const
{
    return m_ConsoleOutputIsSet;
}

void Json_EnclaveProcess::unsetConsoleOutput()
{
    m_ConsoleOutputIsSet = false;
}
utility::string_t Json_EnclaveProcess::getAttestationServer() const
{
    return m_AttestationServer;
}

void Json_EnclaveProcess::setAttestationServer(const utility::string_t& value)
{
    m_AttestationServer = value;
    m_AttestationServerIsSet = true;
}

bool Json_EnclaveProcess::attestationServerIsSet() const
{
    return m_AttestationServerIsSet;
}

void Json_EnclaveProcess::unsetAttestationServer()
{
    m_AttestationServerIsSet = false;
}
utility::string_t Json_EnclaveProcess::getRemoteControlServer() const
{
    return m_RemoteControlServer;
}

void Json_EnclaveProcess::setRemoteControlServer(const utility::string_t& value)
{
    m_RemoteControlServer = value;
    m_RemoteControlServerIsSet = true;
}

bool Json_EnclaveProcess::remoteControlServerIsSet() const
{
    return m_RemoteControlServerIsSet;
}

void Json_EnclaveProcess::unsetRemoteControlServer()
{
    m_RemoteControlServerIsSet = false;
}
utility::string_t Json_EnclaveProcess::getStartupTime() const
{
    return m_StartupTime;
}

void Json_EnclaveProcess::setStartupTime(const utility::string_t& value)
{
    m_StartupTime = value;
    m_StartupTimeIsSet = true;
}

bool Json_EnclaveProcess::startupTimeIsSet() const
{
    return m_StartupTimeIsSet;
}

void Json_EnclaveProcess::unsetStartupTime()
{
    m_StartupTimeIsSet = false;
}
utility::string_t Json_EnclaveProcess::getInternalRemoteControlServer() const
{
    return m_InternalRemoteControlServer;
}

void Json_EnclaveProcess::setInternalRemoteControlServer(const utility::string_t& value)
{
    m_InternalRemoteControlServer = value;
    m_InternalRemoteControlServerIsSet = true;
}

bool Json_EnclaveProcess::internalRemoteControlServerIsSet() const
{
    return m_InternalRemoteControlServerIsSet;
}

void Json_EnclaveProcess::unsetInternalRemoteControlServer()
{
    m_InternalRemoteControlServerIsSet = false;
}
std::shared_ptr<Json_Environment> Json_EnclaveProcess::getEnvironment() const
{
    return m_Environment;
}

void Json_EnclaveProcess::setEnvironment(const std::shared_ptr<Json_Environment>& value)
{
    m_Environment = value;
    m_EnvironmentIsSet = true;
}

bool Json_EnclaveProcess::environmentIsSet() const
{
    return m_EnvironmentIsSet;
}

void Json_EnclaveProcess::unsetEnvironment()
{
    m_EnvironmentIsSet = false;
}
}
}
}
}


