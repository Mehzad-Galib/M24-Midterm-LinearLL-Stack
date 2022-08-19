#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    int m, n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int c[n];

    int l, k = 0;
    int j;

    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (b[j] == a[i])
                break;
        }
        if (j == m)
        {
            for (l = 0; l < k; l++)
            {
                if (c[l] == a[i])
                    break;
            }
            if (l == k)
            {
                c[k] = a[i];
                k++;
            }
        }
    }

    printArray(c, k);
}