#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int choice;
	choice = 0;

	while(choice != random_number) {
	printf("choisissez un nombre entre 1 et 100\n");
	scanf("%d", &choice);
	if(choice > random_number){
	printf("c'est moins !\n");}

	else if(choice < random_number) {
	printf("c'est plus !\n");}

	else printf("Gagnée !\n");

}

	return 0;
}
