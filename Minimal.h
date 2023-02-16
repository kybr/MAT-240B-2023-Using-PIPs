
/*******************************************************************************
 BEGIN_JUCE_PIP_METADATA

 name:             Minimal
 version:          1.0.0
 vendor:           Karl
 website:          n/a
 description:      foo

 dependencies:     juce_core, juce_data_structures, juce_events, juce_graphics,
                   juce_gui_basics
 exporters:        xcode_mac, vs2022, linux_make, androidstudio, xcode_iphone

 moduleFlags:      JUCE_STRICT_REFCOUNTEDPOINTER=1

 type:             Component
 mainClass:        Minimal

 useLocalCopy:     1

 END_JUCE_PIP_METADATA

*******************************************************************************/

#pragma once

#include <juce_audio_processors/juce_audio_processors.h>
using namespace juce;

//==============================================================================
class Minimal : public Component {
 public:
  Minimal() { setSize(750, 750); }

  //==============================================================================
  void paint(Graphics& g) override {
    // g.fillAll(getUIColourIfAvailable(
    // LookAndFeel_V4::ColourScheme::UIColour::windowBackground));
  }

  void resized() override {}

 private:
  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(Minimal)
};
