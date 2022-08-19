#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];

    int arr[row * col];
    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
            arr[cnt] = a[i][j];
            cnt++;
        }
    }

    for (int i = 0; i < row * col; i++)
    {
        for (int j = i + 1; j < row * col; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = -1;
            }
        }
    }
    cout << endl;
    int tmp = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i + tmp] << " ";
            tmp++;
        }
        cout << endl;
        tmp--;
    }
}