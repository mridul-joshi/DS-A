#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n)
{
    if (n == 0 || n == 1)
        return n;
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    k = removeDuplicates(arr, n);
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    return 0;
}