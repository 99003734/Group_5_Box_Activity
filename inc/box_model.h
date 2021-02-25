
#ifndef __BOXMODEL_H
#define __BOXMODEL_H

/**
 * @brief Box model structure created
 * 
 */

typedef struct
{ /* data */
    int unique_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    int weight;
    float volume;
}Boxes;

struct Boxes *head; 

void display(const Boxes *ptr);
Boxes *addbox(Boxes *box_add, int number_of_boxes);

#endif
