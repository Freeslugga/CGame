#ifndef PLAYER_H
#define PLAYER_H

#define NAME_LEN 50

typedef struct
{
    char name[NAME_LEN];
    int health;
    float money;
} Player;

void init_player(Player *player, const char *name);
void print_status(const Player *player);

#endif