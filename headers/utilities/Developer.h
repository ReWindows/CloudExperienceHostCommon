#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 19 member(s).
namespace CloudExperienceHostAPI {
class Developer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Developer@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@Developer@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@Developer@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@Developer@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@Developer@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@Developer@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Developer@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Developer@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDownloadFullPackageAsync@Developer@CloudExperienceHostAPI@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long StartDownloadFullPackageAsync(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DownloadDevHome@Developer@CloudExperienceHostAPI@@AEAAJXZ
    long DownloadDevHome();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStubPreference@Developer@CloudExperienceHostAPI@@AEAAJW4PackageStubPreference@Deployment@Management@Windows@@@Z
    long SetStubPreference(int);
};
} // namespace CloudExperienceHostAPI
