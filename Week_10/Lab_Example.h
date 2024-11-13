#ifndef LAB_EXAMPLE_H
#define LAB_EXAMPLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUSHI_MACRO 10

struct Sushi{
    int sushiID;
    char fishType[SUSHI_MACRO];
};

void makeSushi(struct Sushi**);

#endif