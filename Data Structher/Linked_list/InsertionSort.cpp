#include<iostream>
using namespace std;

class Node {
    public: 
        int data;
        Node * next;
        Node(int d){
            data = d;
            next = NULL;
        }
}; 

Node* Insert(Node *  &head , int key){
    Node * tmp = new Node(key);
    if(head == NULL){
        head = tmp;
        return head;
    }
    Node * ptr = head;

    while(ptr -> next != NULL){
        ptr = ptr->next;
    }

    ptr->next = tmp;

    return head;
}
void Print(Node  * head){

    Node * ptr = head;
    while(ptr != NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<endl;
}
int main()
{
    Node * head = NULL;
    Insert(head , 3);
    Insert(head , 4);
    Insert(head , 2);
    Insert(head , 6);
    Print(head);
    return 0;
}