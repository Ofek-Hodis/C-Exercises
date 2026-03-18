#include <stdio.h>

/*****************************************************************************************
General displaying and reading functions
*****************************************************************************************/

// Displaying the contents of an array
void afficher(int T[], int n)
{
	for (int i=0; i<n; i++)
	{
		printf("%d ", T[i]);
	}
	printf("\n");
}


void afficherChaine(int T[], int n, char chaine[])
{

}

// LECTURE
void saisir(int T[], int n)
{

}

// LECTURE aux indices pairs
void saisirIndicesPairs(int T[], int n)
{

}

/**************************************************************************************
 Insertion or deletion function on 1 dimension arrays
**************************************************************************************/

// a) Ajout à la fin
// TAILLE LOGIQUE MODIFIEE VIA UN RETOUR
int ajouterFin(int T[], int n, int val)
{
    T[n] = val;
    return ++n;
}

// b) Insertion à une position
// TAILLE LOGIQUE MODIFIEE VIA UN RETOUR
int inserer(int T[], int n, int pos, int val)
{
	for (int i=n; i>pos; i--)
	{
		T[i] = T[i-1];
	}
	T[pos] = val;
    return ++n;
}

// c) Suppression à une position
// TAILLE LOGIQUE MODIFIEE VIA UN RETOUR
int supprimerPosition(int T[], int n, int pos)
{
	for (int i=pos; i<n-1; i++)
	{
		T[i] = T[i+1];
	}
    return --n;
}

// d) Supprimer première occurrence
// TAILLE LOGIQUE MODIFIEE VIA UN POINTEUR
void supprimerValeur(int T[], int * n, int val)
{
	for (int i=0; i < *n-1; i++) // Dereferencing the pointer to use it with an int in a condition
	{
		if (T[i] == val)
		{
			for (int j=0; j<*n-1; j++)
			{
				T[j] = T[j+1];
			}
			--*n; //Important to use * to change the value and not the location of the pointer
			break;
		}
	}

}

// e) Supprimer toutes les occurrences
// TAILLE LOGIQUE MODIFIEE VIA UN POINTEUR
void supprimerToutes(int T[], int *n, int val)
{
	int size_reduction=0; // Tracking by how much n should be reduced;
	for (int i=0; i<*n-1; i++)
	{
		if (T[i] == val)
		{
			for (int j=i; j<*n-1; j++)
			{
				T[j] = T[j+1];
			}
			size_reduction++;
		}
	}
	*n -= size_reduction;
}

 //multiplication par un facteur k
void multiplierParK(int T[], int n, int k)
{

}

/*****************************************************************
 FONCTIONS DE TESTS SUR LES TABLEAUX 1D
******************************************************************/


void exo1()
{
	int T[14] = {-12, 1, 11, 13, 12, 23, 10, 21, 15};
    int n = 9;

    printf("Initial : \n");
    afficher(T, n);

    // a
    n = ajouterFin(T, n, 15);
    afficher(T, n);

    // b (position 8 = 9ème case en C)
    n = inserer(T, n, 8, 10);
    afficher(T, n);

    // c
    n = supprimerPosition(T, n, 0);
    afficher(T, n);

    // d
    supprimerValeur(T, &n, 15);
    afficher(T, n);

    // e
    supprimerToutes(T, &n, 10);
    afficher(T, n);

    // f (32 n'existe pas)
	printf("test\n");
    supprimerValeur(T, &n, 32);
    afficher(T, n);
}


void exo2()
{
	int T[] = {3, 2, 1, 1, 2, 3};
    int n = 6;

    afficherChaine(T, n, "# ");
    afficherChaine(T, n, "$ ");
    afficherChaine(T, n, "@ ");
}

// PSEUDO CODE ERREUR i = 0 et par convention i = 1
// EN C OK
void exo3Algo2()
{
	int T[] = {-12, 1, 11, 13, 12, 23, 10, 21, 15};
    int n = 9;

    afficher(T, n);
}


// PSEUDO-CODE ATTENTION AU DEBORDEMENT A DROITE
void exo3Algo3()
{
	int T[] = {-12, 1, 11, 13, 12, 23, 10, 21, 15};
    int n = 9;

    // DEBORDEMENT POUR n, valeur aléatoire
    // n - 1 requis
    for(int i = 0; i < n; i++)
    {
        printf("%d ", T[i+1]); // PIEGE i + 1
    }
    printf("\n");
}

/**
 PSEUDO-CODE
Ecrire(tab) NON
BOUCLE
Pour i ← 1 à n
    Ecrire(tab[i])
Fin Pour

idem pour Lire(tab)

En C : des boucles
*/

void exo3Algo4()
{
	int T[10];
	int n = 10;

	printf("Initial 10 VALEURS ALEATOIRES : \n");
    afficher(T, n);

	saisir(T, n);
    afficher(T, n);
}

// PSEUFO CODE ET C : les valeurs d'indice impair sont aléatoires
void exo3Algo5()
{
    int T[6];
    int n = 6;

    printf("Initial 6 VALEURS ALEATOIRES : \n");
    afficher(T, n);

    saisirIndicesPairs(T, n);
    afficher(T, n);
}

void exo4(const int array[], const int SIZE)
{
	for (int i=0; i<SIZE; i++)
	{
		if (array[i]%2 == 1)
			printf("%d ", array[i]);
	}
}

void exo5(const int array[], const int SIZE)
{
	int temp = array[0];
	for (int i=0; i<SIZE; i++)
	{
		temp = array[i]*2;
		printf("%d\n", temp);
	}
}


void exo6()
{
	int array[10];
	int min, n=0, more=1;
	while (more == 1 && n<10)
	{
		printf("Enter a number \n");
		scanf("%d", &array[n]);
		n++;
		if (n<10) printf("Enter 1 to enter another number, 0 to stop");
		scanf("%d", &more);
	}
	min = array[0];
	for (int i=1; i<n; i++)
	{
		if (array[i] < min) min = array[i];
	}
	printf("The minimum value of the array is %d", min);

}


void exo7()
{

}


void exo8()
{

}

void exo9()
{

}

void exo10()
{

}


void exo11()
{

}

void exo12()
{

}


void exo13()
{

}


void exo14()
{

}

void exo15()
{

}

void exo16()
{

}


void exo17()
{

}

/*****************************************************************
 CHOIX DE LA FONCTION DE TEST A EXECUTER SUR LES TABLEAUX 1D
******************************************************************/

int main() {
	int choice;
	do {
		printf("choose exercise number : ");
		scanf("%d", &choice);
	} while (choice < 0 || choice > 17);

	switch (choice) {
		case 1 : exo1(); break;
		case 2 : exo2(); break;
		case 3 : exo3Algo2(); exo3Algo3(); exo3Algo4(); exo3Algo5(); break;
		case 4 :
			{
				const int SIZE = 10;
				int array[] = {1,2,3,4,5,6,7,8,9,10};
				exo4(array, SIZE);
				break;
			}
		case 5 :
			{
				const int SIZE = 10;
				int array[] = {1,2,3,4,5,6,7,8,9,10};
				exo5(array, SIZE);
				break;
			}
		case 6 : exo6(); break;
		case 7 : exo7(); break;
		case 8 : exo8(); break;
		case 9 : exo9(); break;
		case 10 : exo10(); break;
		case 11 : exo11(); break;
		case 12 : exo12(); break;
		case 13:  exo13(); break;
		case 14 : exo14(); break;
		case 15 : exo15(); break;
		case 16 : exo16(); break;
		case 17 : exo17(); break;
		default : printf("Invalid choice\n"); break;
	}

    return 0;
}
