#include "boxmodel.h"
#include <stdio.h>
#include <string.h>

void display(const Boxes *ptr)
{
    printf("Unique ID = %u\n", ptr->unique_id);
    printf("Length = %u\n", ptr->length);
    printf("Breadth = %u\n", ptr->breadth);
    printf("height= %u\n", ptr->height);
    printf("Colour= %s\n", ptr->colour);
    printf("Weight = %u\n", ptr->weight);
}

Boxes *addbox(Boxes *box_add, int number_of_boxes)
{
    printf("Enter the number of boxes you want to add: ");
    scanf("%d", &number_of_boxes);
    for (int i = 0; i < number_of_boxes; i++)
    {
        printf("\nEnter the unique id of the box : ");
        scanf("%u", box_add->unique_id);

        printf("\nEnter Length for the box : ");
        scanf("%u", box_add->length);

        printf("\nEnter Breadth for the box : ");
        scanf("%u", box_add->breadth);

        printf("\nEnter Height for the box : ");
        scanf("%u", box_add->height);

        printf("\nEnter Color for the box: ");
        scanf("%s", box_add->colour);

        printf("\nEnter Weight for the box: ");
        scanf("%u", box_add->weight);
    }
}
