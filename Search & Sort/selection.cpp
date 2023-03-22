#include<iostream>
using namespace std;


// int selectionSort(int arr,int n){

//     for(int i=0;i<n-1;i++){
//           int MiniIndex = i;

//         // int Minidx = i;
//         for(int j=i+1;j<n;j++){

//             if(int arr[j] < int arr[MiniIndex]){
//                  MiniIndex = j;

//             }
//             swap(arr[MiniIndex], arr[i]);

//         }
//     }
// }

int main(){

    // int arr[10] = {1,3,2,4,6,5,8,7,10,9};
        int n;
        cin>>n;

        int arr[n];


        
    for(int i=0;i<n;i++){
            cin>>arr[i];


    }


    cout<<" array before sort"<<endl;

    for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;

    }
 
// selectionSort(arr,7);











    return 0;

}