// Coder : Adavik Shukla

#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;
    
    //constructor
    node(int data) {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~node() {
        int value = this->data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this-next = NULL;
        }
    }
};

void insertAtHead(node* &head, int d) {
    //new node creation
    node* temp = new node(d);
    temp->next =  head;
    head = temp;
}

void insertAtTail(node* &tail, int d) {
    //new node creation
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPos(node* &head, node* &tail, int pos, int d) {
    //first position me insert krna h
    if(pos == 1) {
        insertAtHead(head, d);
        return;
    }

    //insert at last postition
    if(temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    //insert at any position
    node* temp = head;
    int c = 1;
    while(c < pos-1) {
        temp = temp->next;
        c++;
    }

    node* inserttemp = new node(d);
    inserttemp->next = temp->next;
    temp->next = inserttemp;

}

void deleteNode(node* &head, int pos) {
    //for first position
    if(pos == 1) {
        node* temp = head;
        head = head->next;

        //memory free
        temp->next = NULL;
        delete temp;
    }
    else {
        node* curr = head;
        node* prev = NULL;

        int c = 1;
        while(c <= pos) {
            prev = curr;
            curr = curr->next;
            c++;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(node* &head) {
    //traversing
    node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next; 
    }
    cout << endl;
}

int main() {
    node* nd = new node(10);

    // cout << nd->data << endl;
    // cout << nd->next << endl;

    //head pointed to nd
    node* head = nd;
    node* tail = nd;
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtPos(head, tail, 4, 22);
    print(head);
    return 0;
}
