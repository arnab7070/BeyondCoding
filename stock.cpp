#include<iostream>
#include<limits>

using namespace std;
void fillArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
}
bool check(int arr[], int n){
    bool flag  = false;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]>arr[i+1]){
            flag = true;
        }
        else{
            flag = false;
            break;
        }

    }
    return flag;
}
int buy_sell(int arr[], int n){
    int currMaxProfit = INT8_MIN;
    int i,k;
    if (check(arr,n)==true || n == 1)
    {
        return 0;
    }
    
    for (i = 0; i < n-1; i++)
    {
        for (k = i+1; k < n; k++)
        {
            if(arr[k]-arr[i]>currMaxProfit)
            currMaxProfit = arr[k]-arr[i];
        }
        
    }
    return currMaxProfit;
}
int main(){

   int n;
   cout<<"Enter the size of the array: ";
   cin>>n;
   int arr[n];
   fillArray(arr,n);
   cout << "Your total profit will be: " << buy_sell(arr,n);
}