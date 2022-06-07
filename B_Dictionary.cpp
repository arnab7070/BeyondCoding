#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        string input;
        cin>>input; 
        vector<string> dict;
        int n = 1;
        for(int i = 97; i <= 122; i++){
            char a = i;
            for(int j = 97; j <= 122; j++){
                if(i==j){
                    continue;
                }
                char b = j;
                string s1(1,a);
                string s2(1,b);
                string total = s1.append(s2);
                if(total==input){
                    cout<<n<<endl;
                    break;
                }
                n++;
            }
        }
    }
    return 0;
}