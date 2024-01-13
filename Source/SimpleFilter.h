#pragma once
#include <vector>
#include "JuceHeader.h"

class SimpleFilter {
public:
	// setters
	void setHighpass(bool highpass);
	void setCutoffFrequency(float cutoffFrequency);
	void setSamplingRate(float samplingRate);

	// Does not necessarily need to use JUCE's audio buffer
	void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&);

private:
	bool highpass;
	float cutoffFrequency;
	float samplingRate;

	// allpass filters' buffers: 1 sample per channel
	std::vector<float> dnBuffer;
};

