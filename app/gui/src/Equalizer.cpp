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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Equalizer.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Equalizer::Equalizer ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (tb1 = new ToggleButton ("tb enable"));
    tb1->setButtonText (String());
    tb1->setToggleState (true, dontSendNotification);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("F")));
    label->setFont (Font (15.00f, Font::bold));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (te_f1 = new TextEditor ("freq1"));
    te_f1->setMultiLine (false);
    te_f1->setReturnKeyStartsNewLine (false);
    te_f1->setReadOnly (false);
    te_f1->setScrollbarsShown (true);
    te_f1->setCaretVisible (true);
    te_f1->setPopupMenuEnabled (true);
    te_f1->setText (TRANS("20"));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("G")));
    label2->setFont (Font (15.00f, Font::bold));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (te_g1 = new TextEditor ("gain 1"));
    te_g1->setMultiLine (false);
    te_g1->setReturnKeyStartsNewLine (false);
    te_g1->setReadOnly (false);
    te_g1->setScrollbarsShown (true);
    te_g1->setCaretVisible (true);
    te_g1->setPopupMenuEnabled (true);
    te_g1->setText (TRANS("0"));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Q")));
    label3->setFont (Font (15.00f, Font::bold));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::textColourId, Colours::white);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (tb2 = new ToggleButton ("tb enable"));
    tb2->setButtonText (String());
    tb2->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f2 = new TextEditor ("freq1"));
    te_f2->setMultiLine (false);
    te_f2->setReturnKeyStartsNewLine (false);
    te_f2->setReadOnly (false);
    te_f2->setScrollbarsShown (true);
    te_f2->setCaretVisible (true);
    te_f2->setPopupMenuEnabled (true);
    te_f2->setText (TRANS("20"));

    addAndMakeVisible (te_g2 = new TextEditor ("gain 1"));
    te_g2->setMultiLine (false);
    te_g2->setReturnKeyStartsNewLine (false);
    te_g2->setReadOnly (false);
    te_g2->setScrollbarsShown (true);
    te_g2->setCaretVisible (true);
    te_g2->setPopupMenuEnabled (true);
    te_g2->setText (TRANS("20"));

    addAndMakeVisible (te_q2 = new TextEditor ("q2"));
    te_q2->setMultiLine (false);
    te_q2->setReturnKeyStartsNewLine (false);
    te_q2->setReadOnly (false);
    te_q2->setScrollbarsShown (true);
    te_q2->setCaretVisible (true);
    te_q2->setPopupMenuEnabled (true);
    te_q2->setText (TRANS("3"));

    addAndMakeVisible (tb3 = new ToggleButton ("tb enable"));
    tb3->setButtonText (String());
    tb3->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f3 = new TextEditor ("freq1"));
    te_f3->setMultiLine (false);
    te_f3->setReturnKeyStartsNewLine (false);
    te_f3->setReadOnly (false);
    te_f3->setScrollbarsShown (true);
    te_f3->setCaretVisible (true);
    te_f3->setPopupMenuEnabled (true);
    te_f3->setText (TRANS("20"));

    addAndMakeVisible (te_g3 = new TextEditor ("gain 3"));
    te_g3->setMultiLine (false);
    te_g3->setReturnKeyStartsNewLine (false);
    te_g3->setReadOnly (false);
    te_g3->setScrollbarsShown (true);
    te_g3->setCaretVisible (true);
    te_g3->setPopupMenuEnabled (true);
    te_g3->setText (TRANS("20"));

    addAndMakeVisible (te_q3 = new TextEditor ("q3"));
    te_q3->setMultiLine (false);
    te_q3->setReturnKeyStartsNewLine (false);
    te_q3->setReadOnly (false);
    te_q3->setScrollbarsShown (true);
    te_q3->setCaretVisible (true);
    te_q3->setPopupMenuEnabled (true);
    te_q3->setText (TRANS("3"));

    addAndMakeVisible (tb4 = new ToggleButton ("tb enable"));
    tb4->setButtonText (String());
    tb4->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f4 = new TextEditor ("freq1"));
    te_f4->setMultiLine (false);
    te_f4->setReturnKeyStartsNewLine (false);
    te_f4->setReadOnly (false);
    te_f4->setScrollbarsShown (true);
    te_f4->setCaretVisible (true);
    te_f4->setPopupMenuEnabled (true);
    te_f4->setText (TRANS("20"));

    addAndMakeVisible (te_g4 = new TextEditor ("gain 4"));
    te_g4->setMultiLine (false);
    te_g4->setReturnKeyStartsNewLine (false);
    te_g4->setReadOnly (false);
    te_g4->setScrollbarsShown (true);
    te_g4->setCaretVisible (true);
    te_g4->setPopupMenuEnabled (true);
    te_g4->setText (TRANS("20"));

    addAndMakeVisible (te_q4 = new TextEditor ("q4"));
    te_q4->setMultiLine (false);
    te_q4->setReturnKeyStartsNewLine (false);
    te_q4->setReadOnly (false);
    te_q4->setScrollbarsShown (true);
    te_q4->setCaretVisible (true);
    te_q4->setPopupMenuEnabled (true);
    te_q4->setText (TRANS("3"));

    addAndMakeVisible (tb5 = new ToggleButton ("tb enable"));
    tb5->setButtonText (String());
    tb5->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f5 = new TextEditor ("freq1"));
    te_f5->setMultiLine (false);
    te_f5->setReturnKeyStartsNewLine (false);
    te_f5->setReadOnly (false);
    te_f5->setScrollbarsShown (true);
    te_f5->setCaretVisible (true);
    te_f5->setPopupMenuEnabled (true);
    te_f5->setText (TRANS("20"));

    addAndMakeVisible (te_g5 = new TextEditor ("gain 5"));
    te_g5->setMultiLine (false);
    te_g5->setReturnKeyStartsNewLine (false);
    te_g5->setReadOnly (false);
    te_g5->setScrollbarsShown (true);
    te_g5->setCaretVisible (true);
    te_g5->setPopupMenuEnabled (true);
    te_g5->setText (TRANS("20"));

    addAndMakeVisible (te_q5 = new TextEditor ("q5"));
    te_q5->setMultiLine (false);
    te_q5->setReturnKeyStartsNewLine (false);
    te_q5->setReadOnly (false);
    te_q5->setScrollbarsShown (true);
    te_q5->setCaretVisible (true);
    te_q5->setPopupMenuEnabled (true);
    te_q5->setText (TRANS("3"));

    addAndMakeVisible (te_q1 = new TextEditor ("q1"));
    te_q1->setMultiLine (false);
    te_q1->setReturnKeyStartsNewLine (false);
    te_q1->setReadOnly (false);
    te_q1->setScrollbarsShown (true);
    te_q1->setCaretVisible (true);
    te_q1->setPopupMenuEnabled (true);
    te_q1->setText (TRANS("0.700"));

    addAndMakeVisible (te_f6 = new TextEditor ("freq1"));
    te_f6->setMultiLine (false);
    te_f6->setReturnKeyStartsNewLine (false);
    te_f6->setReadOnly (false);
    te_f6->setScrollbarsShown (true);
    te_f6->setCaretVisible (true);
    te_f6->setPopupMenuEnabled (true);
    te_f6->setText (TRANS("20"));

    addAndMakeVisible (te_g6 = new TextEditor ("gain 6"));
    te_g6->setMultiLine (false);
    te_g6->setReturnKeyStartsNewLine (false);
    te_g6->setReadOnly (false);
    te_g6->setScrollbarsShown (true);
    te_g6->setCaretVisible (true);
    te_g6->setPopupMenuEnabled (true);
    te_g6->setText (TRANS("20"));

    addAndMakeVisible (tb7 = new ToggleButton ("tb enable"));
    tb7->setButtonText (String());
    tb7->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f7 = new TextEditor ("freq1"));
    te_f7->setMultiLine (false);
    te_f7->setReturnKeyStartsNewLine (false);
    te_f7->setReadOnly (false);
    te_f7->setScrollbarsShown (true);
    te_f7->setCaretVisible (true);
    te_f7->setPopupMenuEnabled (true);
    te_f7->setText (TRANS("20"));

    addAndMakeVisible (te_g7 = new TextEditor ("gain 7"));
    te_g7->setMultiLine (false);
    te_g7->setReturnKeyStartsNewLine (false);
    te_g7->setReadOnly (false);
    te_g7->setScrollbarsShown (true);
    te_g7->setCaretVisible (true);
    te_g7->setPopupMenuEnabled (true);
    te_g7->setText (TRANS("20"));

    addAndMakeVisible (te_q7 = new TextEditor ("q7"));
    te_q7->setMultiLine (false);
    te_q7->setReturnKeyStartsNewLine (false);
    te_q7->setReadOnly (false);
    te_q7->setScrollbarsShown (true);
    te_q7->setCaretVisible (true);
    te_q7->setPopupMenuEnabled (true);
    te_q7->setText (TRANS("3"));

    addAndMakeVisible (tb8 = new ToggleButton ("tb enable"));
    tb8->setButtonText (String());
    tb8->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f8 = new TextEditor ("freq1"));
    te_f8->setMultiLine (false);
    te_f8->setReturnKeyStartsNewLine (false);
    te_f8->setReadOnly (false);
    te_f8->setScrollbarsShown (true);
    te_f8->setCaretVisible (true);
    te_f8->setPopupMenuEnabled (true);
    te_f8->setText (TRANS("20"));

    addAndMakeVisible (te_g8 = new TextEditor ("gain 8"));
    te_g8->setMultiLine (false);
    te_g8->setReturnKeyStartsNewLine (false);
    te_g8->setReadOnly (false);
    te_g8->setScrollbarsShown (true);
    te_g8->setCaretVisible (true);
    te_g8->setPopupMenuEnabled (true);
    te_g8->setText (TRANS("20"));

    addAndMakeVisible (te_q8 = new TextEditor ("q8"));
    te_q8->setMultiLine (false);
    te_q8->setReturnKeyStartsNewLine (false);
    te_q8->setReadOnly (false);
    te_q8->setScrollbarsShown (true);
    te_q8->setCaretVisible (true);
    te_q8->setPopupMenuEnabled (true);
    te_q8->setText (TRANS("3"));

    addAndMakeVisible (tb9 = new ToggleButton ("tb enable"));
    tb9->setButtonText (String());
    tb9->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f9 = new TextEditor ("freq1"));
    te_f9->setMultiLine (false);
    te_f9->setReturnKeyStartsNewLine (false);
    te_f9->setReadOnly (false);
    te_f9->setScrollbarsShown (true);
    te_f9->setCaretVisible (true);
    te_f9->setPopupMenuEnabled (true);
    te_f9->setText (TRANS("20"));

    addAndMakeVisible (te_g9 = new TextEditor ("gain 9"));
    te_g9->setMultiLine (false);
    te_g9->setReturnKeyStartsNewLine (false);
    te_g9->setReadOnly (false);
    te_g9->setScrollbarsShown (true);
    te_g9->setCaretVisible (true);
    te_g9->setPopupMenuEnabled (true);
    te_g9->setText (TRANS("20"));

    addAndMakeVisible (te_q9 = new TextEditor ("q9"));
    te_q9->setMultiLine (false);
    te_q9->setReturnKeyStartsNewLine (false);
    te_q9->setReadOnly (false);
    te_q9->setScrollbarsShown (true);
    te_q9->setCaretVisible (true);
    te_q9->setPopupMenuEnabled (true);
    te_q9->setText (TRANS("3"));

    addAndMakeVisible (tb10 = new ToggleButton ("tb enable"));
    tb10->setButtonText (String());
    tb10->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_f10 = new TextEditor ("freq1"));
    te_f10->setMultiLine (false);
    te_f10->setReturnKeyStartsNewLine (false);
    te_f10->setReadOnly (false);
    te_f10->setScrollbarsShown (true);
    te_f10->setCaretVisible (true);
    te_f10->setPopupMenuEnabled (true);
    te_f10->setText (TRANS("20"));

    addAndMakeVisible (te_g10 = new TextEditor ("gain 10"));
    te_g10->setMultiLine (false);
    te_g10->setReturnKeyStartsNewLine (false);
    te_g10->setReadOnly (false);
    te_g10->setScrollbarsShown (true);
    te_g10->setCaretVisible (true);
    te_g10->setPopupMenuEnabled (true);
    te_g10->setText (TRANS("20"));

    addAndMakeVisible (te_q10 = new TextEditor ("q10"));
    te_q10->setMultiLine (false);
    te_q10->setReturnKeyStartsNewLine (false);
    te_q10->setReadOnly (false);
    te_q10->setScrollbarsShown (true);
    te_q10->setCaretVisible (true);
    te_q10->setPopupMenuEnabled (true);
    te_q10->setText (TRANS("0.707"));

    addAndMakeVisible (tb6 = new ToggleButton ("tb enable"));
    tb6->setButtonText (String());
    tb6->setToggleState (true, dontSendNotification);

    addAndMakeVisible (te_q6 = new TextEditor ("q6"));
    te_q6->setMultiLine (false);
    te_q6->setReturnKeyStartsNewLine (false);
    te_q6->setReadOnly (false);
    te_q6->setScrollbarsShown (true);
    te_q6->setCaretVisible (true);
    te_q6->setPopupMenuEnabled (true);
    te_q6->setText (TRANS("3"));

    addAndMakeVisible (lb_200 = new Label ("new label",
                                           TRANS("200")));
    lb_200->setFont (Font (15.00f, Font::plain));
    lb_200->setJustificationType (Justification::centredLeft);
    lb_200->setEditable (false, false, false);
    lb_200->setColour (Label::textColourId, Colours::white);
    lb_200->setColour (TextEditor::textColourId, Colours::black);
    lb_200->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lb_2000 = new Label ("new label",
                                            TRANS("2000")));
    lb_2000->setFont (Font (15.00f, Font::plain));
    lb_2000->setJustificationType (Justification::centredLeft);
    lb_2000->setEditable (false, false, false);
    lb_2000->setColour (Label::textColourId, Colours::white);
    lb_2000->setColour (TextEditor::textColourId, Colours::black);
    lb_2000->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (lb_20K = new Label ("new label",
                                           TRANS("20K")));
    lb_20K->setFont (Font (15.00f, Font::plain));
    lb_20K->setJustificationType (Justification::centredLeft);
    lb_20K->setEditable (false, false, false);
    lb_20K->setColour (Label::textColourId, Colours::white);
    lb_20K->setColour (TextEditor::textColourId, Colours::black);
    lb_20K->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ib_1 = new ImageButton ("Graph Type"));
    ib_1->setButtonText (TRANS("new button"));
    ib_1->addListener (this);

    ib_1->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_ls_png, eq_ls_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_2 = new ImageButton ("Graph Type"));
    ib_2->setButtonText (TRANS("new button"));
    ib_2->addListener (this);

    ib_2->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_3 = new ImageButton ("Graph Type"));
    ib_3->setButtonText (TRANS("new button"));
    ib_3->addListener (this);

    ib_3->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_4 = new ImageButton ("Graph Type"));
    ib_4->setButtonText (TRANS("new button"));
    ib_4->addListener (this);

    ib_4->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_5 = new ImageButton ("Graph Type"));
    ib_5->setButtonText (TRANS("new button"));
    ib_5->addListener (this);

    ib_5->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_6 = new ImageButton ("Graph Type"));
    ib_6->setButtonText (TRANS("new button"));
    ib_6->addListener (this);

    ib_6->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_7 = new ImageButton ("Graph Type"));
    ib_7->setButtonText (TRANS("new button"));
    ib_7->addListener (this);

    ib_7->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_8 = new ImageButton ("Graph Type"));
    ib_8->setButtonText (TRANS("new button"));
    ib_8->addListener (this);

    ib_8->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_10 = new ImageButton ("new button"));
    ib_10->addListener (this);

    ib_10->setImages (false, true, true,
                      ImageCache::getFromMemory (eq_ls_png, eq_ls_pngSize), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000),
                      Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (ib_9 = new ImageButton ("Graph Type"));
    ib_9->setButtonText (TRANS("new button"));
    ib_9->addListener (this);

    ib_9->setImages (false, true, true,
                     ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000),
                     Image(), 1.000f, Colour (0x00000000));
    addAndMakeVisible (eqGraphComponent = new EqGraph());
    addAndMakeVisible (cb_filter1 = new ComboBox ("new combo box"));
    cb_filter1->setEditableText (false);
    cb_filter1->setJustificationType (Justification::centred);
    cb_filter1->setTextWhenNothingSelected (String());
    cb_filter1->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter1->addItem (TRANS("Peak"), 1);
    cb_filter1->addItem (TRANS("LPF"), 2);
    cb_filter1->addItem (TRANS("HPF"), 3);
    cb_filter1->addItem (TRANS("LS"), 4);
    cb_filter1->addItem (TRANS("HS"), 5);
    cb_filter1->addListener (this);

    addAndMakeVisible (cb_filter2 = new ComboBox ("new combo box"));
    cb_filter2->setEditableText (false);
    cb_filter2->setJustificationType (Justification::centred);
    cb_filter2->setTextWhenNothingSelected (String());
    cb_filter2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter2->addItem (TRANS("Peak"), 1);
    cb_filter2->addItem (TRANS("LPF"), 2);
    cb_filter2->addItem (TRANS("HPF"), 3);
    cb_filter2->addItem (TRANS("LS"), 4);
    cb_filter2->addItem (TRANS("HS"), 5);
    cb_filter2->addListener (this);

    addAndMakeVisible (cb_filter3 = new ComboBox ("new combo box"));
    cb_filter3->setEditableText (false);
    cb_filter3->setJustificationType (Justification::centred);
    cb_filter3->setTextWhenNothingSelected (String());
    cb_filter3->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter3->addItem (TRANS("Peak"), 1);
    cb_filter3->addItem (TRANS("LPF"), 2);
    cb_filter3->addItem (TRANS("HPF"), 3);
    cb_filter3->addItem (TRANS("LS"), 4);
    cb_filter3->addItem (TRANS("HS"), 5);
    cb_filter3->addListener (this);

    addAndMakeVisible (cb_filter4 = new ComboBox ("new combo box"));
    cb_filter4->setEditableText (false);
    cb_filter4->setJustificationType (Justification::centred);
    cb_filter4->setTextWhenNothingSelected (String());
    cb_filter4->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter4->addItem (TRANS("Peak"), 1);
    cb_filter4->addItem (TRANS("LPF"), 2);
    cb_filter4->addItem (TRANS("HPF"), 3);
    cb_filter4->addItem (TRANS("LS"), 4);
    cb_filter4->addItem (TRANS("HS"), 5);
    cb_filter4->addListener (this);

    addAndMakeVisible (cb_filter5 = new ComboBox ("new combo box"));
    cb_filter5->setEditableText (false);
    cb_filter5->setJustificationType (Justification::centred);
    cb_filter5->setTextWhenNothingSelected (String());
    cb_filter5->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter5->addItem (TRANS("Peak"), 1);
    cb_filter5->addItem (TRANS("LPF"), 2);
    cb_filter5->addItem (TRANS("HPF"), 3);
    cb_filter5->addItem (TRANS("LS"), 4);
    cb_filter5->addItem (TRANS("HS"), 5);
    cb_filter5->addListener (this);

    addAndMakeVisible (cb_filter6 = new ComboBox ("new combo box"));
    cb_filter6->setEditableText (false);
    cb_filter6->setJustificationType (Justification::centred);
    cb_filter6->setTextWhenNothingSelected (String());
    cb_filter6->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter6->addItem (TRANS("Peak"), 1);
    cb_filter6->addItem (TRANS("LPF"), 2);
    cb_filter6->addItem (TRANS("HPF"), 3);
    cb_filter6->addItem (TRANS("LS"), 4);
    cb_filter6->addItem (TRANS("HS"), 5);
    cb_filter6->addListener (this);

    addAndMakeVisible (cb_filter7 = new ComboBox ("new combo box"));
    cb_filter7->setEditableText (false);
    cb_filter7->setJustificationType (Justification::centred);
    cb_filter7->setTextWhenNothingSelected (String());
    cb_filter7->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter7->addItem (TRANS("Peak"), 1);
    cb_filter7->addItem (TRANS("LPF"), 2);
    cb_filter7->addItem (TRANS("HPF"), 3);
    cb_filter7->addItem (TRANS("LS"), 4);
    cb_filter7->addItem (TRANS("HS"), 5);
    cb_filter7->addListener (this);

    addAndMakeVisible (cb_filter8 = new ComboBox ("new combo box"));
    cb_filter8->setEditableText (false);
    cb_filter8->setJustificationType (Justification::centred);
    cb_filter8->setTextWhenNothingSelected (String());
    cb_filter8->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter8->addItem (TRANS("Peak"), 1);
    cb_filter8->addItem (TRANS("LPF"), 2);
    cb_filter8->addItem (TRANS("HPF"), 3);
    cb_filter8->addItem (TRANS("LS"), 4);
    cb_filter8->addItem (TRANS("HS"), 5);
    cb_filter8->addListener (this);

    addAndMakeVisible (cb_filter9 = new ComboBox ("new combo box"));
    cb_filter9->setEditableText (false);
    cb_filter9->setJustificationType (Justification::centred);
    cb_filter9->setTextWhenNothingSelected (String());
    cb_filter9->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter9->addItem (TRANS("Peak"), 1);
    cb_filter9->addItem (TRANS("LPF"), 2);
    cb_filter9->addItem (TRANS("HPF"), 3);
    cb_filter9->addItem (TRANS("LS"), 4);
    cb_filter9->addItem (TRANS("HS"), 5);
    cb_filter9->addListener (this);

    addAndMakeVisible (cb_filter10 = new ComboBox ("new combo box"));
    cb_filter10->setEditableText (false);
    cb_filter10->setJustificationType (Justification::centred);
    cb_filter10->setTextWhenNothingSelected (String());
    cb_filter10->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    cb_filter10->addItem (TRANS("Peak"), 1);
    cb_filter10->addItem (TRANS("LPF"), 2);
    cb_filter10->addItem (TRANS("HPF"), 3);
    cb_filter10->addItem (TRANS("LS"), 4);
    cb_filter10->addItem (TRANS("HS"), 5);
    cb_filter10->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (780, 650);


    //[Constructor] You can add your own custom stuff here..
    eqGraphComponent->addChangeListener(this);

    toggles = new ToggleButton*[10];
    toggles[0] = tb1;
    toggles[1] = tb2;
    toggles[2] = tb3;
    toggles[3] = tb4;
    toggles[4] = tb5;
    toggles[5] = tb6;
    toggles[6] = tb7;
    toggles[7] = tb8;
    toggles[8] = tb9;
    toggles[9] = tb10;
    int i = 0;
    for(i=0;i<10;i++){
        toggles[i]->addListener (this);
    }

    te_frequencies = new TextEditor*[10];
    te_frequencies[0] = te_f1;
    te_frequencies[1] = te_f2;
    te_frequencies[2] = te_f3;
    te_frequencies[3] = te_f4;
    te_frequencies[4] = te_f5;
    te_frequencies[5] = te_f6;
    te_frequencies[6] = te_f7;
    te_frequencies[7] = te_f8;
    te_frequencies[8] = te_f9;
    te_frequencies[9] = te_f10;

    te_gains = new TextEditor*[10];
    te_gains[0] = te_g1;
    te_gains[1] = te_g2;
    te_gains[2] = te_g3;
    te_gains[3] = te_g4;
    te_gains[4] = te_g5;
    te_gains[5] = te_g6;
    te_gains[6] = te_g7;
    te_gains[7] = te_g8;
    te_gains[8] = te_g9;
    te_gains[9] = te_g10;

    te_qs= new TextEditor*[10];
    te_qs[0] = te_q1;
    te_qs[1] = te_q2;
    te_qs[2] = te_q3;
    te_qs[3] = te_q4;
    te_qs[4] = te_q5;
    te_qs[5] = te_q6;
    te_qs[6] = te_q7;
    te_qs[7] = te_q8;
    te_qs[8] = te_q9;
    te_qs[9] = te_q10;

    // Add the listener to all the TE
    for(i=0; i<10; i++) {
        te_frequencies[i]->addListener(this);
        te_gains[i]->addListener(this);
        te_qs[i]->addListener(this);
    }


    ib_filters= new ImageButton*[10];
    ib_filters[0] = ib_1;
    ib_filters[1] = ib_2;
    ib_filters[2] = ib_3;
    ib_filters[3] = ib_4;
    ib_filters[4] = ib_5;
    ib_filters[5] = ib_6;
    ib_filters[6] = ib_7;
    ib_filters[7] = ib_8;
    ib_filters[8] = ib_9;
    ib_filters[9] = ib_10;

    cb_filters= new ComboBox*[10];
    cb_filters[0] = cb_filter1;
    cb_filters[1] = cb_filter2;
    cb_filters[2] = cb_filter3;
    cb_filters[3] = cb_filter4;
    cb_filters[4] = cb_filter5;
    cb_filters[5] = cb_filter6;
    cb_filters[6] = cb_filter7;
    cb_filters[7] = cb_filter8;
    cb_filters[8] = cb_filter9;
    cb_filters[9] = cb_filter10;
    // Hide the combobox, set Default
    for(i=0; i<10; i++) {
        // cb_filters[i]->setVisible(false);
         cb_filters[i]->setText("Peak");
    }
    cb_filters[0]->setText("HPF");
    cb_filters[9]->setText("LPF");

    // Calc the Delta between points on graph (x)
    int start = 20;
    // start from 20 Hz
    int stop = 20000;
    DELTA  = pow ((stop / start), (1.0/X_SIZE));

    evaluateGraph(true);

    //[/Constructor]
}

