#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 5 member(s).
namespace CXPolicy {
class CachingAllowlistAggregator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@CachingAllowlistAggregator@CXPolicy@@SAAEAV12@XZ
    static ::CXPolicy::CachingAllowlistAggregator & Instance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visit@CachingAllowlistAggregator@CXPolicy@@UEAAXAEAVO365Allowlist@2@@Z
    virtual void Visit(::CXPolicy::O365Allowlist &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visit@CachingAllowlistAggregator@CXPolicy@@UEAAXAEAVPolicyAllowlist@2@@Z
    virtual void Visit(::CXPolicy::PolicyAllowlist &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visit@CachingAllowlistAggregator@CXPolicy@@UEAAXAEAVWebAppAllowlist@2@@Z
    virtual void Visit(::CXPolicy::WebAppAllowlist &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CachingAllowlistAggregator@CXPolicy@@QEAA@XZ
    ~CachingAllowlistAggregator();
};
} // namespace CXPolicy
