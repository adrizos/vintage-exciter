/*
 ==============================================================================
 
 This file was auto-generated!
 
 It contains the basic framework code for a JUCE plugin editor.
 
 ==============================================================================
 */

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "Images.h"

//==============================================================================
/**
 */
class VintageExciterAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    VintageExciterAudioProcessorEditor (VintageExciterAudioProcessor&);
    ~VintageExciterAudioProcessorEditor();
    
    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
private:
    
    ScopedPointer<Slider> driveKnob;
    ScopedPointer<Slider> rangeKnob;
    ScopedPointer<Slider> blendKnob;
    ScopedPointer<Slider> volumeKnob;
    ScopedPointer<Slider> toneKnob;
    
    //provides slide to change values ability (creates XML file that stores parameters values (presets etc also)
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> rangeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volumeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> toneAttachment;
    
    //Setup for images
    Image backgroundImage;
    Image logo;
    Image background2;
    Image background3;
    Image background4;
    Image background5;
    
    
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    VintageExciterAudioProcessor& processor;
    
    
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (VintageExciterAudioProcessorEditor)
};
