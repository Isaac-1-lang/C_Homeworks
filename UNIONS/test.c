#include <stdio.h>
#include <stdlib.h>
typedef union
{
    float f;
    char c;
    int a;
} floatCharIntUnion;

typedef enum
{
    usingFloat,
    usingChar,
    usingInt
} unionSelection;

int main()
{
    floatCharIntUnion myUnion;
    unionSelection selection;

    myUnion.f = 3.1415;
    selection = usingFloat;
    processUnion(&myUnion, selection);

    myUnion.c = 'a';
    selection = usingChar;
    processUnion(&myUnion, selection);

    myUnion.a = 22;
    selection = usingInt;
    processUnion(&myUnion, selection);
}

void processUnion(floatCharIntUnion* myUnion, unionSelection selection)
{

    switch (selection)
    {
    case usingFloat:
        // Process myUnion->f
        break;
    case usingChar:
        // Process myUnion->c
        break;
    case usingInt:
        // Process myUnion->a
        break;
    }
}