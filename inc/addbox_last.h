
# ifndef _BOXES_H_
# define _BOXES_H_

/**
 * @brief Structure which holds information of unique_id, length,breadth,height,color,weight of every box
 */

typedef struct
{
    unsigned int unique_id;
    unsigned int length;
    unsigned int breadth;
    unsigned int height;
    char color[50];
    unsigned int weight;
}Box;

/**
 * @brief add_boxes adding data for the boxes
 * @param [in] box1 array where boxes to be added
 * @param [in] number_of_boxes total number of boxes
 * @return all the boxes
 */

Box* add_boxes(Box* box1,unsigned int number_of_boxes);

# endif
