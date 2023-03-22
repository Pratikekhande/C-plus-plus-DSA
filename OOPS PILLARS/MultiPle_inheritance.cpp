#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"animal bark"<<endl;

    }

};

class Human {

    public:
    string color;

    public:
    void speak(){
        cout<< " huamn speak"<<endl;

    }
};

class hybrid: public animal , public Human{


};



int main(){

   hybrid h;
   h.bark();
   h.speak();
   
    
    return 0;

}
