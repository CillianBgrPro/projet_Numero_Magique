#include <stdlib.h>
#include <stdio.h>
#include <time.h>
//j'importe les librairies

int main(){
//j'initialise ma fonction


	srand(time(NULL));
	int random_number = rand() % 100 + 1; 		//J'ajoute le code de la consigne qui permet de générer un chiffre aléatoire entre 1 et 100 et de l'intégrer dans ma variable random_number
	int choice;		//j'initialise ma variable
	char term;		//J'initialise la seconde variable qui servira à vérifier si la saisie entrée par l'utilisateur est bien une valeur numérique
	choice = 0;		// j'attribue une valeur à ma variable choice initialisé plus tot 

	while(choice != random_number) {		//je crée ma boucle while pour que le jeu se répète tant que je n'ai pas trouvé le bon numéro
		printf("choisissez un nombre entre 1 et 100\n");		//Je demande au joueur d'entrer un chiffre et l'intègre dans ma variable choice grace au scanf
		
		if(scanf("%d%c", &choice, &term) != 2 || term != '\n'){			//je créer une première condition qui vérifie si la saisie de l'utilisateur est une valeur numérique
			
			printf("Saisissez un caractère valide ! (valeur numérique)\n");
			printf("⚠️  fin du programme !\n");
			exit(0); 	//si la valeur saisie n'est pas numérique cela éxecute les deux printf ci-dessus, puis met fin au programme grace au exit(0)
}
		else{		//Si la valeur saisie est une valeur numérique alors cette nouvelle condition s'éxecute avec à l'intérieur des sous conditions.
			
			if(choice > random_number){		//Je créer une première condition qui fait en sorte que si le chiffre entré par l'utilisateur et stocké dans ma variable choice est supérieur au chiffre aléatoire généré, cela renvoie le printf ci dessous
				
				printf("c'est moins !\n");		//printf pour dire que le chiffre aléatoire est inférieur au chiffre rentré par l'utilisateur. Ce printf s'execute uniquement si la condition au dessus est valide
}

			else if(choice < random_number){		// Je créer ma deuxième condition qui fait en sorte que si le chiffre entré par l'utilisateur est inférieur au chiffre généré aléatoirement , le printf ci dessous s'éxecute
				
				printf("c'est plus !\n");		//si la condition au dessus est valide le printf "c'est plus" s'execute
}
			else printf("Gagnée !\n");		//Si aucune des conditions ci dessus n'est valide alors celle ci s'execute et cela signifie que le joueur à trouvé le chiffre généré aléatoirement.

}

}

	return 0;	
}
