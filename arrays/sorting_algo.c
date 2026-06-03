#include<stdio.h>
void sort(int a[], int n);
int main (){

    int a[]={6,12,7,4,13,8};
    int n=sizeof(a)/sizeof(a[0]);
    int i ;
     sort(a,n);


for (i=0;i<n;i++)
{  printf("%d ", a[i]);

}
return 0;
}
void sort(int a[],int n)

{
   int i,j,temp1,temp2;

   for (i=0;i<n-1;i++){

    temp1=i;
    for (j=i+1; j<n;j++)
    {
        if (a[j]<a[temp1])
        temp1=j;

            }

            temp2=a[temp1];
            a[temp1]=a[i];
            a[i]=temp2;
   }
}



