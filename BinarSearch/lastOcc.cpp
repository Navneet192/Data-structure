#include <iostream>
using namespace std;

int bSearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid] > x)
            high = mid - 1;
        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 60, 60, 60, 80, 90, 100}, n = 10;
    int x = 60;
    cout << bSearch(arr, n, x);
    return 0;
}
