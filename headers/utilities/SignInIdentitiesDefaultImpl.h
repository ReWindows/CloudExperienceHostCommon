#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 4 member(s).
class SignInIdentitiesDefaultImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedProviders@SignInIdentitiesDefaultImpl@@UEAAJPEAW4SignInIdentityProviders@CloudExperienceHostAPI@@@Z
    virtual long get_AllowedProviders(int *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvidersAllowedByLicensingPolicy@SignInIdentitiesDefaultImpl@@CA?AW4SignInIdentityProviders@CloudExperienceHostAPI@@XZ
    static int GetProvidersAllowedByLicensingPolicy();
};
