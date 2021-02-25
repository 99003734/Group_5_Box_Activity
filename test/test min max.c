
# include"min_max_volume.h"

int main()
{
      unsigned int number_of_boxes;

      printf("\nEnter number of boxes you want to add:");
      scanf("%u",&number_of_boxes);
      
      Box *box1=(Box*)calloc(number_of_boxes,sizeof(Box));
     
      box1= add_boxes(box1,number_of_boxes);

      
      unsigned long diff=difference_min_max_volume(box1,number_of_boxes);

      printf("\nDifference between maximum and minimum volume : ");
      printf("%lu",diff);

      //free(box1);
     // box1=NULL;
      return 0; 
}
