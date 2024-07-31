#include<iostream>
using namespace std;

class Shape{  // abstract class 

   virtual void draw()=0;  // pure virtual function 

};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};


int main(){

//  Shape s1 ; we cannot make the object of an abstract class 

 Circle c1;
 c1.draw();

    return 0;
}






