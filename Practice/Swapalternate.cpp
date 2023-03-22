#include<iostream>
using namespace std;

void printarray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void swap(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}
int main(){

 int even[6]={2,3,5,6,8,9};
 int odd[5] ={1,2,4,5,7};

swap(even,6);
printarray(even,6);

swap(odd,5);
printarray(odd,5);

    return 0;

}
