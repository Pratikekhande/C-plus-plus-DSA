#include<iostream>

using namespace std;

void update(int *ptr){

    *ptr = *ptr + 1;
    

}

int getSum(int *arr,int n){

    cout<<endl<< "size" << sizeof(arr)<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];

    }
    return sum;
}
int main(){

    int value = 7;
    int *ptr = &value;

    cout<<"Before "<<*ptr<<endl;

    update(ptr);

    cout<<"after "<<*ptr<<endl;

     int arr[6] ={1,3,5,7,9,4};
     cout<< getSum(arr,6)<<endl;





    return 0;

}