#include <iostream>

using namespace std;

int removeKey(int arr[], int n, int key)
{
    int i, j;
    for (i = 0, j = 0; j < n; j++)
    {
        if (arr[j] != key)
        {
            arr[i] = arr[j];
            i++;
        }
    }
    return i;
}

int main()
{
    int n, k, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> key;
    k = removeKey(arr, n, key);
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
    return 0;
}