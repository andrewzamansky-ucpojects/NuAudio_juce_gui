/*
  ==============================================================================

    MyUtils.h
    Created: 15 Nov 2016 5:27:02pm
    Author:  Leonardo-Severini

  ==============================================================================
*/

#ifndef MYUTILS_H_INCLUDED
#define MYUTILS_H_INCLUDED


#include "../JuceLibraryCode/JuceHeader.h"

class MyUtils {
public:
	static void setupLookAndFeelColours(LookAndFeel& laf);
  static float map(float x, float in_min, float in_max, float out_min, float out_max);
};



#endif  // MYUTILS_H_INCLUDED
