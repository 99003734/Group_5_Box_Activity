#include "box.h"
#include "countbox.h"



int delete_box(int *bptr,int GivUniq_Id)
{  
  
   int i; 
   for (i=0; *bptr[i]!='\0'; i++) 
     { if (bptr[i].Uniq_Id == GivUniq_Id) 
        { displayone(*bptr);
         break; 
          }
    
     }
   return 0; 
} 