#include<iostream>
using namespace std;


bool isPresent(int arr[][4], int target, int row, int col){
    for(int row = 0;row<3;row++){
       for(int col =0;col<4;col++){
           if(arr[row][col] == target){
            return 1;

           }
    }

  }
  return 0;

}
int main(){
  // creating 2d array

  int arr[3][4];
  

  cout<<" enter array elements"<< endl;



//   int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

  for(int row = 0;row<3;row++){
    for(int col =0;col<4;col++){
        cin>>arr[row][col];

    }
  }


// print array

 
  for(int row = 0;row<3;row++){
    for(int col =0;col<4;col++){
        cout<<arr[row][col]<<" ";

    }
    cout<<endl;

  }


  cout<< " enter element to search"<<endl;

  int target;
  cin >> target;

  if(isPresent(arr,target,3,4)){
    cout<<"element found"<< endl;

  }
  else{
    cout<<"element not found"<<endl;

  }

    return 0 ;

}