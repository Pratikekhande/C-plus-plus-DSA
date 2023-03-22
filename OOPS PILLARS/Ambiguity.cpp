#include<iostream>
using namespace std;

class A{

    public:
    void func(){
        cout<<" insie function 1"<<endl;

    }
};

class B{

    public:

    void func(){
        cout<<" inside func 2"<<endl;

    }

};

class C: public A,public B{
  
};


int main(){

  C obj;
//   obj.func();


// ambiguity same name func with scope resolution operator :: 
obj.A :: func();
obj.B :: func();


    
    return 0;

}
