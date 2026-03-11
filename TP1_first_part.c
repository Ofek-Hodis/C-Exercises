#include <stdio.h>

int main(void)
{
    int exo;
    printf("Exercise number");
    scanf("%d", &exo);
    int buffer_test;
    while((buffer_test = getchar()) != '\n' && buffer_test != EOF){}
    switch (exo)
    {
    case 1:
        {
            printf("*************\n");
            printf("*   Test   *\n");
            printf("*************\n");
            return 0;
        }
    case 2:
        {
            printf("1- Saisie des donnees \n2- Traitement des données \n3- Affichage des re2sultats \n4- Quitter");
            return 0;
        }
    case 3:
        {
            int input_value;
            printf("Merci de saisir la premiere valeur: ");
            scanf("%d", &input_value);
            printf("La premiere valeur saise est %d \n", input_value);
            printf("Merci de saisir la deuxieme valeur: ");
            scanf("%d", &input_value);
            printf("La deuxieme valeur saisie est %d \n", input_value);
            printf("Merci de saisir la troisieme valeur: ");
            scanf("%d", &input_value);
            printf("\n La troisieme valeur saisie est %d", input_value);
            printf("/*** \" C'est fini \" ***/" );
            return 0;
        }
    case 4:
        {
            unsigned char input_char; // unsigned, as it will not represent number (more efficient)
            int char_ascii;
            printf("Merci de saisir le premier caractere: ");
            scanf("%c", &input_char);
            char_ascii = input_char;
            printf("Le premiere caractere saisie est %c et son code ascii est %d \n", input_char, char_ascii);
        return 0;
        }
    case 5:
        {
            int a = 13;
            double y = 4;
            printf("%7d \n", a); // Takes 7 characters for an integer
            printf("%.2f \n", y); // Formats 2 characters after the decimal point

            float b = 1567.23;
            printf("%.2f \n", b);
            float c = 12.12 ;
            printf("  %.2f \n", c);
            float d = 123.4;
            printf(" %.2f \n", d);
            float e = 0.3;
            printf("   %.2f \n", e);
        }
    default : return 0;
    }

}