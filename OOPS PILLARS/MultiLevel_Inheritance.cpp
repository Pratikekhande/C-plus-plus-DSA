#include<iostream>
using namespace std;

class animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;

    }

};

class dog: public animal{

};

class germanshepheard: public dog{

};

int main(){

    germanshepheard g;
    g.speak();
    cout<<g.age<<endl;
    
    return 0;

}

