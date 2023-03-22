#include<iostream>
using namespace std;


int partition(int arr[], int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i=s+1;i<=e; i++){
       if(arr[i] <= pivot){
        cnt++;
       }

    }

    // place pivot at right position
    int pivotIdx = s + cnt;
    swap(arr[pivotIdx], arr[s]);


    // left and right sambhal lete hai

    int i =s , j= e;

    while( i < pivotIdx && j > pivotIdx){
        while (arr[i] < pivot)
        {
            /* code */
            i++;
        }
        while(arr[j] > pivot){
            j++;

        }

        if(i < pivotIdx && j > pivotIdx){
            swap(arr[i++],arr[j--]);

        }
        
    }
    return pivotIdx;

}
void quickSort(int arr[],int s,int e){

    // base case
    if(s >=e){
        return ;
    }


    //partition karenge
    int p= partition(arr,s,e);

    // left part sort
    quickSort( arr , s, p-1);

    // right part sort
    quickSort( arr, p+1,e);

}
int main(){

    int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n=10;

    quickSort(arr,0,n-1);

    for(int i=0;i<n-1;i++){

        cout<< arr[i]<<endl;
        
    }

    return 0;
}