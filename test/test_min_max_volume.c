# include"min_max_volume.h"

int main()
{
      unsigned int number_of_boxes;
      Box *box1;

      box1=(Box*)calloc(MAX_SIZE,sizeof(Box));

      box1={{102,20,30,40,"red",78},{103,50,60,80,"yellow",88}};
      
      box1= add_boxes(box1);

      number_of_boxes=sizeof(Box)/sizeof(Box*);
      unsigned long diff=difference_min_max_volume(box1,number_of_boxes);

      printf("\nDifference between maximum and minimum volume : ");
      printf("%lu",diff);
 
      free(box1);
      box1=NULL;
      return 0; 
}
