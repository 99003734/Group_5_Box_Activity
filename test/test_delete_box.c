#include "box.h"
#include "deletebox.h"

int main()
{ //... some other code
     int number_of_boxes;
    int GivUniq_Id;
      printf("\nEnter number of boxe Id  you want to Delete:");
      scanf("%u",&GivUniq_Id);
      delete_box(int *bptr,int GivUniq_Id);
    
 //.... some other code

      return 0; 
}