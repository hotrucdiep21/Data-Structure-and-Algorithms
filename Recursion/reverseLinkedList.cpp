#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *makeNode(int x) {
    Node *tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

 bool empty(Node *head) {
    return head == NULL;
 }

 void insertLast (Node *&head, int x) {
    Node *tmp = makeNode(x);
    if(head == NULL) {
        head = tmp;
    }
    else
    {
        Node *p = head;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = tmp;
        
    }
    

 }

 void printLinkedList(Node *head) {
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    
 }

Node *reverseLinkedList(Node *p) {
    if(p==NULL||p->next == NULL) {
        return p; 
    }
    Node* head = reverseLinkedList(p->next);
    p->next->next = p;
    p->next = NULL;
    return head;
}

int main() {
    Node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        insertLast(head, i);
    }

    printLinkedList(head);
    cout << endl;
    head = reverseLinkedList(head);
    printLinkedList(head);
    
    return 0;
}