#include <iostream>

using namespace std;

void shuffle(int arr[], int n)
{
    int res[n], k = 0;
    for (int i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        res[k++] = arr[i];
        res[k++] = arr[j];
    }

    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
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
    int res[n];
    shuffle(arr, n);
    return 0;
}