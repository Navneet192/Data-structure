#include <iostream>
using namespace std;
int countOne(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == 0)
            low = mid + 1;
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
                return (n - mid);
            else
                high = mid - 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {0, 0, 0, 1, 1, 1, 1, 1, 1, 1}, n = 10;
    cout << countOne(arr, n);
    return 0;
}