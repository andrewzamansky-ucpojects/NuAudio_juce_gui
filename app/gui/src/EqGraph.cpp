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

#include "EqGraph.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
EqGraph::EqGraph ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    circles = new CircleItem[CIRCLE_COUNT];
    //[/Constructor_pre]


    //[UserPreSize]
    //[/UserPreSize]

    setSize (740, 400);


    //[Constructor] You can add your own custom stuff here..
    int i = 0;
    for(i = 0; i<CIRCLE_COUNT; i++)
    {
        circles[i].setPos(i*79, 200);
        circles[i].setIndex(i+1);
    }

    for(i = 0; i<X_SIZE; i++)
    {
        Magdb[i] = 0.0f;
    }

    //[/Constructor]
}

EqGraph::~EqGraph()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void EqGraph::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.fillRect (0, 0, 740, 400);

    //[UserPaint] Add your own custom painting code here..
    g.setColour (Colours::grey);
    g.drawLine(0,200,800,200, 1);

    drawLineGraph(g);
    drawCircles(g);    
    //[/UserPaint]
}

void EqGraph::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void EqGraph::mouseMove (const MouseEvent& e)
{
    //[UserCode_mouseMove] -- Add your code here...
    Point<int> p = e.getPosition();
    checkMouseOver(p.x, p.y);
    repaint();
    //[/UserCode_mouseMove]
}

void EqGraph::mouseExit (const MouseEvent& e)
{
    //[UserCode_mouseExit] -- Add your code here...
    int i = 0;
    for(i = 0; i< CIRCLE_COUNT; i++)
    {
        circles[i].setMousePressed(0);
    }
    repaint();
    //[/UserCode_mouseExit]
}

void EqGraph::mouseDown (const MouseEvent& e)
{
    //[UserCode_mouseDown] -- Add your code here...
    Point<int> p = e.getPosition();
    int index = checkMouseOver(p.x, p.y);
    if(index > -1)
    {
        selectedItem = index;
        circles[index].setMousePressed(1);
        Logger::outputDebugString (String("Pressed ") + String(circles[index].isMousePressed()) + String(":") + String(index) );
    }

    //[/UserCode_mouseDown]
}

void EqGraph::mouseDrag (const MouseEvent& e)
{
    //[UserCode_mouseDrag] -- Add your code here...
    Point<int> p = e.getPosition();
    if(selectedItem > -1)
    {
        // Logger::outputDebugString (String("Pressed ") + String(circles[index].isMousePressed()) + String(":") + String(index) );
        if(circles[selectedItem].isEnabled())
        {
            if(circles[selectedItem].isMousePressed() == 1)
            {
                int setX = p.x;
                int setY = p.y;

                if(setX > 740) setX = 740;
                if(setX < 0) setX = 0;

                if(setY > 400) setY = 400;
                if(setY < 0) setY = 0;

                // if(selectedItem == 0)
                // {
                //     // Set Y 200 for the first circle
                //     setY = 200;
                // }
                
                circles[selectedItem].setPos(setX, setY);                
            }
        }

    }
    sendChangeMessage();
    repaint();
    //[/UserCode_mouseDrag]
}

void EqGraph::mouseUp (const MouseEvent& e)
{
    //[UserCode_mouseUp] -- Add your code here...
    int i = 0;
    for(i = 0; i< CIRCLE_COUNT; i++)
    {
        circles[i].setMousePressed(0);
    }
    sendChangeMessage();
    repaint();
    //[/UserCode_mouseUp]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void EqGraph::drawCircles (Graphics& g)
{
    int i = 0;
    for(i = 0; i< CIRCLE_COUNT; i++)
    {
        circles[i].draw(g);
    }
}

void EqGraph::drawLineGraph (Graphics& g)
{
    int i = 0;
    int lastX = circles[0].getX();
    int lastY = circles[0].getY();

    // g.setColour (Colours::grey);
    // for(i = 0; i< CIRCLE_COUNT; i++)
    // {
    //     if(circles[i].isEnabled())
    //     {
    //         g.drawLine(lastX, lastY, circles[i].getX(), circles[i].getY(), 1);
    //         lastX = circles[i].getX();
    //         lastY = circles[i].getY();
    //     }
    // }

    // Draw curve
    g.setColour (Colours::yellow);
    for(i = 0; i<X_SIZE; i++)
    {
        g.drawEllipse(i, -Magdb[i] + (Y_SIZE/2), 1, 1, 1);
    }
}


/**
* Return the index of the over item
*/
int EqGraph::checkMouseOver (int x, int y)
{
    int i = 0;
    int index = -1;
    for(i = 0; i< CIRCLE_COUNT; i++)
    {
        int over = circles[i].isMouseOver(x,y);
        circles[i].setMouseOver(over);
        if(over)
        {
            index = i;
        }
    }
    repaint();
    return index;
}

void EqGraph::activeCircle(int circleIndex, int active)
{
    circles[circleIndex].setEnable(active);
    repaint();
}

int EqGraph::getSelectedItem(){
    return selectedItem;
}

float EqGraph::getFreq(int index, float delta) {
    float x =  (float)circles[index].getX();
    float xLog = 20*pow(delta, x);
    return xLog;
}

void EqGraph::setFreq(int index, float freq, float delta) {
    int x = log10(freq / 20) / log10(delta);
    circles[index].setX(x);
    repaint();
}

void EqGraph::setGain(int index, float gain, float delta) {
    int y = MyUtils::map(gain, 18.0, -18.0, 0.0, 400.0);
    circles[index].setY(y);
    repaint();
}

float EqGraph::getGain(int index) {    
    float y =  (float)circles[index].getY();    
    return MyUtils::map(y, 0.0, 400.0, 18.0, -18.0);
}


void EqGraph::SetMagDb(float *SrcMagdb, float size)
{
    memcpy(Magdb, SrcMagdb,  size * sizeof(float) );
    
    //for(int i=0;i<size;i++)
    //{
    //    Magdb[i] = SrcMagdb[i];        
    //}    
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="EqGraph" componentName=""
                 parentClasses="public Component, public ChangeBroadcaster" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="740" initialHeight="400">
  <METHODS>
    <METHOD name="mouseDown (const MouseEvent&amp; e)"/>
    <METHOD name="mouseUp (const MouseEvent&amp; e)"/>
    <METHOD name="mouseMove (const MouseEvent&amp; e)"/>
    <METHOD name="mouseExit (const MouseEvent&amp; e)"/>
    <METHOD name="mouseDrag (const MouseEvent&amp; e)"/>
  </METHODS>
  <BACKGROUND backgroundColour="ffffffff">
    <RECT pos="0 0 740 400" fill="solid: ff000000" hasStroke="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
