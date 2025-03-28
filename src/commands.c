#include <stdio.h>
#include <string.h>
#include "commands.h"

void process_command(char *command, Player *player)
{
    if(strcmp(command, "help") == 0)
    {
        printf("Available commands: help, look, status, take, inv, exit");
    }
    else if(strcmp(command, "look") == 0)
    {
        printf("You enter the dungeon, now all you see is pitch black.");
    }
    else if (strcmp(command, "status") == 0)
    {
        print_status(player);
    }
    else if (strcmp(command, "take") == 0)
    {
        Item test = {"testItem", "testType", 25, 10.0f};
        add_item(player, test);
    }
    else if (strcmp(command, "drop") == 0)
    {
        remove_item(player, "testItem");
    }
    else if (strcmp(command, "inv") == 0)
    {
        print_inventory(player);
    }
    else if (strcmp(command, "test") == 0)
    {
        char t[64], p[256];
        parse_input("This is a test command", t, p);
    }
    else
    {
        printf("Command not recognized. Stop trying to hack me.");
    }
}

void parse_input(const char *input, char *command, char *args)
{
    int first_space = 0;
    for (int x = 0; x < strlen(input); x++)
    {
        printf("%c", input[x]);
        if (input[x] == ' ')
        {
            break;
        }
    }
}