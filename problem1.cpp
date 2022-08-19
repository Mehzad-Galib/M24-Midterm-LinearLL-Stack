#include <bits/stdc++.h>
using namespace std;

void freq_count(int a[], int size)
{
    bool chk[size];
    for (int i = 0; i < size; i++)
    {
        chk[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        if (chk[i] == 1)
        {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                chk[j] = 1;
                count++;
            }
        }
        cout << a[i] << " => " << count << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    freq_count(a, n);
}