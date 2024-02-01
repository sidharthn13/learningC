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
void appendToLinkedList(LinkedList *linkedListInstance,int nodeValue){
    Node *nodeToAppend = (Node*)malloc(sizeof(Node));
    (*nodeToAppend).value = nodeValue;
    (*nodeToAppend).next = NULL;
    (*(*linkedListInstance).current).next = nodeToAppend;
    (*linkedListInstance).current = nodeToAppend;
}

void printLinkedList(LinkedList linkedListInstance){                     //linked list instance is passed by value and not by reference
    Node *curr = linkedListInstance.head;                               //but head and current node markers are passed by pointer values
    while(curr){
        printf("%d->",(*curr).value);
        curr = (*curr).next;
    }
    printf("\n");
}

void main(){
    LinkedList ll1 = createLL(0);
    appendToLinkedList(&ll1,1);
    appendToLinkedList(&ll1,2);
    appendToLinkedList(&ll1,3);
    appendToLinkedList(&ll1,4);
    // printf("the memory address of the head node is : %p\n", (void*)ll1.head);
    // printf("the value of the head node is: %d\n", (*ll1.head).value);
    printLinkedList(ll1);
}
