#include <stdio.h>
#include <string.h>
#include "commands.h"

void process_command(char *command, Player *player)
{
    if(strcmp(command, "help") == 0)
    {
        printf("Available commands: help, look, exit");
    }
    else if(strcmp(command, "look") == 0)
    {
        printf("You enter the dungeon, now all you see is pitch black.");
    }
    else if (strcmp(command, "status") == 0)
    {
        print_status(player);
    }
    else
    {
        printf("Command not recognized. Stop trying to hack me.");
    }
}