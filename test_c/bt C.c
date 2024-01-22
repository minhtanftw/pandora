#include <stdio.h>
#include <time.h>



int main()

{
typedef int libtimer_t;


    typedef struct _tlib_timer
    {
        libtimer_t  *pindex; 
    } libtimer_t_a ;
    
libtimer_t_a * tan1;
tan1 = 5;
*tan1->pindex = -1;
printf("pindx %d", tan1->pindex);
printf("pindx 123 %d ", *tan1->pindex);



}