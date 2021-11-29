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

void Print(Node * head){
    Node * ptr = head; 

    while(ptr != NULL){
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<endl;
}

Node * Merger2(Node * head1 , Node * head2){
    if(head1 == NULL){
        return head2;
    }

    if(head2 == NULL){
        return head1;
    }
    Node * h3 ;
    if(head1->data < head2->data){
        h3 = head1;
        h3->next = Merger2(head1->next , head2);
    }
    else{
        h3 = head2;
        h3->next = Merger2(head1 , head2->next);
    }
    return h3;
}

Node * Merge(Node * head1 , Node * head2){

    Node* ptr1 = head1;
    Node* ptr2 = head2;

    Node * ans = NULL; // as a head node of a marge list;
    Node * ptr = NULL;

    while(ptr1 != NULL && ptr2 != NULL){

        

        if(ptr1->data < ptr2->data){
            if(ptr == NULL){
                ptr = new Node(ptr1->data);
                ans = ptr; // Make ans as a first node like head;
            }
            else{
                ptr->next = new Node(ptr1->data);
                ptr = ptr->next;
            }
            ptr1 = ptr1->next;
        }
        else{

            if(ptr == NULL){
                ptr = new Node(ptr2->data);
                ans = ptr; // Make ans as a first node like head; 
            }
            else{
                ptr->next = new Node(ptr2->data);
                ptr = ptr->next;
            }

             ptr2 = ptr2->next;
        }
    }
    while(ptr1 != NULL){
       // Insert(ans , ptr1->data);
       ptr->next = new Node(ptr1->data);
       ptr = ptr->next;
        ptr1 = ptr1->next;
    }
    while(ptr2 != NULL){
        //Insert(ans , ptr2->data);
        ptr->next = new Node(ptr2->data);
        ptr = ptr->next;
        ptr2 = ptr2->next;
    }
    return ans;
}

int main(){

    Node * head1 = NULL;
    Node * head2 = NULL;
    Insert(head1 , 2);
    Insert(head1 , 4);
    Insert(head1 , 6);
    Insert(head1 , 8);
    Insert(head2 , 3);
    Insert(head2 , 5);
    Insert(head2 , 7);
    Insert(head2 , 9);

    cout<<"First List : "<<endl;
    Print(head1);
    cout<<"Second List : "<<endl;
    Print(head2);

    //Node * ans = Merge(head1 , head2);
    Node * ans = Merger2(head1 , head2);
    Print(ans);
    return 0;
}