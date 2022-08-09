#include <iostream>
using namespace std;

int binarySearch(int arr[], int n)
{
    int s = 0;
    int e = n;
    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s; 
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << binarySearch(arr, n) << endl;

    return 0;
}
