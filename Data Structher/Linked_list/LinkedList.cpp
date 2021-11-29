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

//  Add node in front 

Node * insertHead(Node * &head , int key)
{
    Node * tmp = new Node(key);
    tmp->next = head; 
    return tmp;
}

// Insert node at last 

Node * insertTell(Node * head , int key)
{
    Node * tmp = new Node(key);
    Node * ptr = head;
    
    // if list is still empty 

    if(head == NULL)
    {
        tmp->next = head;
    }

    // travers loot till the last Element 

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;
    return head;
}

// insert Node At the given position 

Node * insertMid(Node * head , int key , int location)
{
    Node * ptr = head;
    if(location < 1)
    {
        cout<<"Invalid Location";
    }
    while(location > 0 && ptr->next != NULL)
    {
        ptr = ptr->next;
        location--;    
    }
    Node * tmp = new Node(key);
    tmp->next = ptr->next;
    ptr->next = tmp;
    return head;
}

// function to perform reverse opretion using itretive Aproch 

Node * ReverseList(Node * head)
{
    Node * curr = head;
    Node * prev = NULL;
    Node * next = NULL;
    while(curr != NULL)
    {
        next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }
    return prev;
}

// reverse a linked list with recurtion

Node * ReverseListWithRecurtion(Node * head)
{
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node * NewHead = ReverseListWithRecurtion(head->next);
    head->next->next = head;
    head->next = NULL;
    return NewHead;
}

// Deletion of a node 

Node * Delete(Node * head){
    Node * curr = head;
    Node * prev = NULL;
    while(curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    return head;
}

// find the meddel elemet of a list

int FindMid(Node * head){
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow->data;
}

// Display The given linked List

void print(Node * head)
{
    Node * ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<"->";
        ptr = ptr->next;
    }
    cout<<endl;
}

// Make Cycle  function 
Node * MakeCycle(Node * head , int pos)
{
    Node * ptr = head;
    Node * tmp;
    int count = 1;
    while(ptr->next != NULL)
    {
        if(count == pos)
        {
            tmp = ptr;
        }
        ptr = ptr->next;
        count++;
    }
    ptr->next = tmp;
    return head;
} 

// detect cycle 

bool DetectCycle(Node * head)
{
    Node * slow = head;
    Node * fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}

// Remove the cycle 

Node * RemoveCycle(Node * head)
{
    Node * slow = head;
    Node * fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;
    }while(slow != fast);
    fast = head;
    while(slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
    return head;
}

int main()
{
    Node * head = NULL;
    head = insertHead(head , 3);
    head = insertHead(head , 4);
   // print(head);
    head = insertHead(head , 5);
    //print(head);
    head = insertTell(head , 8);
    head = insertTell(head , 10);
    head = insertMid(head , 11 , 1);
    cout<<"Real LinkList"<<endl;
    print(head);
    int mid = FindMid(head);
    // head = Delete(head);
    //print(head);
    cout<<"Middel Element is : "<<mid<<endl;
    head = MakeCycle(head ,3);
    //print(head);
    if(DetectCycle(head)){
        cout<<"Cycle Present : Enter 1 to remove ";
        int x ;
        cin>>x;
        if(x == 1)
        {
           head =  RemoveCycle(head);
        }
    }
    else{
        cout<<"Cycle is not present";
    }
    print(head);
    return 0;
}
