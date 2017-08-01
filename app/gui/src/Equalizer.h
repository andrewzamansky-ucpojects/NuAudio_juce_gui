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

#ifndef __JUCE_HEADER_3EBA0499777AD69C__
#define __JUCE_HEADER_3EBA0499777AD69C__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]

#include "EqGraph.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Equalizer  : public Component,
                   public ChangeListener,
                   public ButtonListener
{
public:
    //==============================================================================
    Equalizer ();
    ~Equalizer();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    #define M_PI 3.14159265359f
    #define SR 48000.0f
    #define X_SIZE 740
    #define Y_SIZE 400    

    struct BiQuads {
        // Zeros
        float a0;
        float a1;
        float a2;
        // Poles
        float b1;
        float b2;    
    };

    
    void changeListenerCallback(ChangeBroadcaster* source) override;
    BiQuads LowPassFilter(float f, float q);
    void Equalizer::CoefsEval(float *coefs, int numOfCoeffs,float w, float *resReal, float *resImg);
    void Equalizer::FilterEval(Equalizer::BiQuads biQuads, float *magdb, int numPoints);

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* dynamics_graph_png;
    static const int dynamics_graph_pngSize;
    static const char* eq_ls_png;
    static const int eq_ls_pngSize;
    static const char* eq_peak_png;
    static const int eq_peak_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    ToggleButton **toggles;
    TextEditor **te_frequencies;
    float Magdb[X_SIZE];
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ToggleButton> tb1;
    ScopedPointer<Label> label;
    ScopedPointer<TextEditor> te_f1;
    ScopedPointer<Label> label2;
    ScopedPointer<TextEditor> te_g1;
    ScopedPointer<Label> label3;
    ScopedPointer<ToggleButton> tb2;
    ScopedPointer<TextEditor> te_f2;
    ScopedPointer<TextEditor> te_g2;
    ScopedPointer<TextEditor> te_q2;
    ScopedPointer<ToggleButton> tb3;
    ScopedPointer<TextEditor> te_f3;
    ScopedPointer<TextEditor> te_g3;
    ScopedPointer<TextEditor> te_q3;
    ScopedPointer<ToggleButton> tb4;
    ScopedPointer<TextEditor> te_f4;
    ScopedPointer<TextEditor> te_g4;
    ScopedPointer<TextEditor> te_q4;
    ScopedPointer<ToggleButton> tb5;
    ScopedPointer<TextEditor> te_f5;
    ScopedPointer<TextEditor> te_g5;
    ScopedPointer<TextEditor> te_q5;
    ScopedPointer<TextEditor> te_q1;
    ScopedPointer<TextEditor> te_f6;
    ScopedPointer<TextEditor> te_g6;
    ScopedPointer<ToggleButton> tb7;
    ScopedPointer<TextEditor> te_f7;
    ScopedPointer<TextEditor> te_g7;
    ScopedPointer<TextEditor> te_q7;
    ScopedPointer<ToggleButton> tb8;
    ScopedPointer<TextEditor> te_f8;
    ScopedPointer<TextEditor> te_g8;
    ScopedPointer<TextEditor> te_q8;
    ScopedPointer<ToggleButton> tb9;
    ScopedPointer<TextEditor> te_f9;
    ScopedPointer<TextEditor> te_g9;
    ScopedPointer<TextEditor> te_q9;
    ScopedPointer<ToggleButton> tb10;
    ScopedPointer<TextEditor> te_f10;
    ScopedPointer<TextEditor> te_g10;
    ScopedPointer<TextEditor> te_q10;
    ScopedPointer<ToggleButton> tb6;
    ScopedPointer<TextEditor> te_q6;
    ScopedPointer<Label> lb_200;
    ScopedPointer<Label> lb_2000;
    ScopedPointer<Label> lb_20K;
    ScopedPointer<ImageButton> ib_1;
    ScopedPointer<ImageButton> ib_2;
    ScopedPointer<ImageButton> ib_3;
    ScopedPointer<ImageButton> ib_4;
    ScopedPointer<ImageButton> ib_5;
    ScopedPointer<ImageButton> ib_6;
    ScopedPointer<ImageButton> ib_7;
    ScopedPointer<ImageButton> ib_8;
    ScopedPointer<ImageButton> ib_10;
    ScopedPointer<ImageButton> ib_9;
    ScopedPointer<EqGraph> eqGraphComponent;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Equalizer)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_3EBA0499777AD69C__
