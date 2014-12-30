#include "linkedList.h"
#include <stdlib.h>

int main(int argc, char* argv[])
{

	// build linked list using command line argument, cmd line argument
	//struct data *dta4 = createData(atof(argv[1]), atof(argv[2]));
	//struct data *dta = createData(1111,3333);


	//struct data *dta1 = createData(11, 32);
	//struct data *dta2 = createData(12,1);

	//struct linkedList *ll = createLinkedList();

/*	addFront(ll, dta);
	addFront(ll, dta1);
	addFront(ll, dta2);
	addFront(ll, dta4);
*/
	int i = 0;
	if(argc < 2)
	{

		printf("%s num args \n", argv[0]);
		exit(1); // it will quit the program itself.... different than break

		/// IMPORTANT : if we have created pointers and allocated memory before this point and haven't deallocated, it will be memory leak


	}

	struct data *dta = createData(1111,3333);
	struct linkedList *ll = createLinkedList();

	for(i = 0; i < atoi(argv[1]); ++i)
	{

		addFront(ll, createData(atof(argv[(2 * i) + 2]), atof(argv[(2 * i) + 3])));

	}

	//removeFront(ll);
	//addBack(ll, dta);
	printLinkedList(ll);
	printf("%d\n", searchLinkedList(ll, dta));
	//removeBack(ll);
	//printf("After removeBack\n");
	//printLinkedList(ll);

	cleanLinkedList(ll);

	return 0;
}
