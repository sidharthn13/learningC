//program to create a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    struct Node *next;
}Node;
typedef struct LinkedList{
    Node *head;
    Node *current;
}LinkedList;

LinkedList createLL(int headValue){
    Node *headNode = (Node *)malloc(8);
    (*headNode).value = headValue;
    (*headNode).next = NULL;
    LinkedList ll = {headNode, headNode};
    return ll;
}

void main(){
    LinkedList ll1 = createLL(0);
    printf("the memory address of the head node is : %p\n", (void*)ll1.head);
    printf("the value of the head node is: %d\n", (*ll1.head).value);
}