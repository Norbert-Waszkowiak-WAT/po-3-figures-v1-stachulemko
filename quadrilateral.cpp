#include "quadrilateral.h"
Quadrilateral::Quadrilateral(Point a ,Point b ,Point c,Point d): a(a), b(b), c(c), d(d){};
Quadrilateral::Quadrilateral(const Quadrilateral &other){
    a=other.a;
    b=other.b;
    c=other.c;
    d=other.d;
}

bool Quadrilateral::equals(Quadrilateral &other){
    if(a.equals(other.a) and b.equals(other.b) and c.equals(other.c) and d.equals(other.d)){
        return true;  
    }
    else{
        return false;
    }
}

void Quadrilateral::flip(){
    a.flip();
    b.flip();
    c.flip();
    d.flip();
}

void Quadrilateral::move(double x ,double y){
    a.move(x,y);
    b.move(x,y);
    c.move(x,y);
    d.move(x,y);
}

double Quadrilateral::getSurface() {
    return 0.5 * std::abs(
        a.getX() * b.getY() + b.getX() * c.getY() +
        c.getX() * d.getY() + d.getX() * a.getY() -
        (a.getY() * b.getX() + b.getY() * c.getX() +
         c.getY() * d.getX() + d.getY() * a.getX())
    );
}


std::string Quadrilateral::toString(){
    //cout<<"Quadrilateral" + '(' + a.toString() + ", " + b.toString()+", " + c.toString() + ", " + d.toString()+ ')'<<endl;
    string out="";
    
    out = std::string("Quadrilateral")  + "(" + a.toString() + ", " + b.toString() + ", " + c.toString() + ", " + d.toString() + ")";

    return out;
}

