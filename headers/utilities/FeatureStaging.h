#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 27 member(s).
namespace CloudExperienceHostAPI {
class FeatureStaging {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FeatureStaging@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FeatureStaging@CloudExperienceHostAPI@@QEAA@XZ
    FeatureStaging();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@FeatureStaging@CloudExperienceHostAPI@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@FeatureStaging@CloudExperienceHostAPI@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOobeFeatureEnabled@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsOobeFeatureEnabled(HSTRING__*, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FeatureStaging@CloudExperienceHostAPI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FeatureStaging@CloudExperienceHostAPI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FeatureStaging@CloudExperienceHostAPI@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFeatureVariant@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAPEAU3@PEAE@Z
    virtual long TryGetFeatureVariant(HSTRING__*, HSTRING__* *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFeatureVariantData@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z
    virtual long TryGetFeatureVariantData(HSTRING__*, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetIsFeatureEnabled@FeatureStaging@CloudExperienceHostAPI@@UEAAJPEAUHSTRING__@@PEAE1@Z
    virtual long TryGetIsFeatureEnabled(HSTRING__*, unsigned char *, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FeatureStaging@CloudExperienceHostAPI@@UEAA@XZ
    virtual ~FeatureStaging();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetFeatureStateFromMap@FeatureStaging@CloudExperienceHostAPI@@AEAAEPEAUHSTRING__@@PEAE@Z
    unsigned char TryGetFeatureStateFromMap(HSTRING__*, unsigned char *);
};
} // namespace CloudExperienceHostAPI
