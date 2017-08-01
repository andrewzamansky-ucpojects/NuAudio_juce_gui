
#ifndef __CIRCLE_ITEM__
#define __CIRCLE_ITEM__

#include "../JuceLibraryCode/JuceHeader.h"

class CircleItem  
{
public:
   CircleItem ();
    ~CircleItem();

    void setIndex(int i);
    void draw (Graphics& g);
    void setPos(int x, int y);
    int isMouseOver(int x, int y);
    int isMousePressed();
    void setMouseOver(int over);
    void setMousePressed(int pressed);
    int getX();
    int getY();
    void setEnable(int en);
    int isEnabled();
    
private: 
    int index;
    int posX;
    int posY;
    int enabled;
    int isPressed;
    int isOver;    
    int size;    
};

#endif   // __CIRCLE_ITEM__
