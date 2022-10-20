#include <iostream>
using namespace std;
void displayArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        bool check = true; //Optimization code
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                check = false;
            }
        }
        if(check==true){
            break;
        }
    }
    //Display the sorted array
    displayArray(arr,n);
    
}

void selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[minIndex]>arr[j]){
                minIndex = j; // Updated the minimum index
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    //Display the sorted array
    displayArray(arr,n);
}

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    //Display the sorted array
    displayArray(arr,n);
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n]; // Declared a N sized array
    cout<<"Now enter the elements of the array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"1. Bubble Sort\n"<<"2. Selection Sort\n"<<"3. Insertion Sort\n"<<"0. Exit"<<endl;
    
    while(true){
        int option;
        cout<<"Enter the option: ";
        cin>>option;
        switch (option)
        {
            case 1:
                bubbleSort(arr,n);
                break;
            case 2:
                selectionSort(arr,n);
                break;
            case 3:
                insertionSort(arr,n);
                break;

            default:
                cout<<"Thanks for using sorting algorithms."<<endl;
                exit(0);
        }
    }

    return 0;
}