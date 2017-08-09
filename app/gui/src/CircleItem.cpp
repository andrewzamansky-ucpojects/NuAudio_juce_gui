
#include "CircleItem.h"


//==============================================================================
CircleItem::CircleItem ()     
{
   isPressed = 0;
   isOver = 0;
   posX = 0;
   posY = 0;   
   size = 10; 
   index = 0;
}

CircleItem::~CircleItem()
{
   
}

//==============================================================================
void CircleItem::draw (Graphics& gr)
{
    int x = posX - size/2;
    int y = posY - size/2;

    gr.setColour (Colours::white); 
    gr.setFont (10.0f);
    gr.drawFittedText (String(index), x, y-20, 10,10, Justification::centred, 1); 

    if(enabled)
    {
        // Enabled        
        if(isOver) 
        {
            

            if(isPressed)
            {
                // Over and Pressed
                gr.setColour (Colours::blue);
            } 
            else 
            {
                // Over - Not pressed
                gr.setColour (Colours::red);
            }
            
            gr.drawEllipse(x-3, y-3, size+6, size+6, 2);        
        } 
        else 
        {
            // Not Over and Not Pressed
            gr.setColour (Colours::white);  
            gr.drawEllipse(x-3, y-3, size+6, size+6, 2);        
        }
        
        gr.setColour (Colours::white);    
    } 
    else 
    {
        // Disabled
        gr.setColour (Colours::grey); 
        gr.drawEllipse(x-3, y-3, size+6, size+6, 2);   
    }

    gr.fillEllipse (x, y, size, size); 
}

void CircleItem::setPos(int x, int y)
{
    posX = x;
    posY = y;
}

int CircleItem::getX(){
    return posX;
}

void CircleItem::setX(int x){
    posX = x;
}

int CircleItem::getY(){
    return posY;
}

void CircleItem::setY(int y){
     posY = y;
}

int CircleItem::isMousePressed()
{
    return isPressed;
}

int CircleItem::isMouseOver(int ox, int oy)
{
    int ret = 0;
    int x = ox + size/2;
    int y = oy + size/2;

    // Logger::outputDebugString (String("Pos ") + String(x) + String(":") + String(y) );
    
    if(posX > (x-size) && posX < x)
    {
        if(posY > (y-size) && posY < y)
        {
           ret = 1;           
        }
    }

    return ret;
}

void CircleItem::setMouseOver(int over) 
{
     isOver = over;
}

void CircleItem::setMousePressed(int pressed) 
{
     isPressed = pressed;
}

void CircleItem::setEnable(int en)
{
    enabled = en;    
}
    
int CircleItem::isEnabled()
{
    return enabled;
}

void CircleItem::setIndex(int i){
    index = i;
}