#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter the value of the word count: ";
   cin>>n;
   cout<<"Now enter the word: "; 
   char array[n+1];
   cin>>array;
   bool check = true;
   for (int i = 0; i < n; i++)
   {
       if (array[i]!=array[n-1-i])
       {
           check = false;
           break;
       }
   }
   if (check == true)
   cout<<"Word is palindrome.";
   else {
       cout<<"Word is not a palindrome.";
   }
return 0;
}