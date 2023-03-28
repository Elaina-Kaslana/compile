#include <stdio.h>
#include <stdlib.h>

#define FLAG 0
#define INT10 1
#define INT8 2
#define INT16 3
#define OP 4
#define KEYWORD 5

char key[5][6]={"if","then","else","while","do"};

struct Word
{
    char* raw;
    int type;
};

void scan()
{
    char c=getchar();
    while(c==' '||c=='\r'||c=='\n')
    {
        c=getchar();
    }
}

int main()
{
    return 0;
}