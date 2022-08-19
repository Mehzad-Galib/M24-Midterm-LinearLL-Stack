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
    int t;
    cin >> t;

    for (int p = 0; p < t; p++)
    {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int q;
        cin >> q;

        int query[q] = {0};

        for (int i = 0; i < q; i++)
        {
            int d;
            cin >> d;

            int sum = 0;
            for (int j = 0; j <= d; j++)
            {
                sum += a[j];
                sum -= b[j];
            }

            if (sum >= 0)
                query[i] = 1;
        }

        printArray(query, q);
        cout << endl;
    }
}