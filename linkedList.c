
#include "linkedList.h"

struct node* createNode(struct data *dta)
{
	struct node *nd = malloc(sizeof(struct node));
	nd -> next = NULL;
	nd -> dta = dta;

	return nd;
}


struct linkedList* createLinkedList()
{

	struct linkedList *ll = malloc(sizeof(struct linkedList));
	ll -> head = NULL;

	return ll;

}

void addFront(struct linkedList *ll,struct data *dta)
{

	struct node *nd = createNode(dta);
	nd -> next = ll -> head;
	ll -> head = nd;

}

void addBack(struct linkedList *ll,struct data *dta)
{

	struct node *nd = createNode(dta);
	struct node *temp = ll -> head;
	while(temp -> next != NULL)
	{

		temp = temp -> next;
	}
	temp -> next = nd;

}

void removeFront(struct linkedList *ll)
{

	struct node *temp = ll -> head;
	ll -> head = ll -> head -> next;

	// we need to clean temp -> dta ????

	free(temp);

}

void removeBack(struct linkedList *ll)
{

        struct node *temp = ll -> head;

	// To do : if ll has only 1 element or not at all has any element ???

        while((temp -> next) -> next != NULL)
        {

                temp = temp -> next;
        }
	free(temp -> next);
	temp -> next = NULL;



}

int searchLinkedList(struct linkedList *ll, struct data *dta)
{

	int i = 0;
	struct node *temp = ll->head;
	while(temp != NULL)
	{

		if(compareData(temp->dta, dta) == 1)
		{

			return ++i;

		}
		temp = temp -> next;
		++i;

	}
	return -1;

}

void printLinkedList(struct linkedList *ll)
{

	struct node *temp  = ll -> head;
	while(temp != NULL)
	{

		printData(temp -> dta);
		temp = temp -> next;

	}

}

void cleanLinkedList(struct linkedList *ll)
{

	struct node *temp = ll -> head;
	while(temp != NULL)
	{

		ll -> head = ll->head-> next;
		free(temp -> dta);
		free(temp);
		temp = ll -> head;
	}

	free(ll);

}
