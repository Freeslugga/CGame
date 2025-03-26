#ifndef ITEM_H
#define ITEM_H

#define ITEM_NAME_LEN 30
#define ITEM_TYPE_LEN 20

typedef struct
{
    char name[ITEM_NAME_LEN];
    char type[ITEM_TYPE_LEN];
    int value; // Effect value
    float cost;
} Item;

#endif