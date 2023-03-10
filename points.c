#include<stdio.h>
#include<math.h>

typedef struct point
{
    float x,y;
}pt;

float distance(pt p1, pt p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y , 2));
}

void middle(pt p1, pt p2)
{
    printf("%f\n%f", (p1.x + p2.x)/2, (p1.y + p2.y)/2);
}


int main()
{
    pt p1, p2;
    scanf("%f%f", &p1.x, &p1.y);
    scanf("%f%f", &p2.x, &p2.y);
    printf("la distance est:\n%f\nle milieu est:\n", distance(p1,p2));
    middle(p1,p2);
    return 0;

}
