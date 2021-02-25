#include"Boxes.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

Box* add_boxes(Box *box1,unsigned int number_of_boxes)
{
    unsigned int unique_id1;
    unsigned int length1;
    unsigned int breadth1;
    unsigned int height1;
    char color1[50];
    unsigned int weight1;

    if(box1==NULL)
    {
        printf("You can't add anymore boxes");
        return 0;
    }
    for(int i=0;i<number_of_boxes;i++)
    {
        printf("\nEnter Unique ID for the BOX :");
        scanf("%u",&unique_id1);

         printf("\nEnter Length for the BOX : ");
        scanf("%u",&length1);
    
         printf("\nEnter Breadth for the BOX : ");
        scanf("%u",&breadth1);
    
        printf("\nEnter Height for the BOX : ");
        scanf("%u",&height1);

        printf("\nEnter Color for the BOX : ");
        scanf("%s",color1);

        printf("\nEnter Weight for the BOX : ");
        scanf("%u",&weight1);

        box1->unique_id=unique_id1;
        box1->length=length1;
        box1->breadth=breadth1;
        box1->height=height1;
        strcpy(box1->color,color1);
        box1->weight=weight1;

        box1++;
    }
    return box1;
}
