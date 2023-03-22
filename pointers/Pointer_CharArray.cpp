#include<iostream>
using namespace std;

int main(){

    int arr[5] = { 1,2,3,4,5};
    char ch[7] = "pratik";
    
    cout<<arr<<endl; // prints address
    cout<<ch<<endl;  // prints char array or string 

    char *c = &ch[0];

    cout<< c << endl;


    char temp='s';
    char *p = &temp;

    cout<< p << endl;




    
    
    
    
    
        return 0;

}