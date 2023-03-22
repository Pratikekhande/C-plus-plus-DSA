#include<iostream>
using namespace std;


int getSum(int*arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];

    }
    return sum;

}
int main(){


    int n;
    cin>>n;

    int* arr = new int[n];  // creating dynamic array

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }

    int ans = getSum(arr,n);

    cout<<" sum is "<< ans <<endl;


    // case 1 : variable in stack

    while(true){
        int i=7;

    }

    
    // case 2 : variable in heap

    while(true){
int *ptr = new int;
        
    }

    return 0;

}