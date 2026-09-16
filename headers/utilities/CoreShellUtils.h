#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 5 member(s).
class CoreShellUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForDefaultClassIdExistance@CoreShellUtils@@YA_NXZ
    bool CheckForDefaultClassIdExistance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegistryIsPopulated@CoreShellUtils@@YAXXZ
    void EnsureRegistryIsPopulated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComposerClassActivationValue@CoreShellUtils@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHKEY__@@PEBG@Z
    ::Microsoft::WRL::Wrappers::HString GetComposerClassActivationValue(HKEY__*, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComposerRegistryRootPathWithoutChecks@CoreShellUtils@@YA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetComposerRegistryRootPathWithoutChecks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultComposerClassId@CoreShellUtils@@YA?AVHString@Wrappers@WRL@Microsoft@@XZ
    ::Microsoft::WRL::Wrappers::HString GetDefaultComposerClassId();
};
