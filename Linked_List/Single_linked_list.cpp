#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class SingleLinkedList
{
private:
    Node *head;

public:
    SingleLinkedList()
    {
        head = NULL;
    }

    void insertAtFirst(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
        
    }

    void insertAtLast(int val)
    {
        Node* newNode = new Node(val);
        if( head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
           temp = temp->next;
        }
        temp->next = newNode; 
    }


    void print()
    {
        Node* temp = head;
        if(head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }

        while ( temp !=  NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        
    }
};


int main()
{
    SingleLinkedList list;
    list.insertAtFirst(2);
    list.insertAtLast(3);
    list.insertAtFirst(1);
    list.insertAtLast(4);

    list.print();
}


