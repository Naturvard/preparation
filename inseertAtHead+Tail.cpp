#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // Creating a constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// for printing the values
void display(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

void insertAtHead(Node *&head, int d)
{
    Node *curr = new Node(d);
    curr->next = head;
    head = curr;
}
void insertAtTail(Node *&tail,int d){
    Node *curr=new Node(d);
    tail->next=curr;
    tail=curr;


}
int main()
{
    Node *head = new Node(1);
    Node *tail = new Node(5);
    Node *node1 = new Node(2);
    Node *node2 = new Node(3);
    Node *node3 = new Node(4);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = tail;
    tail->next = NULL;
    insertAtHead(head, 0);
    insertAtTail(tail,6);
    display(head);
}