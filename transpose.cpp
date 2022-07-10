//This code is only working for square matrix.
#include<iostream>
using namespace std;
int main(){
   int m,n;
   cout<<"Enter the row ";
   cin>>m;
   cout<<"Enter the column ";
   cin>>n;
   int array[m][n];
   cout<<"Now, Enter the elements of your given matrix."<<endl;
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cin>>array[i][j];
       }
   }
   cout<<"The given matrix is = "<<endl;
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cout<<array[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"Now, the transpose of a given matrix is"<<endl;
   for (int i = 0; i < m ; i++)
   {
       for (int j = i; j < m; j++)
       {
           int temp=array[i][j];
           array[i][j]=array[j][i];
           array[j][i]=temp;
       }   
   }
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           cout<<array[i][j]<<" ";
       }
       cout<<endl;
   }
return 0;
}