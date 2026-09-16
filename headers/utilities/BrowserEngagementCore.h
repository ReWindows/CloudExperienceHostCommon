#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 28 member(s).
namespace CloudExperienceHostAPI {
class BrowserEngagementCore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BrowserEngagementCore@CloudExperienceHostAPI@@QEAA@XZ
    BrowserEngagementCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeclutterBrowsersAfterUserConsentAsync@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long DeclutterBrowsersAfterUserConsentAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@BrowserEngagementCore@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@BrowserEngagementCore@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PinAndSetDefaultMicrosoftBrowserAsync@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long PinAndSetDefaultMicrosoftBrowserAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBrowserSearchEngineAsync@BrowserEngagementCore@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long ResetBrowserSearchEngineAsync(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BrowserEngagementCore@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BrowserEngagementCore@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~BrowserEngagementCore();
};
} // namespace CloudExperienceHostAPI
