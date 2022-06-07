#include<iostream>
using namespace std;
void merge(int array[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2]; //temporary arrays
    for (int i = 0; i < n1; i++)
    {
        a[i]=array[l+i];
    }
    for (int i = 0; i < n1; i++)
    {
        b[i]=array[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while (i<n1 && j<n2) 
    {
        if (a[i]<b[j])
        {
            array[k]=a[i];
            k++; i++;
        }
        else
        {
            array[k] = b[j];
            k++; j++;
        }  
    }
    while (i<n1)
    {
        array[k]=a[i];
        k++; i++;
    }
    
    while (j<n2)
    {
        array[k]=b[j];
        k++; i++;
    }
}
void mergeSort(int array[], int l, int r){
    if (l<r)
    {
        int mid = (l+r)/2;
        mergeSort(array,l,mid);
        mergeSort(array,mid+1,r);
        merge(array,l,mid,r);
    }
}
int main(){
   int array[]={4,8,6,5,1,20};
   mergeSort(array,0,5);
   for (int i = 0; i < 5; i++)
   {
       cout<<array[i]<<" ";
   }
   cout<<endl;
return 0;
}