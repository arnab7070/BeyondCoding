#include<iostream>
using namespace std;
int linearSearch(int array[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (array[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}
int main(){

    int n;
    cout<<"Enter your data limit: ";
    cin>>n;
    cout<<"Now enter your values:"<<endl;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int key;
    cout<<"Enter the integer you want to find out: ";
    cin>>key;
    cout<<"The value stored in the position of: "<<linearSearch(array,n,key)<<endl;

return 0;
}