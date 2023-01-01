/*
  ==============================================================================

    SoftFocusEffect.h
    Created: 10 Oct 2022 1:24:13am
    Author:  Charles Julian Knight

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class SoftFocusEffect {
private:
    enum {
        chorus1
    };
    juce::dsp::ProcessorChain<
        juce::dsp::Chorus<float>
    > processorChain;

public:
    SoftFocusEffect()
    {
    }

    void prepare(double sampleRate, int samplesPerBlock, int numChannels)
    {
        juce::dsp::ProcessSpec spec;
        spec.sampleRate = sampleRate;
        spec.maximumBlockSize = samplesPerBlock;
        spec.numChannels = numChannels;
        processorChain.prepare (spec);

        processorChain.get<chorus1>().setRate(0.32); //Hz
        processorChain.get<chorus1>().setDepth(0.8);
        processorChain.get<chorus1>().setFeedback(0.25);
        processorChain.get<chorus1>().setMix(1);
    }

    void reset() noexcept
    {
         processorChain.reset();
    }

    void process(float* data, int samples)
    {
//        juce::dsp::ProcessContextReplacing<float> context (channelData);
//        processorChain.process (context);
//        juce::dsp::AudioBlock<float> (outputBuffer)
//            .getSubBlock ((size_t) startSample, (size_t) numSamples)
//            .add (tempBlock);

    }
};
