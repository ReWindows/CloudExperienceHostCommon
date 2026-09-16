#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 173 member(s).
namespace CloudExperienceHostAPI {
class UtilStaticsCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@UtilStaticsCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupEnduserSessionAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long CleanupEnduserSessionAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAutoLogonCredentialsAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ClearAutoLogonCredentialsAsync(unsigned char, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableDriverUpdate@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJXZ
    virtual long EnableDriverUpdate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FactoryResetDevice@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJXZ
    virtual long FactoryResetDevice();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultUserSessionNextAppLaunch@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long GetDefaultUserSessionNextAppLaunch(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicensingPolicyValue@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAK@Z
    virtual long GetLicensingPolicyValue(HSTRING__*, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowsFlightDataAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long GetWindowsFlightDataAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicateNetworkReprobe@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJXZ
    virtual long IndicateNetworkReprobe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InjectTabKey@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJE@Z
    virtual long InjectTabKey(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstallDriversAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@I@Foundation@Windows@@@Z
    virtual long InstallDriversAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@UtilStaticsCore@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@UtilStaticsCore@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppPackageProvisionedAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long IsAppPackageProvisionedAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDataMartSim@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsDataMartSim(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNetworkRequiredAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long IsNetworkRequiredAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWebSignInNavigationAllowed@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsWebSignInNavigationAllowed(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWebcamPermissionAllowed@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsWebcamPermissionAllowed(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadHtmlFileAsUtf16WideCharTextAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@W4LoadHtmlFileOptions@2@W4LoadHtmlFileRelativePathKnownFolderId@2@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long LoadHtmlFileAsUtf16WideCharTextAsync(HSTRING__*, int, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepEnduserSessionAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long PrepEnduserSessionAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@UtilStaticsCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAADUserTokenAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long RequestAADUserTokenAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestartAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long RestartAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UtilStaticsCore@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDataForOobe@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0@Z
    virtual long SetDataForOobe(HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultUserSessionNextAppLaunch@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJE@Z
    virtual long SetDefaultUserSessionNextAppLaunch(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLaunchProgressTransition@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJE@Z
    virtual long SetLaunchProgressTransition(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long ShutdownAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryRefreshWindowsFlightDataAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long TryRefreshWindowsFlightDataAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimeZoneAsync@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long UpdateTimeZoneAsync(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UtilStaticsCore@CloudExperienceHostAPI@@QEAA@XZ
    UtilStaticsCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForNamedSignal@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z
    virtual long WaitForNamedSignal(HSTRING__*, HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DaysSinceFirstLogon@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IReference@I@Foundation@Windows@@@Z
    virtual long get_DaysSinceFirstLogon(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DaysSinceFirstLogonOnCurrentInstallation@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IReference@I@Foundation@Windows@@@Z
    virtual long get_DaysSinceFirstLogonOnCurrentInstallation(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisabledSkipNetwork@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_DisabledSkipNetwork(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideWireless@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_HideWireless(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HideWirelessCommercial@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_HideWirelessCommercial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsAssignedToLiteMetricExperimentGroup@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_IsAssignedToLiteMetricExperimentGroup(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsNetworkRequired@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAE@Z
    virtual long get_IsNetworkRequired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OobeNetworkState@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IReference@_N@Foundation@Windows@@@Z
    virtual long get_OobeNetworkState(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProductActivationId@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ProductActivationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowsProductKey@UtilStaticsCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WindowsProductKey(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UtilStaticsCore@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~UtilStaticsCore();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAadjSupported@UtilStaticsCore@CloudExperienceHostAPI@@AEAAJPEAE@Z
    long IsAadjSupported(unsigned char *);
};
} // namespace CloudExperienceHostAPI
