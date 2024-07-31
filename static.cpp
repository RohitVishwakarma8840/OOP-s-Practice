#include<iostream>
using namespace std;

void fun(){
   static  int x=0;  // declared permanently in the code 
    cout<<"x is " <<x<<endl;
    x++;
}

int main(){

fun();
fun();
fun();






    return 0;
}













