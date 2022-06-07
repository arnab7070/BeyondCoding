#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int height;
        cin>>height;
        int first = (height/3);
        int remainder = height%3;
        int second = first + remainder;
        int third = height-(first+second);
        if(first==third){
            first++;
            third--;
            if(first>second){
                swap(first,second);
            }
            if(first==second){
                second++;
                third--;
                if(third==0){
                    third++;
                    first--;
                }
            }
        }
        cout<<first<<" "<<second<<" "<<third<<endl;
    }
    return 0;
}