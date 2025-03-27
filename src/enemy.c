#include <stdio.h>
#include <string.h>
#include "enemy.h"

void init_enemy(Enemy *enemy, const char *name)
{
    strncpy(enemy->enemy_name, name, NAME_LENGTH - 1);
    enemy->enemy_name[NAME_LENGTH - 1] = '\0';
    enemy->hp = 100;
    enemy->attack_base = 10.0f;
    enemy->attack_multiplier = 3;
    enemy->experience = 10000.0f;
    enemy->level = 10;
}

int attack_player(Enemy *enemy, Player *player)
{
    return 0;
}