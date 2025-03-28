#ifndef COMMANDS_H
#define COMMANDS_H

#include "player.h"

typedef struct
{
    const char *name;
    void (*handler)(Player *, const char *args);
} Command;

void process_command(char *command, Player *player);
void parse_input(const char *input, char *cmd, char *args);

#endif