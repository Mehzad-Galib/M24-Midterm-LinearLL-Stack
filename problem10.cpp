#include <bits/stdc++.h>
#include "GALIB_STACK.h"

using namespace std;

int main()
{

    Stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

    cout << st.mid() << endl;
}