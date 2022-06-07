#include<iostream> //header file
using namespace std; //standard template
int main(){
   int m;
   int n;
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
   int a;
   cout<<"Enter the number you want to search"<<endl;
   cin>>a;
   bool flag = false;
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           if (array[i][j]==a)
           {
               flag = true;
           }         
       }  
   }
   if(flag){
       cout<<"Element is found.";
   }
   else
   {
       cout<<"Sorry, Element is not found!!!";
   }
return 0;
}