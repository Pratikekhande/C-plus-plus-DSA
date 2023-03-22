#include<iostream>
using namespace std;

void print(int arr[], int s,int e){
    for(int i=s;i<=e;i++){
        cout<< arr[i] << endl;

    }
    cout<<endl;

}
bool BinarySearch(int *arr, int s,int e, int k){

    cout<<endl;
    print(arr,s,e);

    //element not found
    if(s>e){
        return false;
    }
    int mid = s +(e-s)/2;

    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        return BinarySearch(arr, mid+1, e,k);
    }
    else{
        return BinarySearch(arr, s, mid-1,k);

    }

}
int main(){

    int arr[6] = {1,3,5,7,9,10};
    int size = 6;
    int key = 9;

    cout<<" present hai ya nhi " << BinarySearch(arr,0,size -1,key) << endl;


    return 0;

}