#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
int partition(int A[],int l,int h)
{
 int pivot=A[l];
 int i=l,j=h;
 
 do
 {
 do{i++;}while(A[i]<=pivot);
 do{j--;}while(A[j]>pivot);
 
 if(i<j)swap(&A[i],&A[j]);
 }while(i<j);
 
 swap(&A[l],&A[j]);
 return j;
}
void QuickSort(int A[],int l,int h)
{
 int j;
 if(l<h)
 {
 j=partition(A,l,h);
 QuickSort(A,l,j-1);
 QuickSort(A,j+1,h);
 }
}
int main()
{
int A[10],n,i;
 printf("Enter the number of element\n");
 scanf("%d",&n);
 printf("Enter %d integers\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 
 QuickSort(A,0,n);
 
 for(i=0;i<10;i++)
 printf("%d ",A[i]);
 printf("\n");
 
 return 0;
}