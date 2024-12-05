#include "point.h"
Point::Point(double x,double y){
    this->x=x;
    this->y=y;
}
Point::Point(const Point & other){
    x=other.x;
    y=other.y;
}
bool Point::equals( const Point &other){
    if(x==other.x and y==other.y){
        return true;
    }
    else{
        return false;
    }
}
double Point::getX(){
    return x;

}
double Point::getY(){
    return y;

}
void Point::flip(){
    x=-x;
    y=-y;
}
void Point::move(double x,double y){
    this->x+=x;
    this->y+=y;
}
string Point::toString(){
    std::ostringstream oss;
    oss<<std::fixed<<std::setprecision(1);
    oss<<"Point("<<x<<", "<<y<<")";
    return oss.str();
}
Point::Point(){};



 
