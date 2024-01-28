# SimpleFilter

SimpleFilter is a basic audio filter implemented in C++ using the JUCE framework. It provides a simple all-pass filter with adjustable cutoff frequency and the option to operate as a highpass filter.

## Project Structure

The project consists of the following files:

- PluginProcessor.h/cpp: Implements the audio processor using JUCE's AudioProcessor class. It handles audio processing, parameter management, and plugin state.

- PluginEditor.h/cpp: Implements the plugin editor using JUCE's AudioProcessorEditor class. It includes UI components such as sliders and buttons for user interaction.

- SimpleFilter.h/cpp: Defines the SimpleFilter class, which encapsulates the all-pass filter logic. The SimpleFilter class is used by the audio processor to perform filtering.


### Building the Project

#### 1. Clone the repository:

```bash
git clone https://github.com/burakcanakinci/SimpleFilter.git
cd SimpleFilter
```

#### 2. Open the Project in Your IDE:

Open the project using your preferred C++ IDE or build tool that supports JUCE projects.

#### 3. Build the Project:

Build the project in your IDE. Ensure that you have the necessary dependencies, including the JUCE framework.

#### 4. Run the Plugin:

After building, you can run the audio plugin in your DAW (Digital Audio Workstation) that supports VST/AU plugins.

### Usage

#### 1. Load the Plugin:

Load the built plugin (VST/AU) into your DAW.

#### 2. Adjust Parameters:

- Cutoff Frequency Slider: Adjust the cutoff frequency of the filter.
- Highpass Toggle Button: Enable/disable highpass filtering.

#### 3. Listen to the Output:

Play audio through the plugin and observe the impact of the filter settings.

## Contributing

Feel free to contribute to this project by submitting issues or pull requests.
