#ifndef ENEMY_H
#define ENEMY_H

#include "player.h"

#define NAME_LENGTH 25

typedef struct
{
    char enemy_name[NAME_LENGTH];
    int hp;
    float attack_base;
    int attack_multiplier;
    float experience;
    int level;
} Enemy;

void init_enemy(Enemy *enemy, const char *name);
int attack_player(Enemy *enemy, Player *player);

#endif