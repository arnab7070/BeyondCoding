#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
   string str = "afhsDgasGJsjsgjSggyag";
   //this is not an optimized solution for this  problem
//    for (int i = 0; i < str.size(); i++)
//    {
//        if (str[i]>='a' && str[i]<='z')
//        {
//            str[i] -= 32; //To make it uppercase we must subtract 32 from lowercase word
//        }   
//    }
//    cout<<str<<endl;
transform(str.begin(), str.end(), str.begin(), ::toupper);
cout<<str<<endl;
transform(str.begin(), str.end(), str.begin(), ::tolower);
cout<<str<<endl;
return 0;
}