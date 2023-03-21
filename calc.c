#include "numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void app_calc(void)
{
    int choice = 0;

    do
    {
        show_menu();
        printf("> ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            do_operation(choice);

        case 2:
            do_operation(choice);

        case 3:
            do_operation(choice);

        case 4:
            do_operation(choice);

        case 5:
            printf("Fermeture du programme...\n");
            sleep(1);
            break;
        
        default:
            printf("\n> Option inccorecte !\n\n");
            break;
        }


    }
    while (choice != 5);
    

}

int main(void)
{
    app_calc();
    return 0;

}


// gcc *.c -o calc