/*





As always, under construction.
From a varity of sources.
Really Bad. But Useful.



*/
#include<stdio.h>
#define INCLUDELIB(x) #include "lib/" #x

#define PR(fmt,val) printf(#val " = %" #fmt "\t", (val))
#define BR putchar('\n')

#define PRINT1(f,x1) PR(f,x1), BR
#define PRINT2(f,x1, x2) PR(f,x1), PRINT1(f, x2)
#define PRINT3(f,x1, x2, x3) PR(f,x1), PRINT3(f, x2, x3)
#define PRINT4(f,x1, x2, x3, x4) PR(f,x1), PRINT4(f, x2, x3, x4)

#define SQUARE(x) ((x)*(x))
#define AVG(x,y) (((x)+(y))/2.0)
#define MAX(x, y) ((x) > (y) ? (x) : (y))

#define Warning(...) fprintf(stderr, __VA_ARGS__)

#define UPTO(i, n) for((i) = 0; (i) < (n); (i)++)

#define FOREACH(item, array) \
				for (int keep = 1, \
					count = 0, \
					size = sizeof (array) / sizeof *(array); \
					count != size; \
					keep = 1, count++) \
				for (item = (array)+count; keep; keep = !keep)


#define FSM            for(;;)
#define STATE(x)       x##_s 
#define NEXTSTATE(x)   goto x##_s

/*

USAGE:

FSM {
STATE(s1):
... do stuff ...
NEXTSTATE(s2);

STATE(s2):
... do stuff ...
if (k<0) NEXTSTATE(s2);
 fallthrough as the switch() cases 

STATE(s3) :
... final stuff ...
break;  // Exit from the FSM 
 }


*/
