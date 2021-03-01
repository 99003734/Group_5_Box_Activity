#include "box.h"
#include "findbox.h"

int main()
{ //... other chunk of code
     int number_of_boxes;
    int GivUniq_Id;
      printf("\nEnter  boxe Id  you want to update:");
      scanf("%u",&GivUniq_Id);
     
    find_box(int *bptr,int GivUniq_Id); 
      printf("\n The following Box is Found and ready for its detail updations:");
    

      return 0; 
}