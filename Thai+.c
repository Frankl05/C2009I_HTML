#include <stdio.h>

typedef struct {
	char name[25];
	char nationality[25];
	int birth_year;
	float net_worth;
};
void printMenu();
void toContinue();
void inputPerson();

int main(void){
	int i, n, m, b, l;
	char c;
	printMenu();
	do {
		printf("Please enter your selection: ");
		scanf("%d", &i);
		switch (i){
			case 1:
				inputPerson();
				
		}
	} while (i<1 && i>7);
	printf("You have selected %d.\n", i);
	switch (i){
		case 7:
			break;
		default:
			do {
				toContinue();
				scanf(" %c", &c);
			} while(c != 'y' && c != 'Y' && c != 'n' && c != 'N' && c != 'c' && c !='C');
			switch (c){
				case 'Y':
				case 'y':
					main();
				case 'N':
				case 'n':
					break;
				case 'C':
				case 'c':
					system("cls");
					main();
			}
	}
}

void printMenu(){
	printf("+------------------------------------------------------------------+\n");
	printf("|                 BILLIONAIRES PROFILE MANAGEMENT PROGRAM                      |\n");
	printf("+------------------------------------------------------------------+\n");
	printf("|1. Input |2. Sort |3. Analyze |4. Find |5. Save |6. Open |7. Exit |\n");
	printf("+------------------------------------------------------------------+\n");
}

void toContinue(){
	printf("Do you want to continue ?\n");
	printf("- Yes, I do. (press 'y', 'Y')\n");
	printf("- No, I don't. (press 'n', 'N')\n");
	printf("- Please clear the screen ! (press 'c', 'C')\n");
	printf("Your choice:\n");
}

void inputPerson(){
	printf("Name: ");
	scanf("%d \n", &n);
	printf("Nationality: ");
	scanf("%d \n", &m);
	printf("Birth Year: ");
	scanf("%d \n", &b);
	printf("Net worth: ");
	scanf("%d \n", &l);
}


