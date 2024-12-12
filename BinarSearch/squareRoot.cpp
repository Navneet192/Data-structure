#include <iostream>
using namespace std;
int sqRoot(int n)
{
    int low = 0, high = n, ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sqr = mid * mid;
        if (mid == n)
        {
            return mid;
        }
        else if (sqr > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main()
{
    cout << sqRoot(100);
    return 0;
}