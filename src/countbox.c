#include "box.h"
#include "countbox.h"



int count_box(int *bptr,int GivUniq_Id)
{  
  
   int i; 
   for (i=0; *bptr[i]!='\0'; i++) 
     { if (bptr[i].color == 'Black') 
          {
              blackcount++;
          }
          if (bptr[i].color == 'Blue') 
          {
              bluecount++;
          }
        if (bptr[i].color == 'Red') 
          {
              Redcount++;
          }
    
    
     }
   return ; 
} 