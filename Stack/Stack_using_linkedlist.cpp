
/*-----------------------------Implementation of stack using linked list-----------------------------------*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int value)
    {
        val = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

public:
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (temp == NULL)
        {
            cout << "stack overflow...." << endl;
            return;
        }
        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout << top->val << " is pushed to stack." << endl;
        }
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "stack underflow..." << endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            cout << temp->val << " is popped from stack." << endl;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "stack underflow..." << endl;
            return -1;
        }
        else
            return top->val;
    }

    int isSize()
    {
        return size;
    }

    int isEmpty()
    {
        return top == NULL;
    }
};

int main()
{
    Stack st;
    // st.push(6);
    // st.push(16);
    // st.push(62);
    // st.pop();
    // st.pop();
    // st.pop();
    // st.push(67);
    // st.push(6);
    st.push(-1);
    st.isSize() ? cout << "Top element of stack is: " << st.peek() << endl : cout << "stack is empty..." << endl;
    cout << "stack is empty: " << st.isEmpty() << endl;
    cout << "size of stack is: " << st.isSize() << endl;
}
