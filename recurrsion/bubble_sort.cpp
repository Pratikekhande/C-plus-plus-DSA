#include<iostream>
using namespace std;

void sortArray(int* arr, int n){

    if(n==0 || n==1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,n-1);
}
int main(){
   

   int arr[5] = {3,1,6,4,8};
   int size = 5;

   sortArray(arr,size);

   for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;

   }cout<<endl;



    return 0;

}