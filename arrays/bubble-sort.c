#include <stdio.h>
int main(){
int a[]={6,1,5,3,15,9};

int i, j,n=6,c;

for (j=0;j<(n-1); ++j)
{


for (i=0;i<(n-1);++i)

if (a[i] > a[i+1])
{

c=a[i];
a[i]=a[i+1];
a[i+1]=c;


}
}
for(i=0;i<n; i++)
printf("%d ",a[i]);


}
