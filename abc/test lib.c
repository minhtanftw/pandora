#include <stdio.h>
#include <time.h>



int main()

{
typedef int libtimer_t;


    typedef struct _tlib_timer
    {
        libtimer_t  *pindex; 
    } libtimer_t_a ;
    
libtimer_t_a * tan1 = NULL;
//tan1 = NULL;
int valir = -1;
int  *ptr = 1;


(tan1->pindex) = *ptr ;
printf("pindx %d", tan1->pindex);
printf("pindx 123 %d ", *tan1->pindex);

return 0;

}