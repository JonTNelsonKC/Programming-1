//
//  Rectangle.h
//  
//
//  Created by Jonathan Nelson on 2/13/21.
//

#ifndef Rectangle_h
#define Rectangle_h


#endif /* Rectangle_h */

#include <string>
#include <iostream>

using namespace std;

class Rectangle{
public:
 
    Rectangle(int L, int W)//Rectangle class constructor
    
    {if ((L > 0) && (L < 21)){//stating required if else statements during construction, repeated later in the void functions
        Length = L;
        }
    else{
        Length = 0;
    }
    
    if ((W > 0) && (W < 21)) {
        Width = W;}
        else{
            Width = 0;
        }
        Perimeter = Width + Width + Length + Length;//Defining Perimeter and Area variables during construction
        Area = Width*Length;}
    
    
    void setLength(int L){
        if ((L > 0) && (L < 21)) {
            Length = L;}
            else{
                Length = 0;
            }
        }
    
    void setWidth(int W){
        if ((W > 0) && (W < 21))
            Width = W;
            else{
                Width = 0;
            }
        }
    
   /* void setPerimeter(int Perimeter){//Function that calculates the perimeter
        Perimeter = Width + Width + Length + Length;
    }
    void setArea(int Area){//Function that calculates the area
        Area = Width*Length;
    }
    */  //Unnecessary if you define Perimeter and Area during construction.
    
    int const getWidth(){//Prints Width
        return Width;
    }
    int const getLength(){//Prints Length
        return Length;
    }
    int const getPerimeter(){//Prints Perimeter
        return Perimeter;
    }
    int const getArea(){//Prints Area
        return Area;
    }

    
private:
    int Length{0};
    int Width{0};
    int Perimeter{0};
    int Area{0};
    //Initializes variables and sets them to zero
};
