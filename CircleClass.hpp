//
//  CircleClass.hpp
//  CompSciIII_hw1
//
//  Created by Joshua Peckham on 9/28/16.
//  Copyright © 2016 Joshua Peckham. All rights reserved.
//

#ifndef CircleClass_hpp
#define CircleClass_hpp

#include <iostream>
using namespace std;

class CircleClass{
private:
    double radius;
    double pi = 3.14159;
    
public:
    CircleClass(){
        radius = 0;
    };
    CircleClass( double m );
    void setRadius( double n );
    double getRadius() const;
    double getArea() const;
    double getDiameter() const;
    double getCircumference() const;
    
};

CircleClass::CircleClass( double m ){
    if ( m <= 0 ){
        cout << "Invalid input. Radius is still set to 0.00." << endl;
        radius = 0.00;
    }
    else{
        radius = m;
    }
}

void CircleClass::setRadius( double n ){
    radius = n;
}

double CircleClass::getRadius() const{
    return radius;
}

double CircleClass::getArea()const{
    return (pi * radius * radius);
}

double CircleClass::getDiameter() const{
    return (radius * 2);
}

double CircleClass::getCircumference() const{
    return ( 2 * pi * radius);
}



#endif /* CircleClass_hpp */
