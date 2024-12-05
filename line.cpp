#include "line.h"
Line::Line(Point a ,Point b): a(a), b(b){}
Line::Line(Line &other): a(other.a),b(other.b){}
bool Line::equals(Point &other){
    if(a.equals(other) and b.equals(other)){
        return true;
    } 
    else {
        return false ;
    }
}
void Line::flip(){
    a.flip();
    b.flip();
}
void Line::move(double x ,double y){
    a.move();
}
