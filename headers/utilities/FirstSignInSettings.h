#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 36 member(s).
namespace Windows::System::UserProfile {
class FirstSignInSettings {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@FirstSignInSettings@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FirstSignInSettings@UserProfile@System@Windows@@QEAA@XZ
    FirstSignInSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long HasKey(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(HSTRING__*, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@FirstSignInSettings@UserProfile@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@FirstSignInSettings@UserProfile@System@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FirstSignInSettings@UserProfile@System@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Split@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@0@Z
    virtual long Split(WindissectOpaque * *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@FirstSignInSettings@UserProfile@System@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FirstSignInSettings@UserProfile@System@Windows@@UEAA@XZ
    virtual ~FirstSignInSettings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadValues@FirstSignInSettings@UserProfile@System@Windows@@AEAAXXZ
    void LoadValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessRegkey@FirstSignInSettings@UserProfile@System@Windows@@AEAAXPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@PEAUIPropertyValueStatics@74@PEAUHKEY__@@@Z
    void ProcessRegkey(WindissectOpaque *, WindissectOpaque *, HKEY__*);
};
} // namespace Windows::System::UserProfile
