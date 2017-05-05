#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    for(i=0;i<10;i++)
    {

        if(i%2==1)
        {
            continue;
        }
        printf("%d",i);
    }

    return 0;

}
