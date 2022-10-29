#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) //this is used to print all the elem in a lili
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

Node *reverse(Node *head) //reverses all the elements of a lili
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node *recrevrse(Node *head) //reverse all elements recursively.
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rest_head = recrevrse(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

Node *revrecreverse(Node *curr, Node *prev) //yet another new way to reverse all elements recursively.
{
    if (curr == NULL)
    {
        return prev;
    }
    Node *next = curr->next;
    curr->next = prev;
    return revrecreverse(next, curr);
}

int main()
{
    Node *head = new Node(10); //this is a better way to makeing a lili
    head->next = new Node(20); //without using temp variables
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = reverse(head);
    printlist(head);
}