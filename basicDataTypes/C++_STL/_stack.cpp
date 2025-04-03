#include <iostream>
#include <stack>
using namespace std;

// Can't be printed directly.

int main()
{
    // Construction
    stack<int> st;

    // Adds element to top
    st.push(10); // 10
    st.push(20); // 10 20
    st.push(30); // 10 20 30

    // Current size
    cout << st.size() << endl; // 3

    // Get top element
    cout << st.top() << endl; // 30

    // Checks if stack is empty
    cout << (st.empty() ? "Yes" : "No") << endl; // No

    // Removes top element
    while (!st.empty())
    {
        cout << "Popped: " << st.top() << endl; // 30\n20\n10\n
        st.pop();
    }

    // Stack is now empty
    cout << (st.empty() ? "Yes" : "No") << endl; // Yes

    return 0;
}