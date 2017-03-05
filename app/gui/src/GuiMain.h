/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_E062EA25D23CE004__
#define __JUCE_HEADER_E062EA25D23CE004__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "DebugWindow.h"
#include "src/GuiDefinitions.h"
#include "src/MainWindow.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GuiMain  : public Component,
                 public ChangeListener
{
public:
    //==============================================================================
    GuiMain ();
    ~GuiMain();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //AudioComponent* createAudioComponent();
    void changeListenerCallback(ChangeBroadcaster* source) override;
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    DebugWindow *debugWindow;
    GuiGlobalsParams guiGlobalsParams;
    MainWindow *mainWindow;
    AudioComponent* AudioComponentObj;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Viewport> debugViewPort;
    ScopedPointer<Viewport> viewPort;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GuiMain)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_E062EA25D23CE004__
