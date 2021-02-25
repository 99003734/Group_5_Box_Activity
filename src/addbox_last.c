#include<stdio.h>
#include<stdlib.h>
#include"addbox_last.h"

Box* add(Box *arrayOfBoxes,int n)
{
   int i;
    for(i = 0; i<n; i++)
     {
        printf("\nEnter Unique ID:");
        scanf("%d",&arrayOfBoxes[i].unique_id);
        printf("\nEnter length:");
        scanf("%d",&arrayOfBoxes[i].length);
        printf("\nEnter breadth:");
        scanf("%d",&arrayOfBoxes[i].breadth);
        printf("\nEnter height:");
        scanf("%d",&arrayOfBoxes[i].height);
        printf("\nEnter Box color:");
        scanf("%s",arrayOfBoxes[i].color);
        printf("\nEnter weight:");
        scanf("%d",&arrayOfBoxes[i].weight);
    }

}
