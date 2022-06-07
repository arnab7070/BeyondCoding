#include<iostream>

using namespace std;
int main(){
   int n1;
   cout<<"Enter the row number of first matrix: ";
   cin>>n1;
   int n2;
   cout<<"Enter the column number of first matrix: ";
   cin>>n2;
   cout<<"The row number for second matrix is automatically detected as: "<<n2<<endl;
   int n3;
   cout<<"Enter the column number of second matrix: ";
   cin>>n3;
   int array1[n1][n2];
   int array2[n2][n3];
   cout<<"Now enter the elements of 1st matrix"<<endl;
   for (int i = 0; i < n1; i++)
   {
       for (int j = 0; j < n2; j++)
       {
           cin>>array1[i][j];
       }       
   }
   cout<<"Now enter the elements of 2nd matrix"<<endl;
   for (int i = 0; i < n2; i++)
   {
       for (int j = 0; j < n3; j++)
       {
           cin>>array2[i][j];
       }      
   }
   cout<<"The given 1st matrix is  "<<endl;
   for (int i = 0; i < n1; i++)
   {
       for (int j = 0; j < n2; j++)
       {
           cout<<array1[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<"The given 2nd matrix is  "<<endl;
   for (int i = 0; i < n2; i++)
   {
       for (int j = 0; j < n3; j++)
       {
           cout<<array2[i][j]<<" ";
       }
       cout<<endl;
   }
   int ans[n1][n3];
   for (int i = 0; i < n1; i++)
   {
       for (int j = 0; j < n3; j++)
       {
           ans[i][j] = 0;
       }       
   }
   for (int i = 0; i < n1; i++)
   {
       for (int j = 0; j < n3; j++)
       {
           for (int k = 0; k < n2; k++)
           {
               ans[i][j] += array1[i][k]*array2[k][j];
           }           
       }       
   }
   cout<<"The multiplication of these two matrix is"<<endl;
   for (int i = 0; i < n1; i++)
   {
       for (int j = 0; j < n3; j++)
       {
           cout<<ans[i][j]<<" ";
       }
       cout<<endl;
   }
return 0;
}