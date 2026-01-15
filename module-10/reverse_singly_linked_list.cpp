#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = tail->next;
}

void reverse_linkedin_list(Node *&head, Node *tmp)
{
    if (tmp->next == NULL)
    {
        head = tmp;
        return;
    }

    reverse_linkedin_list(head, tmp->next);
    tmp->next->next = tmp;
    tmp->next = NULL;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_at_tail(head, tail, val);
    }

    reverse_linkedin_list(head, head);
    print_linked_list(head);

    return 0;
}

void print_recerce_recursion(vector<int> prefix, int n)
{
    if (n == 0)
    {
        return;
    }

    cout << prefix[n] << ' ';

    print_recerce_recursion(prefix, n - 1);
}