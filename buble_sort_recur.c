#include<stdio.h>
void sort(int *a[],int size){
    if(size==0) return;
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1]){
               int temp= a[i+1];
               a[i+1]=a[i];
               a[i]=temp;
            }
    }
    sort(a,--size);
}
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    sort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}