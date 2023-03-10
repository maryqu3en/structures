#include<stdio.h>
#include<stdbool.h>

typedef struct employee
{
    char nom[20],  prenom[20];
    int grade;
    float salaire;
}emp;

int main()
{
    emp w[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%s%d%f", &w[i].nom, &w[i].prenom,&w[i].grade, &w[i].salaire);
    }
    for (int i = 0; i < 3; i++)
    {
        if(w[i].grade>=3){
            w[i].salaire= w[i].salaire + w[i].salaire/10;
            w[i].grade++;
        }
        

    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n%s\n%d\n%f\n", w[i].nom, w[i].prenom, w[i].grade, w[i].salaire);
    }
}