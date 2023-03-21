#include "numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_menu(void)
{
    printf("-------------------------------------------------\n\n");

    printf("Calculatrice :\n\n");

    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n\n");
    printf("5. Fermer le programme\n\n");
    printf("-------------------------------------------------\n\n");
}

void do_operation(int choice)
{
    int nb1 = 0, nb2 = 0;
    int result = 0;

    do
    {
        printf("\nEntrez un premier nombre : ");
        scanf("%d", &nb1);

        printf("Entrez un deuxième nombre : ");
        scanf("%d", &nb2);

        if(nb1 < -10000 || nb1 > 10000 || nb2 < -10000 || nb2 > 10000)
            printf("Saisie incorrecte. (Choisir un nombre entre -10 000 et 10 000)\n");
        
        else
        {
            if (choice == 1){
                result = addition(nb1, nb2);
                printf("\n\n--- Addition ---\n");
            }

            else if (choice == 2){
                result = soustraction(nb1, nb2);
                printf("\n\n--- Soustraction ---\n");
            }

             else if (choice == 3){ 
                result = multiplication(nb1, nb2);
                printf("\n\n--- Multiplication ---\n");
            }

             else if (choice == 4){ 
                result = division(nb1, nb2);
                printf("\n\n--- Division ---\n");
            }
            printf("\nRésultat du calcul = %d\n", result);
            printf("\n-------------------------------------------------\n\n");
            exit(-1);
        }

    }
    while (nb1 < -10000 || nb1 > 10000 || nb2 < -10000 || nb2 > 10000);
}

int addition(int a, int b)
{
    return a + b;
}

int soustraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    if(b == 0)
    {
        printf("Division par 0 impossible.\n");
        exit(-1);
    }

    return a / b;
}