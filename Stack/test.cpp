#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter no of elements to rotate ";
    cin >> r;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp[r];
    for (int i = 0; i < r; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - r; i++)
    {
        arr[i] = arr[i + r];
    }
    for (int i = 0; i < r; i++)
    {
        arr[n - r + i] = temp[i];
    }
    cout << "The rotated array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}