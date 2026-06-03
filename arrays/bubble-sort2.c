#include<stdio.h>

void bubblesort(int a[],int n);
void main (){
int a[]={23,45,21,14,56,1,7};
  bubblesort(a,7);

  for (int i=0;i<=6;i++)
{


  printf("%d ",a[i]);

}
}

void bubblesort(int a[] , int n ){
int temp;
for (int i=0; i<=n-1; i++){
    for (int j=0; j<n-1-i; j++){   // n-i se shi h but not

            if (a[j]>a[j+1]){

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }


    }

}


}






