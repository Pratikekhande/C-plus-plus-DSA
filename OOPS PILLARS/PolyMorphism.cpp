#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<" hello pratik "<<endl;

    }

    void sayHello(char name){
        cout<<" hello pratik"<<endl;

    }

    void sayHello(string name){
        cout<<"hello" <<endl;

    }
};

// class B {

//     public:

//    int a;
//    int b;

//    public:
//    int add(){
//     return a+b;
//    }

//     void operator+ (B &obj){

//     }
// };

// class C:public A{
//     public:
//     void func3(){
//         cout<<" inside func 3"<< endl;

//     }
// };


int main(){

  A obj;
  obj.sayHello();



    
    return 0;

}
