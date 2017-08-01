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

#ifndef __JUCE_HEADER_23C2B266F985A3A8__
#define __JUCE_HEADER_23C2B266F985A3A8__

//[Headers]     -- You can add your own extra header files here --
#define CIRCLE_COUNT 10
#include "../JuceLibraryCode/JuceHeader.h"
#include "CircleItem.h"
#include "MyUtils.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class EqGraph  : public Component,
                 public ChangeBroadcaster
{
public:
    //==============================================================================
    EqGraph ();
    ~EqGraph();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    #define X_SIZE 740
    #define Y_SIZE 400  
    void drawCircles (Graphics& g);
    void drawLineGraph (Graphics& g);
    int checkMouseOver (int x, int y);
    void activeCircle(int circleIndex, int active);
    float getFreq(int index); 
    float getGain(int index);
    int getSelectedItem();
    void SetMagDb(float *Magdb, float size);
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void mouseMove (const MouseEvent& e) override;
    void mouseExit (const MouseEvent& e) override;
    void mouseDown (const MouseEvent& e) override;
    void mouseDrag (const MouseEvent& e) override;
    void mouseUp (const MouseEvent& e) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    CircleItem* circles;
    int selectedItem = 0;
    float Magdb[X_SIZE];
    //[/UserVariables]

    //==============================================================================


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EqGraph)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_23C2B266F985A3A8__
