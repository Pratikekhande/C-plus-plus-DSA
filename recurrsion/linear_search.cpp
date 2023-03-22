#include<iostream>
using namespace std;


bool LinearSearch(int *arr, int size, int k){

    if(size == 0){
        return false;

    }

    if(arr[0] == k){
        return true;

    }

    bool remaingPart = LinearSearch(arr+1,size-1,k);
    return remaingPart;

}
int main(){
    

    int arr[5] ={2,3,4,5,6};
    int size = 5;
    int key = 8;

    int ans  = LinearSearch(arr,size,key);
 
   if(ans){
    cout<<"present"<<endl;

   }

else{
    cout<<"absent"<<endl;

}

    return 0;

}