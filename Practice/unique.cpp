#include<iostream>
using namespace std;

int unique(int arr[], int size){

int ans = 0;
for(int i=0;i<size;i++){
    ans = ans^arr[i];
}
return ans;

}
int main(){

int num[7]={1,2,3,1,2,3,4};
unique(num,7);

    return 0;

}