#include <iostream>
#include <queue>
using namespace std;

// Like stack, can't be printed directly.

int main()
{
    // Construction
    queue<int> q;

    // Adding elements (push)
    q.push(1); // front -> [1] <- back
    q.push(2); // front -> [1,2] <- back
    q.push(3); // front -> [1,2,3] <- back

    // Size of queue
    cout << q.size() << endl; // 3

    // Accessing front and back elements
    cout << "Front element: " << q.front() << endl; // 1
    cout << "Back element: " << q.back() << endl;   // 3

    // Removing elements (pop)
    q.pop(); // Removes first element (1)

    // Check if queue is empty
    cout << q.empty() << endl; // 0 (false)

    // Swapping queues
    queue<int> q1, q2;
    q1.push(10);
    q2.push(20);
    q1.swap(q2); // Swaps contents of q1 and q2

    // Emplace (constructs element in-place while push() copies)
    q.emplace(4); // Adds 4 to the back of the queue

    // Queue traversal (destructive)
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}