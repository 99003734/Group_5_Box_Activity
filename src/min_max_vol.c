# include"min_max_vol.h"
# include"Boxes.h"
# include<stdio.h>
#include<stdlib.h>

unsigned long volume_of_box(Box *box1)
{
    unsigned long volume;
    volume= (box1->length)*(box1->breadth)*(box1->height);
    return volume;
}

unsigned long min_volume(Box *box1,const unsigned int no_of_boxes)
{
    Box *temp_box=box1;
    unsigned long minimum_volume=volume_of_box(temp_box);
    temp_box++;
    for(int i=0;i<no_of_boxes;i++)
    {
        if(minimum_volume > volume_of_box(temp_box))
        {
            minimum_volume = volume_of_box(temp_box);
            
            temp_box++;
        }
    }
    return minimum_volume;
}

unsigned long max_volume(Box *box1,const unsigned int no_of_boxes)
{
    Box *temp_box=box1;
    unsigned long maximum_volume=volume_of_box(temp_box);
    temp_box++;
    for(int i=0;i<no_of_boxes;i++)
    {
        if(maximum_volume < volume_of_box(temp_box))
        {
            maximum_volume = volume_of_box(temp_box);
        }
    }
    return maximum_volume;
}

unsigned long difference_min_max(Box *box1,const unsigned int no_of_boxes)
{
    unsigned long minimum_volume=min_volume(box1,no_of_boxes);
    unsigned long maximum_volume=max_volume(box1,no_of_boxes);

    unsigned long difference_in_volume= maximum_volume-minimum_volume;

    return difference_in_volume;
}  
