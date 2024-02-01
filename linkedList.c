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
void insertAtBeginning(LinkedList *linkedListInstance, int nodeValue){
    Node *nodeToBeInserted = (Node*)malloc(sizeof(Node));
    (*nodeToBeInserted).value = nodeValue;
    (*nodeToBeInserted).next = (*linkedListInstance).head;
    (*linkedListInstance).head = nodeToBeInserted;
}

void appendToLinkedList(LinkedList *linkedListInstance,int nodeValue){
    Node *nodeToAppend = (Node*)malloc(sizeof(Node));
    (*nodeToAppend).value = nodeValue;
    (*nodeToAppend).next = NULL;
    (*(*linkedListInstance).current).next = nodeToAppend;                //has complexity O(1) as tail node is used
    (*linkedListInstance).current = nodeToAppend;
}

void deleteAtIndex(LinkedList *linkedListInstance, int index){
    int counter = 0;
    Node *curr = (*linkedListInstance).head;
    while( counter <= index && curr){
        if(index == 0){
            (*linkedListInstance).head = (*curr).next;
            free(curr);
            return;
        }
        else if(counter+1 == index && (*(*curr).next).next){
            Node *nodeToBeFreed = (*curr).next;
            (*curr).next = (*(*curr).next).next;
            free(nodeToBeFreed);
            return;
        }
        else if(counter+1 == index && !(*(*curr).next).next){
            (*linkedListInstance).current = curr;
            free((*curr).next);
            (*curr).next = NULL;
            return;
        }
        else{
            counter++;
            curr = (*curr).next;
        }
    }
    printf("invalid index value. Linked list does not have that many elements.\n");
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
    insertAtBeginning(&ll1,-1);
    appendToLinkedList(&ll1,1);
    appendToLinkedList(&ll1,2);
    appendToLinkedList(&ll1,3);
    appendToLinkedList(&ll1,4);
    printLinkedList(ll1);
    // printf("the head node of linked list is: %d\n", (*ll1.head).value);
    // printf("the tail node of linked list is: %d\n", (*ll1.current).value);

    deleteAtIndex(&ll1, 1);
    deleteAtIndex(&ll1, 1);
    deleteAtIndex(&ll1, 3);
    deleteAtIndex(&ll1, 1);
    deleteAtIndex(&ll1, 0);
    deleteAtIndex(&ll1, 2);
    printf("the head node of linked list is: %d\n", (*ll1.head).value);
    printf("the tail node of linked list is: %d\n", (*ll1.current).value);
    printLinkedList(ll1);


}
