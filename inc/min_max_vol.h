
# ifndef _MINMAXVOLUME_H_
# define _MINMAXVOLUME_H_

# include"Boxes.h"
# include<stdlib.h>
# include<stdio.h>
# include<limits.h>

unsigned long volume_of_box(Box *box1);


unsigned long min_volume(Box *box1,const unsigned int no_of_boxes);
/**
 * @brief Finds maximum volume of all the boxes
 * 
 * @return unsigned long max_volume of all the boxes
 */ 

/**
 * @brief Calculates difference between maximum and minimum volume of all the boxes
 * 
 * @return unsigned long difference between maximum volume and minimum volume of all the boxes calculated
 */

unsigned long difference_min_max_volume(Box *box1,const unsigned int no_of_boxes);

# endif
