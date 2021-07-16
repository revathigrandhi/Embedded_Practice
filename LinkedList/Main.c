/**
 * program to perform linkedlist operations
 */
#include"ListDef.h"

int main()
{
   int choice;
   SLL **head = NULL;
   SLL *node = NULL;
   int pos;
   head = calloc ( 1, sizeof ( SLL *) );
   if ( NULL == head )
   {
       printf("memory allocation failed for Head pointer\n");
       return 0;
   }

Display:
   printf ( "\nChoose options from below\n\
	     1. Insert at Front\n\
	     2. Insert at nth position\n\
	     3. Insert at the end\n\
	     4. Print the list\n\
	     5. Find middle node\n\
	     6. Reverse the Linked List\n\
	     7. Find 1/4 th node\n\
	     8. Find 3/4t node\n\
	     9. Print before last node\n\
	     10. Exit\n ");

  scanf("%d",&choice);

  switch ( choice )
  {
      case 1: node = prepareNode();  
	      insertAtFront ( head, node );
	      break;

      case 2: node = prepareNode();
	      printf("Enter the Position to insert the node\n");
	      scanf("%d",&pos );
	      insertAtPos( head, node, pos );
	      break;

      case 3: node = prepareNode();
	      insertAtEnd ( head, node );
	      break;
  
      case 4: printList ( head );
	      break;
  
      case 5: printMiddleNode ( head );
	      break;
  
      case 6: reverseList ( head );
	      break;

      case 7: printOneFourthNode ( head );
	      break;
  
      case 8: printThreeFourthNode ( head );
	      break;

      case 9: printBeforeLastNode ( head );
	      break;

      case 10: exit(0);
  }

  goto Display;

}
