#include<stdio.h>
void sort(int *a[],int size,int i){
    if(size<=i) return;
    else{
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
        sort(a,size,++i);
    }
}
void main(){
    int a[]={34,56,27,1,35,67,89,45,78,34};
    sort(a,10,1);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}