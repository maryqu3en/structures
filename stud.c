#include<stdio.h>
#include<stdbool.h>

typedef struct student
{
    char nom[20], prenom[20];
    float note;
    
}etud;

int main()
{
    etud std[4];
    for (int i = 0; i < 4; i++)
    {
        scanf("%s%s%f", &std[i].nom, &std[i].prenom, &std[i].note);
    }
    for (int i = 0; i < 4; i++)
    {
        if(std[i].note >=10.0)
        printf("the student %s %s passes\n", std[i].nom, std[i].prenom);
        else 
        printf("the student %s %s doesnt pass\n", std[i].nom, std[i].prenom);
    }
    return 0;
}