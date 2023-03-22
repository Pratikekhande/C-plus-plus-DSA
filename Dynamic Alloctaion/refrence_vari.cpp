#include<iostream>
using namespace std;

void update1(int& n){

    n++;
}

int main(){


    // int i = 7;
    // int& j = i;
    // cout<<i<<endl;
    // i++;
    //  cout<<i<<endl;
    // cout<<j<<endl;


    int n=7;
    cout<<"BFR "<< n <<endl;
    update1(n);
    
    cout<<"AFT " << n <<endl;

    return 0;
}