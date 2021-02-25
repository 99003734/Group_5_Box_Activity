
#ifndef __BOXMODEL_H
#define __BOXMODEL_H

/**
 * @brief Box model structure created
 * 
 */

typedef struct
{ /* data */
    int user_id;
    int length;
    int breadth;
    int height;
    char colour[20];
    int weight;
    float volume;
}Boxes;

struct Boxes *head; 

void display(const Boxes *ptr);
Boxes *addbox(Boxes *box_add, int no_of_boxes);

#endif
