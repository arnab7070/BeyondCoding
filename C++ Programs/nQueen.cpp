#include<bits/stdc++.h>
using namespace std;
bool isSafe(int** array, int x, int y, int n){
    for(int row=0;row<x;row++){
        if(array[row][y]==1){
            return false;
        }
    }
    int row=x;
    int column =y;
    while (row>=0 && column>=0)
    {
        if(array[row][column]==1){
            return false;
        }
        row--;
        column--;
    }

    row=x;
    column =y;
    while (row>=0 && column<n)
    {
        if(array[row][column]==1){
            return false;
        }
        row--;
        column++;
    }
    return true;

}   

bool nQueen(int** array, int x, int n){
    if (x>=n)
    {
        return true;
    }
    for (int column = 0; column < n; column++)
    {
        if(isSafe(array,x,column,n)){
            array[x][column]=1;

            if(nQueen(array, x+1, n)){
                return true;
            }
            array[x][column]=0;  //backtracking
        }
    }
    return false;
    
}
int main(){

    int n;
    cout<<"Enter the side value of chase: ";
    cin>>n;
    int ** array=new int*[n];
    for (int i = 0; i < n; i++)
    {
        array[i]=new int[n];
        for(int j=0; j<n; j++){
            array[i][j]=0;
        }
    }
    
    if(nQueen(array,0,n)){
    for (int i = 0; i < n; i++){
        for(int j=0; j<n; j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }
    }
return 0;
}