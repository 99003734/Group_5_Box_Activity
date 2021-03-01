#include "box.h"
#include "updateweight.h"


int update_weight(int *bptr,int GivUniq_Id, int GivenWeight)
{
       int i; 
   for (i=0; *bptr[i]!='\0'; i++) 
      { if (bptr[i].Uniq_Id == GivUniq_Id)
            {
                bptr[i].weight=GivenWeight;
                break;
            } 
      }

}
