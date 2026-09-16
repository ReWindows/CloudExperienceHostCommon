#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CloudExperienceHostCommon.dll by Windissect. 1 member(s).
namespace CloudExperienceHostAPI {
class Speech {
public:
    class SpeechRecognition;
    class SpeechRecognitionController;
    class SpeechRecognitionKnownCommands;
    class SpeechSynthesis;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishSpeechControllerState@Speech@CloudExperienceHostAPI@@YAJW4SpeechControllerState@12@PEBG@Z
    long PublishSpeechControllerState(int, unsigned short const *);
};
} // namespace CloudExperienceHostAPI
