/*
  ==============================================================================

    MyUtils.cpp
    Created: 15 Nov 2016 5:27:02pm
    Author:  Leonardo-Severini

  ==============================================================================
*/

#include "MyUtils.h"

void MyUtils::setupLookAndFeelColours(LookAndFeel & laf)
{
	const Colour baseColour(Colours::black);
	laf.setColour(Slider::thumbColourId, Colour::greyLevel(0.95f));
	laf.setColour(Slider::textBoxOutlineColourId, Colours::transparentWhite);
	laf.setColour(Slider::rotarySliderFillColourId, baseColour);
	laf.setColour(Slider::rotarySliderOutlineColourId, Colours::white);
	laf.setColour(Slider::trackColourId, Colours::black);

	laf.setColour(TextButton::buttonColourId, Colours::white);
	laf.setColour(TextButton::textColourOffId, baseColour);

	laf.setColour(TextButton::buttonOnColourId, laf.findColour(TextButton::textColourOffId));
	laf.setColour(TextButton::textColourOnId, laf.findColour(TextButton::buttonColourId));
}

float MyUtils::map(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (float)(x - in_min) * (float)(out_max - out_min) / (float)(in_max - in_min) + out_min;
}
