#include<iostream>
using namespace std;


class A{
    public:
    int age;
    int weight;
    void print(){
        cout<<"Class A called"<<endl;
    }
};
class B:public A{
    public:
int height;
void print(){
        cout<<"Class B called"<<endl;
    }
};
class C:public A,public B{
int batch;
};


int main(){

A object1;
B object2;

object1.age=5;

object2.height=10;

C object3;
object3.A::print();
};
