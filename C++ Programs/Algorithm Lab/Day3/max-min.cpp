#include <iostream>
using namespace std;

void maxMin(int *arr, int start, int end, int &max, int &min)
{
    // if single element present
    if (start == end)
    {
        max = min = arr[start];
        return;
    }
    // if just two element present
    else if (start == end - 1)
    {
        if (arr[start] > arr[end])
        {
            max = arr[start];
            min = arr[end];
        }
        else
        {
            max = arr[end];
            min = arr[start];
        }
    }
    // now the divide and conquer approach
    else
    {
        // find mid postion
        int mid = (start + end) / 2;
        int max_left, min_left, max_right, min_right;
        // divide into sub-problems
        maxMin(arr, 0, mid, max_left, min_left);
        maxMin(arr, mid + 1, end, max_right, min_right);
        // now conquer
        max = max_left > max_right ? max_left : max_right;
        min = min_left < min_right ? min_left : min_right;
    }
}

int main()
{

    int arr[] = {4, 2, 8, 9, 8, 7, 8, 1, 5, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0], min = arr[0];
    maxMin(arr, 0, n - 1, max, min);
    cout << "MAX: " << max << " MIN: " << min << endl;
    return 0;
}