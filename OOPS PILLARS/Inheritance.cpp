#include<iostream>
using namespace std;

 class Human  {

    public:
     int height = 5;

    public:
     int weight;

    private:
     int age;


    public:
     int getAge(){
        return this->age;

     }

     void setweight(int w){
        this->weight = w;
     }

 };

 class male: public Human{

    public:
     string color;

    void sleep(){
        cout<<"sleeping"<<endl;

    }

    int getHeight(){
        return this->height;

    }
 };


int main(){

    Human h1;
    cout<< h1.height << endl;

    male m1;
    cout<< m1.color <<endl;

    //  m1.height ;

    // student first;
    
    // cout<<" Everything is fine"<<endl;



    return 0;
}
