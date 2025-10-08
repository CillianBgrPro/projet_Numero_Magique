#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//J'intègre les librairies

int main(){
//j'initialise ma fonction

	srand(time(NULL));
	int random_number = rand() % 100 + 1;
//J'ajoute le code de la consigne qui permet de générer un chiffre aléatoire entre 1 et 100 et de l'intégrer dans ma variable random_number
	int choice;
// j'initialise ma variable
	choice = 0;
// j'attribue une valeur à ma variable

	while(choice != random_number) {
//je crée ma boucle while pour que le jeu se répète tant que je n'ai pas trouvé le bon numéro
	printf("choisissez un nombre entre 1 et 100\n");
	scanf("%d", &choice);
//Je demande au joueur d'entrer un chiffre et l'intègre dans ma variable choice grace au scanf
	if(choice > random_number){
//Je créer une première condition qui fait en sorte que si le chiffre entré par l'utilisateur et stocké dans ma variable choice est supérieur au chiffre aléatoire généré, cela renvoie le printf ci dessous
	printf("c'est moins !\n");}
//printf pour dire que le chiffre aléatoire est inférieur au chiffre rentré par l'utilisateur. Ce printf s'execute uniquement si la condition au dessus est valide

	else if(choice < random_number) {
// Je créer ma deuxième condition qui fait en sorte que si le chiffre entré par l'utilisateur est inférieur au chiffre généré aléatoirement , le printf ci dessous s'éxecute
	printf("c'est plus !\n");}
//si la condition au dessus est valide le printf "c'est plus" s'execute
	else printf("Gagnée !\n");
//Si aucune des conditions ci dessus n'est valide alors celle ci s'execute et cela signifie que le joueur à trouvé le chiffre généré aléatoirement.

}

	return 0;
}
