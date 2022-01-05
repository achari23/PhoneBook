#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "contact_header.h"

Contact * read_contact_book(FILE* Contact_Book);

int main(int argc, char* argv[]) {

	//Contact * head_Contact = (Contact*) malloc(sizeof(head_Contact));
	FILE* Contact_Book = fopen("contact_book.txt", "r");
	if (Contact_Book != NULL) {
		Contact * contacts_list = NULL;
		contacts_list = read_contact_book(Contact_Book);
	}
	int input = 0;
	int isDone = 0;
	while (!isDone) {
		printf("What would you like to do? type: \n0: print all contacts to terminal\n1: add a contact\n2: delete a contact\n3: search for contacts\n4: print all contacts to file\n9: exit\n");
		printf("type your option here: ");
		scanf("%d", &input);
		printf("\n");
		switch(input) {
			case 0:
				break;
			case 1:
				break;
			case 2:
			       	break;
			case 3: 
				break;
			case 4: 
				break;
			case 9:
				printf("\nThanks for using Anand's Contact service!\n");
				isDone = 1;
				break;
			default: 
				printf("Option does not exist, please try again\n");
				break;
		}
	}

	return EXIT_SUCCESS;
}
Contact * read_contact_book(FILE* Contact_Book) {
	return NULL;
}
