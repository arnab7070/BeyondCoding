#include <bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
    map<int,int> mp;
    for(int i = 0; i < size; i++){
        mp[arr[i]]++;
    }
    map<int,int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it->second<=1){
            return it->first;
        }
    }
    return 0;
}

int main(){
	int arr[9] = {1,3,1,3,6,10,7,10,7};
	cout<<findUnique(arr, 9);
	return 0;
}