Equalizer::~Equalizer()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    tb1 = nullptr;
    label = nullptr;
    te_f1 = nullptr;
    label2 = nullptr;
    te_g1 = nullptr;
    label3 = nullptr;
    tb2 = nullptr;
    te_f2 = nullptr;
    te_g2 = nullptr;
    te_q2 = nullptr;
    tb3 = nullptr;
    te_f3 = nullptr;
    te_g3 = nullptr;
    te_q3 = nullptr;
    tb4 = nullptr;
    te_f4 = nullptr;
    te_g4 = nullptr;
    te_q4 = nullptr;
    tb5 = nullptr;
    te_f5 = nullptr;
    te_g5 = nullptr;
    te_q5 = nullptr;
    te_q1 = nullptr;
    te_f6 = nullptr;
    te_g6 = nullptr;
    tb7 = nullptr;
    te_f7 = nullptr;
    te_g7 = nullptr;
    te_q7 = nullptr;
    tb8 = nullptr;
    te_f8 = nullptr;
    te_g8 = nullptr;
    te_q8 = nullptr;
    tb9 = nullptr;
    te_f9 = nullptr;
    te_g9 = nullptr;
    te_q9 = nullptr;
    tb10 = nullptr;
    te_f10 = nullptr;
    te_g10 = nullptr;
    te_q10 = nullptr;
    tb6 = nullptr;
    te_q6 = nullptr;
    lb_200 = nullptr;
    lb_2000 = nullptr;
    lb_20K = nullptr;
    ib_1 = nullptr;
    ib_2 = nullptr;
    ib_3 = nullptr;
    ib_4 = nullptr;
    ib_5 = nullptr;
    ib_6 = nullptr;
    ib_7 = nullptr;
    ib_8 = nullptr;
    ib_10 = nullptr;
    ib_9 = nullptr;
    eqGraphComponent = nullptr;
    cb_filter1 = nullptr;
    cb_filter2 = nullptr;
    cb_filter3 = nullptr;
    cb_filter4 = nullptr;
    cb_filter5 = nullptr;
    cb_filter6 = nullptr;
    cb_filter7 = nullptr;
    cb_filter8 = nullptr;
    cb_filter9 = nullptr;
    cb_filter10 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Equalizer::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 0.0f, 770.0f, 424.0f, 10.000f);

    g.setColour (Colour (0xff314a5b));
    g.fillRoundedRectangle (0.0f, 444.0f, 770.0f, 172.0f, 10.000f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Equalizer::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    tb1->setBounds (64, 456, 23, 24);
    label->setBounds (16, 480, 23, 24);
    te_f1->setBounds (48, 480, 48, 24);
    label2->setBounds (16, 512, 23, 24);
    te_g1->setBounds (48, 512, 48, 24);
    label3->setBounds (16, 544, 23, 24);
    tb2->setBounds (136, 456, 23, 24);
    te_f2->setBounds (120, 480, 48, 24);
    te_g2->setBounds (120, 512, 48, 24);
    te_q2->setBounds (120, 544, 48, 24);
    tb3->setBounds (206, 455, 23, 24);
    te_f3->setBounds (192, 480, 48, 24);
    te_g3->setBounds (192, 512, 48, 24);
    te_q3->setBounds (192, 544, 48, 24);
    tb4->setBounds (275, 456, 23, 24);
    te_f4->setBounds (264, 480, 48, 24);
    te_g4->setBounds (264, 512, 48, 24);
    te_q4->setBounds (264, 544, 48, 24);
    tb5->setBounds (347, 456, 23, 24);
    te_f5->setBounds (336, 480, 48, 24);
    te_g5->setBounds (336, 512, 48, 24);
    te_q5->setBounds (336, 544, 48, 24);
    te_q1->setBounds (48, 544, 48, 24);
    te_f6->setBounds (408, 480, 48, 24);
    te_g6->setBounds (408, 512, 48, 24);
    tb7->setBounds (496, 456, 23, 24);
    te_f7->setBounds (480, 480, 48, 24);
    te_g7->setBounds (480, 512, 48, 24);
    te_q7->setBounds (480, 544, 48, 24);
    tb8->setBounds (568, 456, 23, 24);
    te_f8->setBounds (552, 480, 48, 24);
    te_g8->setBounds (552, 512, 48, 24);
    te_q8->setBounds (552, 544, 48, 24);
    tb9->setBounds (640, 456, 23, 24);
    te_f9->setBounds (624, 480, 48, 24);
    te_g9->setBounds (624, 512, 48, 24);
    te_q9->setBounds (624, 544, 48, 24);
    tb10->setBounds (712, 456, 23, 24);
    te_f10->setBounds (697, 480, 48, 24);
    te_g10->setBounds (697, 512, 48, 24);
    te_q10->setBounds (697, 544, 48, 24);
    tb6->setBounds (424, 456, 23, 24);
    te_q6->setBounds (408, 544, 48, 24);
    lb_200->setBounds (184, 404, 40, 24);
    lb_2000->setBounds (432, 404, 40, 24);
    lb_20K->setBounds (704, 404, 40, 24);
    ib_1->setBounds (48, 584, 48, 24);
    ib_2->setBounds (120, 584, 48, 24);
    ib_3->setBounds (192, 584, 48, 24);
    ib_4->setBounds (264, 584, 48, 24);
    ib_5->setBounds (336, 584, 48, 24);
    ib_6->setBounds (408, 584, 48, 24);
    ib_7->setBounds (480, 584, 48, 24);
    ib_8->setBounds (552, 584, 48, 24);
    ib_10->setBounds (696, 584, 48, 24);
    ib_9->setBounds (624, 584, 48, 24);
    eqGraphComponent->setBounds (16, 8, 740, 400);
    cb_filter1->setBounds (48, 584, 56, 24);
    cb_filter2->setBounds (120, 584, 56, 24);
    cb_filter3->setBounds (192, 584, 56, 24);
    cb_filter4->setBounds (264, 584, 56, 24);
    cb_filter5->setBounds (336, 584, 56, 24);
    cb_filter6->setBounds (408, 584, 56, 24);
    cb_filter7->setBounds (480, 584, 56, 24);
    cb_filter8->setBounds (552, 584, 56, 24);
    cb_filter9->setBounds (624, 584, 56, 24);
    cb_filter10->setBounds (696, 584, 56, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Equalizer::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

    int i = 0;
    for(i=0;i<10;i++){
         // Check for TBs
        if (buttonThatWasClicked == toggles[i])
        {
            eqGraphComponent->activeCircle(i, buttonThatWasClicked->getToggleState());
            break;
        }
        // Check Filter Selection
        if (buttonThatWasClicked == ib_filters[i])
        {
             cb_filters[i]->showPopup();
        }
    }

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == ib_1)
    {
        //[UserButtonCode_ib_1] -- add your button handler code here..
        //[/UserButtonCode_ib_1]
    }
    else if (buttonThatWasClicked == ib_2)
    {
        //[UserButtonCode_ib_2] -- add your button handler code here..
        //[/UserButtonCode_ib_2]
    }
    else if (buttonThatWasClicked == ib_3)
    {
        //[UserButtonCode_ib_3] -- add your button handler code here..
        //[/UserButtonCode_ib_3]
    }
    else if (buttonThatWasClicked == ib_4)
    {
        //[UserButtonCode_ib_4] -- add your button handler code here..
        //[/UserButtonCode_ib_4]
    }
    else if (buttonThatWasClicked == ib_5)
    {
        //[UserButtonCode_ib_5] -- add your button handler code here..
        //[/UserButtonCode_ib_5]
    }
    else if (buttonThatWasClicked == ib_6)
    {
        //[UserButtonCode_ib_6] -- add your button handler code here..
        //[/UserButtonCode_ib_6]
    }
    else if (buttonThatWasClicked == ib_7)
    {
        //[UserButtonCode_ib_7] -- add your button handler code here..
        //[/UserButtonCode_ib_7]
    }
    else if (buttonThatWasClicked == ib_8)
    {
        //[UserButtonCode_ib_8] -- add your button handler code here..
        //[/UserButtonCode_ib_8]
    }
    else if (buttonThatWasClicked == ib_10)
    {
        //[UserButtonCode_ib_10] -- add your button handler code here..
        //[/UserButtonCode_ib_10]
    }
    else if (buttonThatWasClicked == ib_9)
    {
        //[UserButtonCode_ib_9] -- add your button handler code here..
        //[/UserButtonCode_ib_9]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void Equalizer::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]

    int i = 0;
    for(i=0;i<10;i++){
         // Check for TBs
        if (comboBoxThatHasChanged == cb_filters[i])
        {
    //          cb_filter5->addItem (TRANS("Peak"), 1);
    // cb_filter5->addItem (TRANS("LPF"), 2);
    // cb_filter5->addItem (TRANS("HPF"), 3);
    // cb_filter5->addItem (TRANS("LS"), 4);
    // cb_filter5->addItem (TRANS("HS"), 5);
            if(comboBoxThatHasChanged->getText() == TRANS("Peak"))
            {
                // ib_filters[i]->setImages (false, true, true,
                //      ImageCache::getFromMemory (eq_peak_png, eq_peak_pngSize), 1.000f, Colour (0x00000000),
                //      Image(), 1.000f, Colour (0x00000000),
                //      Image(), 1.000f, Colour (0x00000000));
            }

            if(comboBoxThatHasChanged->getText() == TRANS("LPF"))
            {
                // ib_filters[i]->setImages (false, true, true,
                //      ImageCache::getFromMemory (eq_ls_png, eq_ls_png), 1.000f, Colour (0x00000000),
                //      Image(), 1.000f, Colour (0x00000000),
                //      Image(), 1.000f, Colour (0x00000000));
            }
        }
    }

    evaluateGraph(true);

    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == cb_filter1)
    {
        //[UserComboBoxCode_cb_filter1] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter1]
    }
    else if (comboBoxThatHasChanged == cb_filter2)
    {
        //[UserComboBoxCode_cb_filter2] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter2]
    }
    else if (comboBoxThatHasChanged == cb_filter3)
    {
        //[UserComboBoxCode_cb_filter3] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter3]
    }
    else if (comboBoxThatHasChanged == cb_filter4)
    {
        //[UserComboBoxCode_cb_filter4] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter4]
    }
    else if (comboBoxThatHasChanged == cb_filter5)
    {
        //[UserComboBoxCode_cb_filter5] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter5]
    }
    else if (comboBoxThatHasChanged == cb_filter6)
    {
        //[UserComboBoxCode_cb_filter6] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter6]
    }
    else if (comboBoxThatHasChanged == cb_filter7)
    {
        //[UserComboBoxCode_cb_filter7] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter7]
    }
    else if (comboBoxThatHasChanged == cb_filter8)
    {
        //[UserComboBoxCode_cb_filter8] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter8]
    }
    else if (comboBoxThatHasChanged == cb_filter9)
    {
        //[UserComboBoxCode_cb_filter9] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter9]
    }
    else if (comboBoxThatHasChanged == cb_filter10)
    {
        //[UserComboBoxCode_cb_filter10] -- add your combo box handling code here..
        //[/UserComboBoxCode_cb_filter10]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void Equalizer::textEditorTextChanged(TextEditor &source){
     int i=0;
     for(i=0; i<10; i++){
         // Check for TBs
        if (&source == te_frequencies[i])
        {
            float freq = te_frequencies[i]->getText().getFloatValue();
            eqGraphComponent->setFreq(i, freq, DELTA);
        }
        if (&source == te_gains[i])
        {
            float gain = te_gains[i]->getText().getFloatValue();
            eqGraphComponent->setGain(i, gain, DELTA);
        }
     }

    evaluateGraph(false);
}

void Equalizer::changeListenerCallback(ChangeBroadcaster* source)
{
    if(source == eqGraphComponent)
    {
        evaluateGraph(true);
    }
}

void Equalizer::evaluateGraph(bool refreshEditors){
    int index = eqGraphComponent->getSelectedItem();
    float freq = eqGraphComponent->getFreq(index, DELTA);
    float gain = eqGraphComponent->getGain(index);
    float q = te_qs[index]->getText().getFloatValue();

    Logger::outputDebugString ("ChangeBroadcaster :" + String(index) + " : " + String(freq) + " : " +  String(gain));

    if(refreshEditors)
    {
        te_frequencies[index]->setText(String(freq));
        te_gains[index]->setText(String(gain));
    }

    if(index == 0)
    {
        // Select filter
        BiQuads bq;
        if(cb_filters[index]->getText() == "Peak")
        {
            bq = PeakFilter(freq, q, gain);
            calc_biquads_graph(Magdb, bq, 11);
        }
        else
        {
            bq = LowPassFilter(freq, q);
            calc_biquads_graph(Magdb, bq, 11);
        }

        
    }

    eqGraphComponent->SetMagDb(Magdb, X_SIZE);
}


Equalizer::BiQuads Equalizer::PeakFilter(float f, float q, float g)
{
    BiQuads biQuads;
    float k, v, kk, kq, vk, vq, norm;

    v = pow(10, abs(g)/20);
    k = tan(f / float(SR) * M_PI);
    vk = v/k;
    kk = k*k;
    vq = v/q;
    kq = k/q;

    if (g >= 0) //positive gain
    {
        norm = 1 / (1 + kq + kk);
        biQuads.a0 = (1 + vq * k + kk) * norm;
        biQuads.a1 = 2 * (kk - 1) * norm;
        biQuads.a2 = (1 - vq * k + kk) * norm;
        biQuads.b1 = biQuads.a1;
        biQuads.b2 = (1 - kq + kk) * norm;
    }
    else
    {
        norm = 1 / (1 + vq * k + kk);
        biQuads.a0 = (1 + kq  + kk) * norm;
        biQuads.a1 = 2 * (kk - 1) * norm;
        biQuads.a2 = (1 - kq + kk) * norm;
        biQuads.b1 = biQuads.a1;
        biQuads.b2 = (1 - vq * k + kk) * norm;
    }

    return biQuads;
}

Equalizer::BiQuads Equalizer::LowPassFilter(float f, float q)
{
    BiQuads biQuads;
    float k, kk, kq, norm;

    k = tan(f / float(SR) * M_PI);
    kk = k*k;
    kq = k/q;
    norm = 1/(1+kq+kk);
    biQuads.a0 = kk * norm;
    biQuads.a1 = 2 * biQuads.a0;
    biQuads.a2 = biQuads.a0;
    biQuads.b1 = 2 * (kk - 1) * norm;
    biQuads.b2 = (1 - kq + kk) * norm;

    return biQuads;
}

void Equalizer::calc_biquads_graph(float *mag, Equalizer::BiQuads biQuads, float factor)
{
    float f = 20.0f;
    int i=0;
    for (i = 0 ; i < X_SIZE; i ++)
    {
        f = f * DELTA;
        mag[i] = factor * filterEvaluate (f, SR, biQuads);
    }
}

float Equalizer::filterEvaluate(float freq, float sampleRate, Equalizer::BiQuads biQuads)
{

  float w = 2 * M_PI * freq / sampleRate;

  float cos1 = cos(-1 * w);
  float cos2 = cos(-2 * w);

  float sin1 = sin(-1 * w);
  float sin2 = sin(-2 * w);

  float realZeros = biQuads.a0 + biQuads.a1 * cos1 + biQuads.a2 * cos2;
  float imagZeros = biQuads.a1 * sin1 + biQuads.a2 * sin2;

  float realPoles = 1 + biQuads.b1 * cos1 + biQuads.b2 * cos2;
  float imagPoles = biQuads.b1 * sin1 + biQuads.b2 * sin2;

  float divider = realPoles * realPoles + imagPoles * imagPoles;

  float realHw = (realZeros * realPoles + imagZeros * imagPoles) / divider;
  float imagHw = (imagZeros * realPoles - realZeros * imagPoles) / divider;

  float magnitude = sqrt(realHw * realHw + imagHw * imagHw);

  //return magnitude;     //gain in Au
  return 20 * log10(magnitude);  // find log10 in C++ libraries .gain in dB
}


// void Equalizer::CoefsEval(float *coefs, int numOfCoeffs,float w, float *resReal, float *resImg)
// {
//     *resReal = 0;
//     *resImg = 0;
//     int i;
//     for (i = 0; i < numOfCoeffs; i++)
//     {
//         *resReal += coefs[i] * cos(((float)(-i))* w);
//         *resImg += coefs[i] * sin(((float)(-i))* w);
//     }
// }

// void Equalizer::FilterEval(Equalizer::BiQuads biQuads, float *magdb, int numPoints)
// {
//     float resZerosReal;
//     float resZerosImg;
//     float resPolesReal;
//     float resPolesImg;

//     float mag;
//     float w;

//     float zeros[3] = {biQuads.a0, biQuads.a1, biQuads.a2};
//     float poles[2] = {biQuads.b1, biQuads.b2};

//     for(int jdx = 0; jdx < numPoints; jdx++)
//     {
//         w = jdx * M_PI / (numPoints-1);
//         CoefsEval(zeros, 3, w, &resZerosReal, &resZerosImg );
//         CoefsEval(poles, 2, w, &resPolesReal, &resPolesImg );

//         mag = (pow(resZerosReal,2) + pow(resZerosImg,2))/(pow(resPolesReal,2) + pow(resPolesImg,2));
//         mag = sqrt(mag);
//         mag += 0.0000000001f; // limit to -200 dB for log
//         magdb[jdx] = 20 * log10(mag);
//     }
// }

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Equalizer" componentName=""
                 parentClasses="public Component, public ChangeListener, public TextEditorListener"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="780"
                 initialHeight="650">
  <BACKGROUND backgroundColour="ff000000">
    <ROUNDRECT pos="0 0 770 424" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
    <ROUNDRECT pos="0 444 770 172" cornerSize="10" fill="solid: ff314a5b" hasStroke="0"/>
  </BACKGROUND>
  <TOGGLEBUTTON name="tb enable" id="abd6b399b019a3cb" memberName="tb1" virtualName=""
                explicitFocusOrder="0" pos="64 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <LABEL name="new label" id="9c213d3c60efb37e" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="16 480 23 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="F" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="freq1" id="9ef6cf3bdcb21da" memberName="te_f1" virtualName=""
              explicitFocusOrder="0" pos="48 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <LABEL name="new label" id="8a2335922e03341c" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="16 512 23 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="G" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TEXTEDITOR name="gain 1" id="ede80515ec296f29" memberName="te_g1" virtualName=""
              explicitFocusOrder="0" pos="48 512 48 24" initialText="0" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <LABEL name="new label" id="e4767d1e09fd9935" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="16 544 23 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Q" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="1" italic="0" justification="33"/>
  <TOGGLEBUTTON name="tb enable" id="dfabde4ca531665a" memberName="tb2" virtualName=""
                explicitFocusOrder="0" pos="136 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="53b9ebc81951ae3b" memberName="te_f2" virtualName=""
              explicitFocusOrder="0" pos="120 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 1" id="5b8d0849f7f76b66" memberName="te_g2" virtualName=""
              explicitFocusOrder="0" pos="120 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q2" id="70626575b2e07ecc" memberName="te_q2" virtualName=""
              explicitFocusOrder="0" pos="120 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="282d4ad39a4a2d22" memberName="tb3" virtualName=""
                explicitFocusOrder="0" pos="206 455 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="a64d24e0eff51490" memberName="te_f3" virtualName=""
              explicitFocusOrder="0" pos="192 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 3" id="67e8acb32923d831" memberName="te_g3" virtualName=""
              explicitFocusOrder="0" pos="192 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q3" id="78adca4ca2136211" memberName="te_q3" virtualName=""
              explicitFocusOrder="0" pos="192 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="5ece882c55552e10" memberName="tb4" virtualName=""
                explicitFocusOrder="0" pos="275 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="c3f1f3f885822910" memberName="te_f4" virtualName=""
              explicitFocusOrder="0" pos="264 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 4" id="b10e5f6da6e473cd" memberName="te_g4" virtualName=""
              explicitFocusOrder="0" pos="264 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q4" id="dc587125177977e5" memberName="te_q4" virtualName=""
              explicitFocusOrder="0" pos="264 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="10c812ebd6d59db" memberName="tb5" virtualName=""
                explicitFocusOrder="0" pos="347 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="f4f38562e6dd495e" memberName="te_f5" virtualName=""
              explicitFocusOrder="0" pos="336 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 5" id="a174e551f6b0942f" memberName="te_g5" virtualName=""
              explicitFocusOrder="0" pos="336 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q5" id="d4540287c659182a" memberName="te_q5" virtualName=""
              explicitFocusOrder="0" pos="336 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q1" id="94768d07f878c2c0" memberName="te_q1" virtualName=""
              explicitFocusOrder="0" pos="48 544 48 24" initialText="0.700"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTEDITOR name="freq1" id="39bf88f781f7e9" memberName="te_f6" virtualName=""
              explicitFocusOrder="0" pos="408 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 6" id="4bbbae4e5ae100bc" memberName="te_g6" virtualName=""
              explicitFocusOrder="0" pos="408 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="349edfe70ffd2b73" memberName="tb7" virtualName=""
                explicitFocusOrder="0" pos="496 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="667330e29f287217" memberName="te_f7" virtualName=""
              explicitFocusOrder="0" pos="480 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 7" id="c9e0089ce4ec5462" memberName="te_g7" virtualName=""
              explicitFocusOrder="0" pos="480 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q7" id="1ecf182af7493f18" memberName="te_q7" virtualName=""
              explicitFocusOrder="0" pos="480 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="77d40afad97a258a" memberName="tb8" virtualName=""
                explicitFocusOrder="0" pos="568 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="e1fdefd03de7ea92" memberName="te_f8" virtualName=""
              explicitFocusOrder="0" pos="552 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 8" id="c30f4c5cd7be2eb0" memberName="te_g8" virtualName=""
              explicitFocusOrder="0" pos="552 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q8" id="638c52a668204bba" memberName="te_q8" virtualName=""
              explicitFocusOrder="0" pos="552 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="51349ccdf04611e1" memberName="tb9" virtualName=""
                explicitFocusOrder="0" pos="640 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="38bf68d8288733dc" memberName="te_f9" virtualName=""
              explicitFocusOrder="0" pos="624 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 9" id="a85da9c12364aad6" memberName="te_g9" virtualName=""
              explicitFocusOrder="0" pos="624 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q9" id="a70473d76451766c" memberName="te_q9" virtualName=""
              explicitFocusOrder="0" pos="624 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="d20ec81d6b5dcd8c" memberName="tb10" virtualName=""
                explicitFocusOrder="0" pos="712 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="freq1" id="b1c12d2b720e7e14" memberName="te_f10" virtualName=""
              explicitFocusOrder="0" pos="697 480 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="gain 10" id="ece48b3f66a2ecdc" memberName="te_g10" virtualName=""
              explicitFocusOrder="0" pos="697 512 48 24" initialText="20" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTEDITOR name="q10" id="cb0f1b9fcc38944e" memberName="te_q10" virtualName=""
              explicitFocusOrder="0" pos="697 544 48 24" initialText="0.707"
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TOGGLEBUTTON name="tb enable" id="662a5302c262143f" memberName="tb6" virtualName=""
                explicitFocusOrder="0" pos="424 456 23 24" buttonText="" connectedEdges="0"
                needsCallback="0" radioGroupId="0" state="1"/>
  <TEXTEDITOR name="q6" id="544ab4727afd9bd1" memberName="te_q6" virtualName=""
              explicitFocusOrder="0" pos="408 544 48 24" initialText="3" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <LABEL name="new label" id="3f5d3a7b11195999" memberName="lb_200" virtualName=""
         explicitFocusOrder="0" pos="184 404 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="200" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c3c7ec2825b7f5a0" memberName="lb_2000" virtualName=""
         explicitFocusOrder="0" pos="432 404 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="2000" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="32dce46979c808e3" memberName="lb_20K" virtualName=""
         explicitFocusOrder="0" pos="704 404 40 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="20K" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="Graph Type" id="48380475ea313b08" memberName="ib_1" virtualName=""
               explicitFocusOrder="0" pos="48 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_ls_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="6abee26448cc0ea1" memberName="ib_2" virtualName=""
               explicitFocusOrder="0" pos="120 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="e96dfb56c4591eff" memberName="ib_3" virtualName=""
               explicitFocusOrder="0" pos="192 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="52e6df220a3c5f04" memberName="ib_4" virtualName=""
               explicitFocusOrder="0" pos="264 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="22e04453fe0237a" memberName="ib_5" virtualName=""
               explicitFocusOrder="0" pos="336 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="7be8e6b181831ee0" memberName="ib_6" virtualName=""
               explicitFocusOrder="0" pos="408 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="5fe0ff184bd2c159" memberName="ib_7" virtualName=""
               explicitFocusOrder="0" pos="480 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="28286a69b2b723e6" memberName="ib_8" virtualName=""
               explicitFocusOrder="0" pos="552 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="new button" id="9b63059a4a15f2d7" memberName="ib_10" virtualName=""
               explicitFocusOrder="0" pos="696 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_ls_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <IMAGEBUTTON name="Graph Type" id="669f01a827b50b7e" memberName="ib_9" virtualName=""
               explicitFocusOrder="0" pos="624 584 48 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="eq_peak_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
  <JUCERCOMP name="" id="d19dcfa2fc5dc2ea" memberName="eqGraphComponent" virtualName=""
             explicitFocusOrder="0" pos="16 8 740 400" sourceFile="EqGraph.cpp"
             constructorParams=""/>
  <COMBOBOX name="new combo box" id="1af39ed4dfeee051" memberName="cb_filter1"
            virtualName="" explicitFocusOrder="0" pos="48 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="8b1814bbf7b4643c" memberName="cb_filter2"
            virtualName="" explicitFocusOrder="0" pos="120 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="d1cd3530d6fcf0b" memberName="cb_filter3"
            virtualName="" explicitFocusOrder="0" pos="192 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="6aedf276c682d952" memberName="cb_filter4"
            virtualName="" explicitFocusOrder="0" pos="264 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="889b6b26af5926fe" memberName="cb_filter5"
            virtualName="" explicitFocusOrder="0" pos="336 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="6caea50a6fc4894e" memberName="cb_filter6"
            virtualName="" explicitFocusOrder="0" pos="408 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="41ed79185562dd71" memberName="cb_filter7"
            virtualName="" explicitFocusOrder="0" pos="480 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="f63e2b90d230b16c" memberName="cb_filter8"
            virtualName="" explicitFocusOrder="0" pos="552 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="c37c912ba2a6d341" memberName="cb_filter9"
            virtualName="" explicitFocusOrder="0" pos="624 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="ef5fd394a3ff2e4d" memberName="cb_filter10"
            virtualName="" explicitFocusOrder="0" pos="696 584 56 24" editable="0"
            layout="36" items="Peak&#10;LPF&#10;HPF&#10;LS&#10;HS" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: dynamics_graph_png, 1120, "../../../David/AE/eq_graph.png"
static const unsigned char resource_Equalizer_dynamics_graph_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,244,0,0,0,74,8,6,0,0,0,77,97,166,59,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,
0,0,0,9,112,72,89,115,0,0,9,153,0,0,9,153,1,234,198,30,32,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,3,221,73,
68,65,84,120,156,237,214,61,78,27,91,24,128,225,193,198,51,182,99,112,228,40,140,168,88,64,36,164,84,84,89,2,139,160,1,41,116,72,89,69,42,138,212,105,17,11,64,130,146,138,29,208,176,128,59,20,142,137,
18,131,60,64,110,115,233,174,99,51,152,191,79,207,83,51,223,57,51,58,62,47,115,171,171,171,255,20,69,209,78,158,72,187,221,158,219,216,216,104,124,251,246,109,52,171,153,141,70,35,249,252,249,115,186,
187,187,91,105,230,167,79,159,234,101,89,38,39,39,39,55,247,121,238,203,151,47,233,215,175,95,39,174,185,181,181,149,238,237,237,149,23,23,23,127,30,50,111,109,109,173,158,101,89,114,124,124,252,191,251,
252,240,225,67,109,101,101,165,118,112,112,112,61,121,247,47,215,180,223,107,22,86,86,86,106,107,107,107,245,253,253,253,114,86,51,183,183,183,211,239,223,191,151,195,225,176,210,254,167,61,87,85,159,
91,93,93,173,45,47,47,215,14,15,15,255,122,78,38,205,91,95,95,159,63,59,59,187,61,61,61,189,125,200,126,94,170,231,216,255,99,172,89,117,230,199,143,31,235,239,223,191,159,59,58,58,186,247,125,178,179,
179,147,238,238,238,142,110,110,38,95,169,179,120,231,113,51,94,251,25,188,179,185,185,153,238,239,239,151,131,193,96,236,157,146,231,249,112,190,40,138,118,81,20,11,79,181,177,55,111,222,36,151,151,151,
73,81,20,217,172,102,102,89,246,160,153,23,23,23,201,104,52,74,138,162,184,215,115,87,87,87,83,173,57,28,14,147,243,243,243,108,48,24,60,104,222,96,48,72,154,205,230,216,125,46,47,47,39,189,94,239,222,
239,241,210,76,251,189,102,161,211,233,36,191,126,253,74,138,162,104,206,106,230,229,229,101,114,126,126,158,253,254,253,187,210,243,211,158,171,170,207,245,251,253,164,211,233,76,60,39,147,230,253,252,
249,51,233,247,251,99,231,84,125,143,151,226,57,246,255,24,107,86,157,217,239,247,147,52,77,43,221,39,119,191,129,235,235,201,255,11,204,226,157,199,205,120,237,103,240,206,221,157,248,227,199,143,191,
254,93,237,137,246,3,0,60,34,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,
1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,
29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,
208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,0,4,29,0,2,16,116,0,8,64,208,1,32,0,65,7,128,
0,4,29,0,2,152,207,243,124,248,148,11,182,219,237,185,86,171,213,200,243,124,52,171,153,141,70,35,105,181,90,105,213,153,221,110,183,94,150,101,146,231,249,205,125,158,107,54,155,83,173,217,110,183,211,
165,165,165,50,203,178,63,15,153,247,246,237,219,122,150,101,99,247,217,235,245,106,11,11,11,181,60,207,175,39,239,254,229,154,246,123,205,194,187,119,239,106,157,78,167,158,231,121,57,171,153,173,86,
43,93,90,90,42,135,195,97,165,253,79,123,174,170,62,55,237,57,153,52,111,113,113,113,190,215,235,221,230,121,126,251,144,253,188,84,207,177,255,199,88,179,234,204,94,175,87,239,118,187,115,85,238,147,
255,126,3,163,155,155,201,87,234,44,222,121,220,140,215,126,6,239,220,221,137,105,154,142,189,83,242,60,31,254,11,15,24,104,50,86,244,142,176,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Equalizer::dynamics_graph_png = (const char*) resource_Equalizer_dynamics_graph_png;
const int Equalizer::dynamics_graph_pngSize = 1120;

// JUCER_RESOURCE: eq_ls_png, 1987, "../../../David/AE/eq_ls.png"
static const unsigned char resource_Equalizer_eq_ls_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,206,0,0,0,97,8,6,0,0,0,158,85,158,255,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,0,0,0,
9,112,72,89,115,0,0,46,181,0,0,46,181,1,148,129,231,180,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,7,64,73,68,
65,84,120,156,237,221,73,104,19,255,27,6,240,103,210,36,147,144,86,90,154,186,128,1,141,183,184,83,16,60,185,128,40,8,137,122,145,42,42,94,60,136,169,77,90,55,180,162,141,90,15,109,180,86,84,68,61,8,158,
188,136,7,151,30,68,20,20,36,86,168,94,226,193,181,234,73,106,108,26,77,154,229,119,248,83,248,67,51,211,118,156,37,51,121,62,39,201,247,205,248,10,62,36,62,25,83,33,145,72,148,64,68,51,98,51,122,1,34,
51,98,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,96,112,136,20,176,171,121,177,
239,223,191,35,24,12,150,61,171,171,171,131,32,8,147,30,23,4,1,181,181,181,101,159,227,112,56,224,118,187,203,158,137,162,8,167,211,89,246,204,227,241,160,166,166,102,70,123,216,108,54,120,60,30,197,123,
216,237,118,108,222,188,89,242,247,37,107,81,53,56,197,98,81,242,108,116,116,84,242,44,149,74,169,185,134,97,134,134,134,112,226,196,9,163,215,32,29,168,250,86,77,46,56,213,224,222,189,123,184,115,231,
142,209,107,144,14,84,13,78,169,196,255,76,218,215,215,135,167,79,159,26,189,6,105,76,213,224,20,10,5,53,47,103,74,197,98,17,199,143,31,199,187,119,239,140,94,133,52,196,87,28,13,100,179,89,180,183,183,
227,199,143,31,70,175,66,26,81,181,28,112,185,92,88,181,106,213,164,199,75,165,18,210,233,116,217,231,228,243,121,100,50,153,178,103,185,92,14,217,108,182,236,89,38,147,65,62,159,87,190,172,198,126,254,
252,137,72,36,130,155,55,111,74,182,117,100,94,130,21,191,229,38,157,78,75,22,21,82,237,158,146,0,167,82,41,196,98,49,201,231,1,192,234,213,171,113,241,226,69,214,212,22,99,201,224,232,233,197,139,23,
104,107,107,147,109,20,67,161,16,58,59,59,117,220,138,180,86,179,111,223,190,83,70,47,97,102,62,159,15,181,181,181,120,249,242,165,228,76,50,153,132,219,237,198,242,229,203,117,220,140,180,196,91,110,
84,208,210,210,130,237,219,183,203,206,244,247,247,227,201,147,39,58,109,68,90,99,112,84,210,222,222,142,53,107,214,72,158,23,139,69,116,118,118,226,237,219,183,58,110,69,90,97,112,84,98,179,217,112,246,
236,89,4,2,1,201,153,108,54,139,104,52,138,225,225,97,29,55,35,45,48,56,42,114,185,92,232,237,237,197,156,57,115,36,103,70,70,70,16,141,70,101,239,221,163,202,199,224,168,172,169,169,9,151,46,93,146,188,
227,27,0,62,124,248,128,142,142,14,140,143,143,235,184,25,169,137,193,209,192,162,69,139,112,238,220,57,217,207,110,94,191,126,141,243,231,207,235,184,21,169,137,117,180,70,124,62,31,26,27,27,241,252,
249,115,201,153,100,50,9,151,203,197,154,218,132,248,138,163,161,109,219,182,161,165,165,69,118,166,191,191,31,143,31,63,214,105,35,82,11,131,163,177,72,36,34,91,83,151,74,37,116,117,117,97,104,104,72,
199,173,232,95,49,56,26,155,168,169,23,47,94,44,57,195,154,218,124,24,28,29,76,212,212,115,231,206,149,156,249,245,235,23,34,145,8,107,106,147,96,112,116,226,245,122,167,172,169,63,126,252,200,154,218,
36,24,28,29,249,253,254,105,213,212,221,221,221,58,110,69,74,176,142,214,153,207,231,131,215,235,157,178,166,22,69,17,43,86,172,208,113,51,154,9,190,226,24,96,235,214,173,216,177,99,135,236,204,229,203,
151,241,232,209,35,157,54,162,153,98,112,12,210,214,214,134,181,107,215,74,158,179,166,174,108,12,142,65,38,106,234,37,75,150,72,206,228,114,57,68,163,81,124,253,250,85,199,205,104,58,24,28,3,137,162,
136,158,158,158,41,107,234,104,52,138,223,191,127,235,184,25,77,133,193,49,24,107,106,115,98,112,42,128,223,239,71,119,119,183,108,77,61,56,56,200,154,186,130,176,142,174,16,62,159,15,77,77,77,120,246,
236,153,228,76,50,153,132,195,225,192,202,149,43,117,220,140,202,225,43,78,5,217,178,101,11,118,238,220,41,59,115,229,202,21,214,212,21,128,193,169,48,7,15,30,196,186,117,235,36,207,89,83,87,6,6,167,194,
216,108,54,156,57,115,134,53,117,133,99,112,42,144,40,138,232,237,237,197,188,121,243,36,103,38,238,166,102,77,109,12,6,167,66,53,54,54,162,175,175,15,117,117,117,146,51,159,62,125,66,71,71,7,114,185,
156,142,155,17,192,224,84,180,233,220,77,205,154,218,24,172,163,43,156,207,231,195,236,217,179,101,107,234,247,239,223,195,110,183,179,166,214,17,95,113,76,32,20,10,97,215,174,93,178,51,87,175,94,197,
195,135,15,117,218,136,24,28,147,8,135,195,88,191,126,189,228,121,169,84,66,44,22,99,77,173,19,6,199,36,108,54,27,98,177,24,150,46,93,42,57,147,203,229,16,137,68,240,229,203,23,29,55,171,78,12,142,137,
136,162,136,120,60,142,249,243,231,75,206,164,82,41,214,212,58,96,112,76,166,161,161,1,241,120,92,182,166,254,252,249,51,107,106,141,49,56,38,228,247,251,209,211,211,3,135,195,33,57,51,56,56,136,83,167,
78,241,39,129,107,132,193,49,169,230,230,102,28,61,122,84,118,102,96,96,0,183,110,221,210,105,163,234,194,224,152,88,40,20,194,238,221,187,101,103,174,93,187,134,7,15,30,232,180,81,245,96,112,76,46,28,
14,99,227,198,141,146,231,19,53,117,34,145,208,113,43,235,99,112,76,78,16,4,156,60,121,18,203,150,45,147,156,25,31,31,199,145,35,71,88,83,171,136,193,177,128,233,214,212,173,173,173,24,25,25,209,113,51,
235,98,112,44,162,190,190,30,23,46,92,144,173,169,135,135,135,113,248,240,97,214,212,42,96,112,44,100,225,194,133,83,214,212,111,222,188,97,77,173,2,6,199,98,154,155,155,113,236,216,49,217,153,129,129,
1,220,184,113,67,167,141,172,137,193,177,160,96,48,136,61,123,246,200,206,92,191,126,157,53,245,63,96,112,44,234,192,129,3,216,180,105,147,228,57,107,234,127,195,224,88,20,107,106,109,49,56,22,230,116,
58,17,143,199,225,243,249,36,103,82,169,20,194,225,48,107,234,25,98,112,44,174,190,190,30,241,120,28,179,102,205,146,156,249,246,237,27,14,29,58,196,154,122,6,132,68,34,193,94,178,10,188,122,245,10,173,
173,173,200,231,243,146,51,94,175,23,162,40,2,248,223,135,170,19,191,254,127,130,32,72,126,65,188,199,227,41,251,197,34,78,167,19,46,151,171,236,115,164,62,119,114,187,221,101,107,117,187,221,14,183,219,
45,121,45,65,16,38,61,238,114,185,224,116,58,17,8,4,100,191,220,126,38,24,156,42,114,255,254,125,116,117,117,25,189,134,97,110,223,190,141,64,32,160,202,181,248,86,173,138,4,131,65,236,221,187,215,232,
53,12,35,247,53,91,51,197,224,84,153,253,251,247,99,195,134,13,70,175,97,136,114,111,227,148,98,112,170,140,32,8,56,125,250,180,108,77,109,85,124,197,161,127,50,157,154,218,138,108,54,245,254,186,219,
85,187,18,153,202,196,221,212,82,53,244,159,63,127,202,54,112,249,124,30,153,76,70,143,21,85,199,224,144,42,22,44,88,128,187,119,239,170,118,189,209,209,209,178,119,93,255,253,251,183,236,207,47,45,20,
10,24,27,27,43,123,173,177,177,49,20,139,197,73,143,103,179,89,100,179,217,73,143,23,139,69,164,211,233,178,215,202,100,50,40,20,10,104,104,104,152,234,143,48,109,12,14,169,70,234,51,25,185,15,95,205,
138,255,198,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,128,193,33,82,
128,193,33,82,128,193,33,82,224,63,56,6,98,204,75,130,107,142,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Equalizer::eq_ls_png = (const char*) resource_Equalizer_eq_ls_png;
const int Equalizer::eq_ls_pngSize = 1987;

// JUCER_RESOURCE: eq_peak_png, 1982, "../../../David/AE/eq_peak.png"
static const unsigned char resource_Equalizer_eq_peak_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,206,0,0,0,97,8,6,0,0,0,158,85,158,255,0,0,0,4,115,66,73,84,8,8,8,8,124,8,100,136,0,0,
0,9,112,72,89,115,0,0,46,181,0,0,46,181,1,148,129,231,180,0,0,0,25,116,69,88,116,83,111,102,116,119,97,114,101,0,119,119,119,46,105,110,107,115,99,97,112,101,46,111,114,103,155,238,60,26,0,0,7,59,73,68,
65,84,120,156,237,221,91,79,83,77,20,6,224,181,219,6,20,139,7,140,8,106,140,16,19,67,61,4,137,196,128,4,196,86,99,203,37,23,222,249,3,140,87,38,250,83,188,245,87,148,38,136,80,5,27,146,2,162,32,26,76,
60,6,75,36,33,30,10,158,118,119,191,11,252,212,194,204,70,134,205,236,233,204,251,220,149,85,155,117,209,215,174,78,215,110,173,177,177,177,34,1,192,134,4,252,110,0,160,28,33,56,0,2,16,28,0,1,8,14,128,
0,4,7,64,0,130,3,32,0,193,1,16,128,224,0,8,64,112,0,4,32,56,0,2,16,28,0,1,8,14,128,0,4,7,64,0,130,3,32,0,193,1,16,128,224,0,8,64,112,0,4,32,56,0,2,66,126,55,160,146,66,161,64,179,179,179,126,183,161,132,
35,71,142,208,246,237,219,253,110,67,89,8,206,95,178,217,44,93,191,126,221,239,54,148,112,243,230,77,186,114,229,138,223,109,40,11,163,218,95,6,7,7,253,110,65,25,201,100,210,239,22,148,134,224,252,226,
56,14,165,211,105,191,219,80,198,204,204,12,189,126,253,218,239,54,148,133,224,252,50,57,57,73,139,139,139,126,183,161,148,190,190,62,191,91,80,22,130,243,203,189,123,247,252,110,65,57,169,84,138,138,
69,124,237,30,11,130,67,43,99,26,222,223,172,149,203,229,232,209,163,71,126,183,161,36,156,170,17,209,244,244,52,45,44,44,48,107,181,181,181,20,143,199,37,119,36,215,212,212,20,77,76,76,48,107,201,100,
146,90,90,90,36,119,164,62,4,135,136,6,6,6,184,181,68,34,161,253,17,245,204,204,12,93,189,122,149,89,27,24,24,160,91,183,110,81,101,101,165,228,174,212,102,252,168,86,44,22,105,104,104,136,91,191,112,
225,130,196,110,252,17,137,68,168,177,177,145,89,91,90,90,162,225,225,97,201,29,169,207,248,224,60,123,246,140,114,185,28,179,182,127,255,126,106,106,106,146,220,145,63,46,95,190,204,173,225,116,109,45,
227,131,227,118,154,22,139,197,200,178,44,137,221,248,39,145,72,80,32,192,126,58,60,124,248,16,71,245,171,24,31,28,183,211,180,104,52,42,177,19,127,213,213,213,209,233,211,167,153,181,66,161,224,250,62,
208,68,70,7,103,118,118,150,222,189,123,199,172,237,221,187,151,78,156,56,33,185,35,127,245,244,244,112,107,88,193,41,101,116,112,214,27,211,120,163,139,174,162,209,40,109,219,182,141,89,123,250,244,41,
86,112,254,98,214,51,99,21,140,105,165,118,236,216,65,157,157,157,220,58,14,9,254,48,54,56,47,95,190,164,87,175,94,49,107,53,53,53,212,220,220,44,185,35,53,36,18,9,110,45,149,74,145,227,56,18,187,81,151,
177,193,113,27,211,206,159,63,111,220,152,246,191,182,182,54,170,169,169,97,214,114,185,28,77,78,78,74,238,72,77,102,62,59,8,99,26,79,48,24,164,75,151,46,113,235,24,215,86,24,25,156,183,111,223,210,139,
23,47,152,181,93,187,118,209,153,51,103,36,119,164,22,183,113,237,238,221,187,244,253,251,119,137,221,168,201,200,224,184,141,105,93,93,93,20,12,6,37,118,163,30,172,224,172,207,200,224,96,76,91,31,86,
112,220,25,23,156,247,239,223,211,243,231,207,153,181,112,56,76,173,173,173,146,59,82,19,86,112,220,25,23,156,193,193,65,238,85,141,157,157,157,84,81,81,33,185,35,53,213,213,213,113,143,228,177,130,99,
104,112,120,76,184,132,96,35,176,130,195,103,84,112,62,124,248,64,83,83,83,204,90,85,85,21,181,181,181,73,238,72,109,177,88,12,43,56,28,70,5,199,109,76,235,232,232,192,85,142,171,172,183,130,147,74,165,
36,118,163,22,227,130,195,131,49,141,205,237,51,157,190,190,62,99,191,5,199,152,224,44,46,46,114,215,69,42,43,43,169,189,189,93,114,71,229,1,43,56,108,198,4,103,104,104,136,187,160,120,238,220,57,170,
170,170,146,220,81,121,192,10,14,155,49,193,113,219,22,192,152,230,14,43,56,107,25,17,156,79,159,62,209,248,248,56,179,86,81,81,65,29,29,29,146,59,42,47,110,43,56,249,124,158,70,70,70,36,119,228,63,35,
130,147,78,167,169,80,40,48,107,103,207,158,165,112,56,44,185,163,242,227,182,130,99,226,103,58,70,4,7,99,218,230,97,5,167,148,246,193,249,242,229,11,101,179,89,102,45,20,10,81,87,87,151,228,142,202,19,
86,112,74,105,31,156,225,225,97,250,249,243,39,179,214,218,218,74,59,119,238,148,220,81,249,194,10,206,31,218,7,7,99,154,119,98,177,24,119,187,194,180,21,28,173,131,179,188,188,76,163,163,163,204,90,32,
16,192,152,182,65,88,193,249,67,235,224,140,140,140,112,63,99,104,105,105,225,126,34,14,124,88,193,89,161,117,112,48,166,121,175,189,189,29,43,56,164,113,112,190,125,251,70,153,76,134,89,11,4,2,212,221,
221,45,185,35,61,96,5,103,133,182,193,201,100,50,244,245,235,87,102,237,212,169,83,180,111,223,62,201,29,233,3,43,56,26,7,7,151,16,108,29,172,224,104,26,156,31,63,126,112,191,194,200,178,44,140,105,30,
48,125,5,71,203,224,140,142,142,210,210,210,18,179,22,137,68,168,190,190,94,114,71,250,113,91,193,201,100,50,244,241,227,71,201,29,201,165,101,112,240,189,105,91,207,109,5,199,182,109,234,239,239,151,
220,145,92,218,5,199,182,109,122,240,224,1,183,142,247,55,222,113,91,193,209,253,116,77,187,224,100,179,89,250,252,249,51,179,118,236,216,49,58,116,232,144,228,142,244,229,182,130,51,61,61,77,111,222,
188,145,220,145,60,218,5,7,99,154,60,38,175,224,104,21,28,199,113,232,254,253,251,220,58,78,211,188,231,246,153,78,50,153,212,118,5,71,171,224,140,143,143,115,47,168,106,108,108,164,134,134,6,201,29,233,
111,189,21,156,199,143,31,75,238,72,14,173,130,227,54,166,197,98,49,137,157,152,35,24,12,210,197,139,23,185,117,93,15,9,180,9,142,227,56,148,78,167,185,117,156,166,109,29,183,211,181,254,254,126,45,87,
112,66,126,55,224,149,39,79,158,208,194,194,2,179,118,248,240,97,58,122,244,168,228,142,204,17,137,68,168,161,161,129,249,99,196,249,124,158,122,123,123,105,207,158,61,191,255,102,89,86,201,23,164,88,
150,69,213,213,213,220,219,68,180,230,246,234,43,119,89,247,183,44,235,247,237,112,56,76,199,143,31,95,115,63,81,218,4,7,167,105,254,138,199,227,116,251,246,109,102,109,126,126,158,230,231,231,37,119,
180,214,157,59,119,232,228,201,147,158,60,150,22,163,90,177,88,116,13,14,78,211,182,94,60,30,87,254,151,186,189,252,137,74,79,95,113,230,230,230,232,218,181,107,94,62,228,63,41,22,139,220,255,209,14,28,
56,64,77,77,77,146,59,50,79,125,125,61,53,55,55,211,196,196,132,223,173,112,133,66,222,61,221,61,13,142,109,219,52,55,55,231,229,67,110,90,52,26,45,153,117,97,235,244,244,244,40,29,28,47,95,113,212,126,
109,245,0,198,52,121,162,209,168,210,191,49,164,236,168,166,154,218,218,90,207,222,12,194,250,194,225,48,245,246,246,82,54,155,165,229,229,229,223,127,183,109,187,228,106,92,219,182,75,234,178,32,56,255,
168,187,187,27,99,154,100,55,110,220,216,240,191,41,20,10,37,215,79,57,142,83,114,123,117,189,88,44,82,62,159,47,185,191,219,109,162,149,111,116,253,251,72,124,179,180,14,14,142,161,203,67,48,24,92,243,
185,204,238,221,187,125,234,230,223,120,26,156,80,40,68,7,15,30,244,242,33,133,85,87,87,115,47,180,2,216,44,107,108,108,76,207,245,85,128,45,164,253,169,26,192,86,64,112,0,4,32,56,0,2,16,28,0,1,8,14,128,
0,4,7,64,0,130,3,32,0,193,1,16,128,224,0,8,64,112,0,4,32,56,0,2,16,28,0,1,8,14,128,0,4,7,64,192,127,181,177,121,91,110,85,184,67,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* Equalizer::eq_peak_png = (const char*) resource_Equalizer_eq_peak_png;
const int Equalizer::eq_peak_pngSize = 1982;


//[EndFile] You can add extra defines here...
//[/EndFile]
