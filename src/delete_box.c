#include "box.h"
#include "deletebox.h"



int delete_box(int *bptr,int GivUniq_Id)
{  
  
   int i; 
   for (i=0; *bptr[i]!='\0'; i++) 
      if (bptr[i].Uniq_Id == GivUniq_Id) 
         break; 
  
   if (i < number_box) 
   { 
   
     number_box= number_box- 1; 
     for (int j=i; j<number_box; j++) 
        bptr[j] = bptr[j+1]; 
   } 
  
   return 0; 
} 