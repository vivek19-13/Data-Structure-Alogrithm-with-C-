#include<stdio.h>
#include <stdlib.h>
#define MAX 4

typedef struct Node {
    int value ;
    struct Node * next;
}Node;

typedef struct List{
    Node * head;
}List;

List * adjList[MAX] = {0};

void addList(int s , int d)
{
    Node * src ;
    if(adjList[s]->head == NULL){
        src = (Node *)malloc(sizeof(Node));
        src->value = s;
        src->next = NULL;
        adjList[s]->head = src;
    }
    Node * des ;
    des = (Node * )malloc(sizeof(Node));
    des->value = d;
    des->next = NULL;
    Node * tmp = adjList[s]->head;

    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = des;
}

int main(){
    int i;
    for(i=0; i<MAX; i++)
    {
        adjList[i] = (List * )malloc(sizeof(List));
        adjList[i]->head = NULL;
    }
    addList(0,1);
    addList(0,3);
    addList(1,2);
    printf("Done!\n");
    return 0;
}