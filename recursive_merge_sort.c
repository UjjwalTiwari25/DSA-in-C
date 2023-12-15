#include <stdio.h>
#include<stdlib.h>

void Merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=l;
 int B[h+1];
 
 while(i<=mid && j<=h)
 {
 if(A[i]<A[j])
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];
 
 for(i=l;i<=h;i++)
 A[i]=B[i];
}
void MergeSort(int A[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSort(A,l,mid);
 MergeSort(A,mid+1,h);
 Merge(A,l,mid,h);
 
 }
}
int main()
{
 int A[10],n,i;
 printf("Enter the number of element\n");
 scanf("%d",&n);
 printf("Enter %d integers\n");
 for(i=0;i<n;i++)
 scanf("%d",&A[i]);
 
 MergeSort(A, 0, n-1); 
 for(i=0;i<n;i++) 
 printf("%d ",A[i]); 
 printf("\n"); 
 return 0; 
}