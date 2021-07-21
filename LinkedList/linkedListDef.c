#include"ListDef.h"

SLL* prepareNode ( )
{
    SLL *new = calloc ( 1, sizeof ( SLL ));
    if ( NULL == new )
    {
        printf("Memory allocation failed for node creation");
        return NULL;
    }

    printf("Enter the data\n");
    scanf("%d", &(new->data));
    new->next = NULL;
    return new;
}


void insertAtFront( SLL **head, SLL *node )
{
    if ( (*head)== NULL )
    {
         *head = node;
    }
    else
    {
        node->next = *head;
        *head = node;
    }
    return;
}



void insertAtPos ( SLL **head, SLL *node, int pos )
{
    int i = 0;
    SLL *temp = *head;
    if ( pos == 0 )
    {
       insertAtFront( head, node );
    }
    else
    {
        while( temp && ( i < pos-1 ) )
	{
	    i++;
	    temp = temp->next;
	}
        if ( temp == NULL )
	{
	    printf("Position %d is not present in the LL", pos);
	    return;
	}

	node->next = temp->next;
	temp->next = node;
    }
    return;
}


void insertAtEnd ( SLL **head, SLL *node )
{
    SLL *temp = *head;
    if ( NULL == temp )
    {
        insertAtFront ( head, node );
    }
    /** iterating till the end of loop reaches */
    while ( temp->next  )
	    temp = temp->next;

    temp->next = node;
    return;
}


void printList ( SLL **head )
{
    SLL *temp = *head;
    if ( NULL == temp )
    {
        printf("The list is empty!!\n");
        return;
    }
    while( temp )
    {
        printf( "%d\t", temp->data );
        temp = temp->next;
    }
    printf("\n");
    return;
}


void printMiddleNode ( SLL **head )
{
    if ( NULL == *head )
    {
        printf("The list is empty!!\n");
	return;
    }
    else if ( ( NULL == (*head)->next) || ( NULL == (*head)->next->next ) )
    {
	printf("Middle node is: %d",(*head)->data );
        return;
    }
    else
    {
        SLL *sptr = *head;
        SLL *fptr = *head;
        while ( fptr && fptr->next )
        {
            sptr = sptr->next;
            fptr = fptr->next->next;
        }
        printf("The middle node is %d",sptr->data );
    }
    return;
}

void reverseList ( SLL **head )
{
    SLL* prev = NULL;
    SLL* current = *head;
    SLL* next = NULL;
    while ( current != NULL) 
    {
        next = current->next;
 
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head = prev;
    return;
}


void printOneFourthNode ( SLL **head )
{
    SLL* sptr = *head;
    SLL* fptr = *head;
    int cnt;
    /** for verifying whether list has four nodes or not */
    while ( sptr && cnt < 4 )
    {
        cnt++;
        sptr=sptr->next;
    }

    if ( NULL == sptr )
    {
        printf("List is having less than  four nodes!!\n");
        return;
    }

    sptr = *head; /* Assigning head ptr */
    while( fptr && fptr->next && fptr->next->next )
    {
       fptr = fptr->next->next->next; 
       
    
    }
}


void printBeforeLastNode ( SLL **head )
{
    SLL *temp = *head;

    if( NULL == temp )
    {
        printf("The list is empty\n");
    }
    else if ( NULL == temp->next )
    {
       printf("The list has only one node!!!\n");
    }
    else
    {
        while( temp->next->next != NULL )
	{
	    temp = temp->next;
	}
        printf("the last but one node is: %d\n",temp->data );
    }
}
