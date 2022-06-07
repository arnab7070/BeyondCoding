#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string arr1[100];
    string arr2[100];
    cout<<"Enter the queary list: "<<endl;
    for(int i = 0; i < 100; i++){
        getline(cin, arr1[i]);
    }
    cout<<"Enter the output list: "<<endl;
    for(int j = 0; j < 100; j++){
        getline(cin, arr2[j]);
    }
    cout<<"The unmatched output list: "<<endl;
    for(int k = 0; k < 100; k++){
        if(arr1[k]!=arr2[k]){
            cout<<arr1[k]<<"->"<<arr2[k]<<"->"<<k<<endl;
        }
    }
    return 0;
}