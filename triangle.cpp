#include "triangle.h"
Triangle::Triangle(Point a ,Point b ,Point c): a(a), b(b), c(c) {};
Triangle::Triangle(const Triangle &other){
    a=other.a;
    b=other.b;
    c=other.c;
}

bool Triangle::equals(Triangle &other){
    if(a.equals(other.a) and b.equals(other.b) and c.equals(other.c) ){
        return true;  
    }
    else{
        return false;
    }
}

void Triangle::flip(){
    a.flip();
    b.flip();
    c.flip();
}

void Triangle::move(double x ,double y){
    a.move(x,y);
    b.move(x,y);
    c.move(x,y);
}

double Triangle::getSurface() {
    return 0.5 * std::abs(
            a.getX() * (b.getY() - c.getY()) +
            b.getX() * (c.getY() - a.getY()) +
            c.getX() * (a.getY() - b.getY())
        );
}


std::string Triangle::toString(){
    //cout<<"Quadrilateral" + '(' + a.toString() + ", " + b.toString()+", " + c.toString() + ", " + d.toString()+ ')'<<endl;
    string out="";
    
    out = std::string("Triangle")  + "(" + a.toString() + ", " + b.toString() + ", " + c.toString()  + ")";

    return out;
}

