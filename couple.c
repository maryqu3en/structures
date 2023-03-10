#include<stdio.h>
#include<stdbool.h>

typedef struct couple
{
    int agem, agef;
}cp;

float percentage(int count, int total)
{
    return count*100/total;
}

int main()
{

    cp couple[5];
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d%d", &couple[i].agem, &couple[i].agef);
        if(couple[i].agef>couple[i].agem)
        count++;
    }
    printf("\n percentage des femmes plus agées est %f", percentage(count, 5));

    
}