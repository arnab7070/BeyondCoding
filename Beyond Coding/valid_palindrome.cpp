#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(string s) {
        string str;
        for(int i = 0; i < s.length(); i++){
            int temp = (int)s[i];
            if((temp>=97 && temp<=122)||(temp>=65 && temp<=90)||(temp>=48 && temp<=57)){
                str += (tolower(s[i]));
            }
        }
        cout<<str;
        string newstr = str;
        for(int i = 0; i < str.length()/2; i++){
            char temp = str[i];
            str[i] = str[str.length()-i-1];
            str[str.length()-i-1] = temp;
        }
        if(newstr==str){
            return true;
        }
        return false;
}

int main()
{
    string str = "0P";
    if(isPalindrome(str)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}