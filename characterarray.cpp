#include<iostream>
using namespace std;
int main(){
   char array[100] = "apple"; //always use [n+1] size for [n] size of array in character array.
   int i = 0;
   while (array[i] != '\0')
   {
       cout<<array[i]<<endl;
       i++;
   }
return 0;
}