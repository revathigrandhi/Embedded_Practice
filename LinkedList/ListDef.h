/**
 * @file ListDef.h
 * @brief Structure and function declaration
 */
#ifndef __LIST_DEF_H_
#define __LIST_DEF_H_

#include<stdio.h>
#include<stdlib.h>
/**
 * @brief linkedlist data structure
 */
typedef struct Node
{
    int data;
    struct Node *next;
} SLL;

/** Function declarations */
SLL* prepareNode();
void insertAtFront ( SLL **head, SLL *node );
void insertAtPos ( SLL **head, SLL *node, int pos );
void insertAtEnd ( SLL **head, SLL *node );
void printList ( SLL **head );
void printMiddleNode ( SLL **head );
void reverseList ( SLL **head );
void printOneFourthNode ( SLL **head );
void printThreeFourthNode ( SLL **head );
void printBeforeLastNode ( SLL **head );
#endif
