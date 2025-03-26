#include <stdio.h>
#include <string.h>
#include "player.h"

void init_player(Player *player, const char *name)
{
    strncpy(player->name, name, NAME_LEN -1);
    player->name[NAME_LEN -1] = "\0";
    player->health = 100;
}

void print_status(const Player *player)
{
    printf("Player: %s\n", player->name);
    printf("Health: %d\n", player->health);
}