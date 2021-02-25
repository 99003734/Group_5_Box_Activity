#include "calcvolume.h"
#include <stdio.h>
#include <string.h>

unsigned long volume_of_box(Boxes *box1)
{
    unsigned long volume;
    volume = (box1->length) * (box1->breadth) * (box1->height);
    return volume;
}

unsigned long avg_volume(Boxes *box1, unsigned int number_of_boxes)
{
    unsigned long sum_volume = 0;
    unsigned long avg_volume = 0;
    Boxes *temp_box = box1;
    for (int i = 0; i < number_of_boxes; i++)
    {
        sum_volume += volume_of_box(temp_box);
        temp_box++;
    }
    avg_volume = sum_volume / number_of_boxes;
    return avg_volume;
}
