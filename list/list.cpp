#include <cstdlib>
#include <cstdio>
#include <cassert>
#include "list.h"

static Node *createNode(int data, Node *next) {

    Node *p = malloc(sizeof(Node));
    assert(p );
    p->data = data;
    p->next = next;

    return p;

}

List::List() {

    // dummy
    pList->ptr = createNode(-1, NULL);

}

List::~List() {

    Node *p = pList->ptr;
    while(p ) {
        Node *tmp = p;
        p = p->next;
        free(tmp);
    }

}

void List::insertFirstNode(int data) {

    pList->ptr->next = createNode(data, pList->ptr->next);

}

void List::insertNode(int prevData, int data) {

    Node *ptr = pList->ptr->next;
    while(ptr != NULL) {
        if(ptr->data == prevData) {
            break;
        }
        
        ptr = ptr->next;
    }

    if(ptr ) {  //found
        ptr->next = createNode(data, ptr->next);
    }

}

void List::deleteNode(int data) {

    Node *ptr1 = pList->ptr->next;
    Node *ptr2 = pList->ptr;

    while(ptr1 ) {
        if(ptr1->data == data) {
            break;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if(ptr1 ) {
        ptr2->next = ptr1->next;
        free(ptr1);
    }

}

void List::pirntList() {

    Node *p = pList->ptr->next;
    printf("[ ");
    while(p ){
        printf("%d", p->data);
        // if (p->next ) {
        //     printf(", ");
        // } else {
        //     printf(" ]\n");
        // }
        printf(  (p->next) ? ", " : " ]\n");
        p = p->next;
    }

}
