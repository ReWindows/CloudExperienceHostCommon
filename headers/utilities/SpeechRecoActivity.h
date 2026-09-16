#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 5 member(s).
namespace CloudExperienceHostSpeechTelemetry {
class SpeechRecoActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SpeechRecoActivity@CloudExperienceHostSpeechTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SpeechRecoActivity@CloudExperienceHostSpeechTelemetry@@QEAAXW4SpeechRecoStopReason@@@Z
    void Stop(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SpeechRecoActivity@CloudExperienceHostSpeechTelemetry@@QEAA@XZ
    ~SpeechRecoActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SpeechRecoActivity@CloudExperienceHostSpeechTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SpeechRecoActivity@CloudExperienceHostSpeechTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CloudExperienceHostSpeechTelemetry
