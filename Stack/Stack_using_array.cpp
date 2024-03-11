/*----------------------------Implementation of stack using array---------------------------------------*/

#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int n)
    {
        if (size - top > 1)
        {
            arr[++top] = n;
            cout << "Pushed " << arr[top] << " into the stack." << endl;
        }
        else
            cout << "stack overflow" << endl;
    }

    void pop()
    {
        if (top > -1)
        {
            cout << "Popped " << arr[top] << " from the stack." << endl;
            top--;
        }
        else
            cout << "stack underflow" << endl;
    }

    int peek()
    {
        if (top > -1)
            return arr[top];
        // else
        //     return -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int isSize()
    {
        return top + 1;
    }
};

int main()
{
    Stack st(6);
    st.push(-1);
    st.push(6);
    st.push(3);
    cout << "size of stack is: " << st.isSize() << endl;
    st.push(8);
    st.pop();
    st.push(90);
    st.pop();
    st.pop();
    st.pop();
    cout << "stack is empty: " << st.isEmpty() << endl;
    st.isSize() ? cout << "Top of stack is: " << st.peek() << endl : cout << "stack is empty..." << endl;
    return 0;
}
