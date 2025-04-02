#include <iostream>
#include <vector>
using namespace std;
void vecprint(vector<int> v)
{
    if (v.empty())
    {
        cout << "empty" << endl;
        return;
    }
    for (const auto &a : v)
        cout << a << ' ';
    cout << endl;
    return;
}
int a[5] = {1, 2, 3, 4, 5};

int main()
{
    // Construction
    vector<int> v;            // empty
    vector<int> v2(10);       // 0 0 0 0 0 0 0 0 0 0
    vector<int> v3(10, 2);    // 2 2 2 2 2 2 2 2 2 2
    vector<int> v4(a, a + 5); // 1 2 3 4 5
    vector<int> v5{5, 4, 3, 2, 1};

    // Iterator
    vector<int>::iterator it;

    // Basic Operations
    cout << v.empty() << endl; // 1
    cout << v2.size() << endl; // 10
    cout << v4[3] << endl;     // 4
    // Note that the next method is "reserve", not "reverse"! There's no method "reverse" in vector.
    v3.reserve(20);                // still 10 2s, but
    cout << v3.capacity() << endl; // this should be 20, while size remains 10.
    v3.resize(5);                  // 2 2 2 2 2, simply truncate.
    cout << v4.front() << endl;    // 1
    cout << v4.back() << endl;     // 5
    v4.push_back(6);               // 1 2 3 4 5 6
    it = v4.begin();
    v4.insert(it, 0); // 0 1 2 3 4 5 6, this means "make the pos of it to the value"
    v4.pop_back();    // 0 1 2 3 4 5
    it = v4.end() - 1;
    v4.erase(it);                         // 0 1 2 3 4, this method returns the last iterator that is deleted
    v4.erase(v4.begin(), v4.begin() + 3); // 3 4
    v4.clear();                           // empty

    // Sorting
    sort(v5.begin(), v5.end());                 // this is by default less<int>()
    sort(v5.begin(), v5.end(), greater<int>()); // cmp is recommended anyway
}