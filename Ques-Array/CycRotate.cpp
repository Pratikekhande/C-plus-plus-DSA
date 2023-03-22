// to cyclically rotate array by one

#include<iostream>
using namespace std;

void rotate(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i!=j){
        swap(arr[i],arr[j]);
        i++;

    }
}
int main(){

 int arr[5] = { 1,2,3,4,5};
 int n = sizeof(arr)/sizeof(arr[0]);

 cout<<" Given array is"<<endl;
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

 }cout<<endl;

    rotate(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";

 }


    return 0;
}