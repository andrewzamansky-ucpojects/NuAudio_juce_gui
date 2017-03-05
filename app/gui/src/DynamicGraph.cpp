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

#include "DynamicGraph.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
DynamicGraph::DynamicGraph ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (740, 230);


    //[Constructor] You can add your own custom stuff here..
    DynamicGraph::setCrossOvers(100, 2000);
    //[/Constructor]
}

DynamicGraph::~DynamicGraph()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DynamicGraph::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.fillRect (0, 0, 740, 230);

    //[UserPaint] Add your own custom painting code here..
    DynamicGraph::drawGrid(g);

    //[/UserPaint]
}

void DynamicGraph::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void DynamicGraph::setCrossOvers(int c1, int c2){
    int dc1 = 0;
    int dc2 = 0;
    
    dc1 = (740.0 / 20000.0) * c1;
    dc2 = (740.0 / 20000.0) * c2;
    DynamicGraph::crossOver1 = dc1;
    DynamicGraph::crossOver2 = dc2;
    Component::repaint();
}

void DynamicGraph::drawGrid(Graphics& g) {
    int startX = 0;
    int endX = 740;

    int startY = 0;
    int endY = 200;

    int radious = 10;
    
    int centerY = 100;

    g.setColour (Colours::white);

    g.setFont (14.0f);
    g.drawText ("Hello, World!", getLocalBounds(), Justification::centred, true);

    // Center line
    g.drawLine (startX, centerY, endX, centerY, 1);


    // Draw Cross setCrossOvers
    // CO1
    g.setColour (Colours::yellow);
    g.fillEllipse (DynamicGraph::crossOver1, centerY + radious, 5, 5);
    g.drawLine(0, centerY, crossOver1 - radious, centerY);    
    g.drawLine(crossOver1 + radious, centerY + radious, crossOver1 + radious + 100, endY);
    
    
    // CO2
    g.setColour (Colours::red);
    g.fillEllipse (DynamicGraph::crossOver2, centerY+ radious, 5, 5);
   
    g.drawLine(endX, centerY, crossOver2 + radious, centerY);    
    
    g.drawLine(crossOver2 - radious, centerY + radious, crossOver2 - radious + 100, endY);


}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DynamicGraph" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="740" initialHeight="230">
  <BACKGROUND backgroundColour="ffffffff">
    <RECT pos="0 0 740 230" fill="solid: ff000000" hasStroke="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
