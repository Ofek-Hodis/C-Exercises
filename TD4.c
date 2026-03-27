#include <stdio.h>

/*****************************************************************************************
General displaying and reading functions
*****************************************************************************************/

// Displaying the contents of an array
void afficher(const int T[], int n)
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
	int sum=0;
	int size;
	printf("Enter the size of your array (no more than 20)");
	scanf("%d", &size);
	for (int i=0; i<size; i++)
	{
		printf("Enter a value");
		scanf("%d", &array[i]);
		sum += array[i];
	}
	int average = sum / size;
	printf("The average of the values in this array is %d and the sum of them is %d", average, sum);
}


void exo7()
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
	for (int i=1; i<n; i++)// Could be calculated when entering values and avoid this loop
	{
		if (array[i] < min) min = array[i];
	}
	printf("The minimum value of the array is %d", min);
}


void exo8(const int array1[], const int array2[], const int SIZE)
{
	int is_same=1;
	for (int i=0; i<SIZE; i++)
	{
		if (array1[i] != array2[i])
		{
			is_same = 0;
			break;
		}
	}
	if (is_same == 0) printf("The arrays are different");
	else printf("The two arrays are the same");
}

void exo9(const int array[], const int SIZE)
{
	for (int i=0; i<SIZE-1; i++)
	{
		if (array[i] > array[i+1])
		{
			printf("The array isn't sorted\n");
			return; // Used to break out of the function, no value returned
		}
	}
	printf("The array is sorted\n");
}

void exo10(const int array[], const int SIZE, const int value)
{
	for (int i=0; i<SIZE; i++)
	{
		if (array[i] == value)
		{
			printf("Value present in array");
			return;
		}
	}
	printf("Value no present in array");
}


int exo11(const int array[], const int SIZE, const int value)
{
	int count=0;
	for (int i=0; i<SIZE; i++)
	{
		if (array[i] == value)
		{
			count++;
		}
	}
	return count;
}

void exo12(const int array[], const int SIZE, const int value)
{
	int count=0;
	for (int i=0; i<SIZE; i++)
	{
		if (array[i] == value)
		{
			printf("%d ", i+1);
			count++;
		}
	}
	if (count == 0) printf("The value does not appear in the array");
}


void exo13(int array[], const int SIZE)
{
	int temp = array[0];
	for (int i=0; i<SIZE-1; i++)
	{
		array[i] = array[i+1];
	}
	array[SIZE-1] = temp;
}


void exo14(const int array[], const int SIZE, const int value)
{
	for (int i=0; i<SIZE; i++)
	{
		if (array[i] == value)
		{
			printf("Value present in array");
			return;
		}
		if (array[i] > value)
		{
			printf("Value not present in array");
			return;
		}
	}
	printf("Value not present in array");
}

void exo15(int array[], const int SIZE)
{
	int temp = array[SIZE-1];
	for (int i=SIZE-1; i>0; i--)
	{
		array[i] = array[i-1];
	}
	array[0] = temp;
}

void exo16(const int array[], const int SIZE)
{
	int streak_start;
	int long_streak_start;
	int long_streak=0;
	int streak_count=0;
	for (int i=0; i<SIZE; i++)
	{
		if (array[i] == 0)
		{
			if (streak_count == 0)
			{
				streak_start = i;
			}
			streak_count++;
		}
		if (streak_count > long_streak)
		{
			printf("%d\n", long_streak_start);
			long_streak=streak_count;
			long_streak_start = streak_start;
		}
		if (array[i] == 1)
		{
			streak_count = 0;
		}
	}
	printf("The longest streak of 0 is %d and it starts at index %d", long_streak, long_streak_start);

}

int value_present(const int array[], const int SIZE, const int value)
{
	for (int i=0; i<SIZE; i++)
	{
		if (array[i] == value)
		{
			return 1;
		}
	}
	return 0;
}

// We suppose SIZE2>SIZE1
void exo17(const int array1[], const int SIZE1, const int array2[], const int SIZE2)
{
	int intersection[SIZE1]; //Common values to both arrays - chosen smaller size.
	int intersection_size = 0;
	for (int i=0; i<SIZE2; i++)
	{
		if (value_present(array1, SIZE1, array2[i]) == 1)
		{
			intersection[intersection_size] = array2[i];
			intersection_size++;
		}
	}
	afficher(intersection, intersection_size);
}

void exo18()
{
	char str1[100] = "Hello,";
	char str2[100] = " World!";
	char *p1 = str1;
	char *p2 = str2;

	for (; *p1 != '\0'; p1++){}
	for (; *p2 != '\0'; p2++, p1++) // Connecting both strings
	{
		*p1 = *p2;
	}
	printf("%s \n", str1);
	printf("The last charcter is now at %p", p1);
}

/*****************************************************************
 CHOIX DE LA FONCTION DE TEST A EXECUTER SUR LES TABLEAUX 1D
******************************************************************/

int main() {
	int choice;
	do {
		printf("choose exercise number : \n");
		scanf("%d", &choice);
	} while (choice < 0);

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
		case 8 :
			{
				const int SIZE = 5;
				int array1[] = {1,2,-3,4,5};
				int array2[] = {1,-3,2,4,5};
				exo8(array1, array2, SIZE);
				break;
			}
		case 9 :
			{
				const int SIZE = 6;
				int array1[] = {-1,-1,0,4,6,10};
				int array2[] = {10,9,3,0,2,5};
				exo9(array1, SIZE);
				exo9(array2, SIZE);
				break;
			}
		case 10 :
			{
				int array[] = {1,3,5,7,9,11};
				const int SIZE = 6;
				int value = 0;
				printf("Enter the value you are looking for");
				scanf("%d", &value);
				exo10(array, SIZE, value);
				break;
			}
		case 11 :
			{
				int array[] = {1,3,3,5,7,9,11};
				const int SIZE = 7;
				int value = 0;
				printf("Enter the value you are looking for");
				scanf("%d", &value);
				int count = exo11(array, SIZE, value);
				printf ("The value %d appears %d times in the array", value, count);
				break;
			}
		case 12 :
			{
				int array[] = {1,3,3,5,7,9,11};
				const int SIZE = 7;
				int value = 0;
				printf("Enter the value you are looking for");
				scanf("%d", &value);
				exo12(array, SIZE, value);
				break;
			}
		case 13:
			{
				int array[] = {1,3,3,5,7,9,11};
				const int SIZE = 7;
				afficher(array, SIZE);
				exo13(array, SIZE);
				afficher(array, SIZE);
				break;
			}
		case 14:
			{
				int array[] = {1,3,3,5,7,9,11};
				const int SIZE = 7;
				int value = 0;
				printf("Enter the value you are looking for");
				scanf("%d", &value);
				exo14(array, SIZE, value);
				break;
			}
		case 15:
			{
				int array[] = {1,3,3,5,7,9,11};
				const int SIZE = 7;
				afficher(array, SIZE);
				exo15(array, SIZE);
				afficher(array, SIZE);
				break;
			}
		case 16:
			{
				int array[] = {1,0,1,0,0,0,1,1,0,0,0,0,0};
				const int SIZE = 13;
				exo16(array, SIZE);
				break;
			}
		case 17:
			{
				int array1[] = {-3,44,10,1,3,17,5,7,9,11};
				int array2[] = {-3,10,1,3,5,7,9,11,32,43,8,-6};
				const int SIZE1 = 10, SIZE2 = 12;
				exo17(array1, SIZE1, array2, SIZE2);
				break;
			}
		case 18:
		{
				exo18();
				break;
		}
		default : printf("Invalid choice\n"); break;
	}

    return 0;
}
