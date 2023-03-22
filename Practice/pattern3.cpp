#include<iostream>
using namespace std;

int main(){

    int n ;
    cin>>n;

    int i = 1;
    int count =  1;

    while (i<=n)
    {
        /* code */
        int j=1;
        while (j<=n)
        {
            cout<<count<<" ";
            count++;

            j++;

        }
        cout<<endl;
        i++;
        
        
    }
    
}

// 1 2 3 4
// 5 6 7 8
// 9 10 11 12 
// 13 14 15 16 

// #include<iostream>
// using namespace std;

// int main(){

//     int n ;
//     cin>>n;

//     int i = 1;

//     while (i<=n)
//     {
//         /* code */
//         int j=1;
//         while (j<=i)
//         {
//             cout<<"*";
            
            
//             j++;

//         }
//         cout<<endl;
//         i++;
        
        
//     }
    
// }

// 8
// 8 8
// 8 8 8 
//8 8 8 8 