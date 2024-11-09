#include<bits/stdc++.h>
using namespace std;

class Node 
{
    public:
    int data;
    Node * next;
    Node * prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

class DoubleLinkedList{
    public:
    Node * head;

    DoubleLinkedList(){
        head = NULL;
    }

    void insertAtHead(int value)
    {
        Node * newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void insertAtEnd(int value)
    {
        Node* newNode  = new Node(value);


        Node* temp = head;
        while ( temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        
    }

    void Display()
    {
        Node * temp =  head;
        while ( temp != NULL)
        {
            cout << " List is :" << temp->data << " ";
            temp = temp->next;
        }
    }

};

int main()
{
    DoubleLinkedList list;
    list.insertAtEnd(4);
    list.insertAtHead(3);
    list.insertAtHead(2);
    list.insertAtHead(1);

    list.Display();

}
