#ifndef PLAYER_H
#define PLAYER_H

#include "items.h"

#define NAME_LEN 50
#define MAX_INVENTORY 10

typedef struct
{
    char name[NAME_LEN];
    int health;
    float money;
    Item inventory[MAX_INVENTORY];
    int inventory_count;
} Player;

void init_player(Player *player, const char *name);
void print_status(const Player *player);
void print_inventory(const Player *player);
int add_item(Player *player, Item item);
int remove_item(Player *player, const char *item_name);

#endif