#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
    int Data;
    Node * Next;
};

void insertAtFirst(Node ** Head, int data)
{
    Node * newNode = new Node();
    newNode->Data = data;
    newNode->Next = *Head;

    *Head = newNode;

    cout << data << " is inserted to linkedList " << endl;

}

void display(Node * head)
{
    while(head != NULL)
    {
        cout << head->Data << " ";
        head = head->Next;
    }
    cout << endl;
}


int main()
{
    Node * head = NULL;
    insertAtFirst(&head, 6);
    insertAtFirst(&head, 4);
    insertAtFirst(&head, 2);
    display(head);
}
