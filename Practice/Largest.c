#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    int arr[n];

    printf("enter number ");
    scanf("%d,&n");
    printf("enter array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int Lr= arr[0]; int Loc;
    for(int  i=0;i<n;i++){
        if(arr[i]>Lr){
            Lr=arr[i];
            Loc=i;
        }
    }
    printf("%d %d",&Lr,&Loc);
    getch();

}