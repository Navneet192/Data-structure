#include <iostream>
using namespace std;
int productArr(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
    }
    return product;
}
int main()
{
    int n;
    cout << "Enter The Size of Array:";
    cin >> n;

    int arr[n];
    cout << "Enter The Elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Product: " << productArr(arr, n) << endl;
}