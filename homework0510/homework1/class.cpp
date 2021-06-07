#include "class.h"
#include <iostream>
#include <ostream>
#include <math.h>

circle::circle(){
    x=0;
    y=0;
    radius=0;
}
circle::circle(int x,int y,int r){
    this->x=x;
    this->y=y;
    radius=r;
}
circle::~circle(){
    std::cout<<"~circle()"<<std::endl;
}
double calculate::distance(circle &c1, circle &c2){
    return sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
}
void calculate::section(circle &c1, circle &c2){
    double dis = calculate::distance(c1, c2);
    if (dis>(c1.radius+c2.radius)) {
        std::cout<<"they seperate!"<<std::endl;
    }
    if (dis==(c1.radius+c2.radius)) {
        std::cout<<"they are tengent!"<<std::endl;
    }
    if (dis<(c1.radius+c2.radius)) {
        std::cout<<"they intersect!"<<std::endl;
    }
    
    
}
calculate::calculate(){
    std::cout<<"calculate generate successfully!"<<std::endl;
}
calculate::~calculate(){
    std::cout<<"calculate delete successfully!"<<std::endl;
}