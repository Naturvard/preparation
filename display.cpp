// To create a linked list and display it
#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    // Creating constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void display(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
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
    tail->next=NULL;
    display(head);
}