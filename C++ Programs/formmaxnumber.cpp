#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

   string str = "5152649854673";
   sort(str.begin(), str.end(), greater<int>());//this argument is for forming maximum number
   cout<<str;

return 0;
}