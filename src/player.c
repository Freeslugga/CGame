#include <stdio.h>
#include <string.h>
#include "player.h"

void init_player(Player *player, const char *name)
{
    strncpy(player->name, name, NAME_LEN -1);
    player->name[NAME_LEN -1] = '\0';
    player->health = 100;
    player->money = 100.0f;
}

void print_status(const Player *player)
{
    printf("Player: %s\n", player->name);
    printf("Health: %d\n", player->health);
    printf("Money: $%.2f\n", player->money);
}

void print_inventory(const Player *player)
{
    printf("Inventory (%d items):\n", player->inventory_count);
    if (player->inventory_count == 0)
    {
        printf("  [Empty]\n");
    }
    else
    {
        for (int i =0; i < player->inventory_count; i++)
        {
            printf("  - %s (%s, value: %d, cost: $%.2f)\n",
                player->inventory[i].name,
                player->inventory[i].type,
                player->inventory[i].value,
                player->inventory[i].cost);
        }
    }
}

int add_item(Player *player, Item item)
{
    if (player->inventory_count >= MAX_INVENTORY)
    {
        printf("Inventory is full!\n");
        return 0;
    }
    player->inventory[player->inventory_count++] = item;
    return 1;
}

int remove_item(Player *player, const char *item_name)
{
    for (int i = 0; i < player->inventory_count; i++)
    {
        if (strcmp(player->inventory[i].name, item_name) == 0)
        {
            for (int j = i; j < player->inventory_count -1; j++)
            {
                player->inventory[j] = player->inventory[j + 1];
            }
            player->inventory_count--;
            return 1;
        }
    }
    printf("You don't have '%s'.\n", item_name);
    return 0;
}