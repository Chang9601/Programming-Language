#include <stdio.h>

int main()
{
    int c,nl,nb,nt;

    nt = nb = nl = 0;
    while((c = getchar()) != EOF)
    {
        if(c == '\n') nl++;
        else if(c == ' ') nb++;
        else if(c == '\t') nt++;
    }

    printf("newline: %d blank: %d tab: %d\n",nl,nb,nt);
    return 0;
}
