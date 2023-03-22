#include<iostream>
using namespace std;

int main () {

    // int *p = 0;

    // cout<<*p<<endl;

    /*int i=5;

    int *p =&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    int *q = 0;
    q = &i;

    cout<< q << endl;
    cout<< *q <<endl;
    */

   int num =6 ;
   int a = num ;
   cout<<"a before "<<num<<endl;
   a++;
   cout<<"a after "<<num<<endl;
// upgradation is possible by creating pointer vari
   int *p = &num;
   cout<<"before"<<num<<endl;
   (*p)++;
   cout<<"after"<<num<<endl;

//copy pointer
   int *q = p;
   cout<<p<<"-"<<q<<endl;
   cout<<*p<<"-"<<*q<<endl;

   int i=3;
   int *t =&i;
   cout<<(*t)++<<endl;
      cout<<(*t)<<endl;

   *t =*t+1;
   cout<<*t<<endl;

   cout << " before t " << t << endl;
    t = t + 1;
    cout << " after t " << t << endl;







    return 0;

}