#include <stdio.h>
#include <string.h>
#include "commands.h"
#include "player.h"

void print_welcome();

int main()
{
    char input[100];
    Player player;

    print_welcome();

    printf("Enter your name: ");
    if(fgets(input, sizeof(input), stdin) != NULL)
    {
        input[strcspn(input, "\n")] = 0;
        init_player(&player, input);
    }

    while(1)
    {
        printf("\n> ");
        if(fgets(input, sizeof(input), stdin) != NULL)
        {
            input[strcspn(input, "\n")] = 0;
            if(strcmp(input, "exit") == 0)
            {
                printf("Thanks for playing!\n");
                break;
            }
            else
            {
                process_command(input, &player);
            }
        }
    }
    return 0;
}

void print_welcome()
{
    printf("Welcome to the Dungeon!\n");
    printf("Type 'help' for a list of commands.\n");
}