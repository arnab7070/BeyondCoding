//Adjacency matrix of Graph
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    int arr[nodes][edges]={};
    int x,y;
    for(int i = 0; i < edges; i++){
        cin>>x>>y;
        arr[x-1][y-1]=1;
        arr[y-1][x-1]=1;
    }
    cout<<"The adjacency matrix of the given Graph is:\n";
    cout<<"N/E ";
    for(int i = 1; i<=edges; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i = 0; i < nodes; i++){
        cout<<i+1<<":  ";
        for(int j = 0; j < edges; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //checking edge availability
    // cout<<"Enter nodes to check edge availability: ";
    // int a,b;
    // cin>>a>>b;
    // if(arr[a-1][b-1]==1){
    //     cout<<"There is a edge between "<<x<<" & "<<y;
    // }
    // else{
    //     cout<<"No edge";
    // }
    
    return 0;
}