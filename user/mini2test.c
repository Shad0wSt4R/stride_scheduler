#include "types.h"
#include "stat.h"
#include "pstat.h"
#include "user.h"

#define	N 64

int
mini2test(void){
   struct pstat	p;
   int i;
   for(i =0;i<N;i++){
     p.inuse[i] = 0;
     p.tickets[i] = 0;
     p.pid[i] = -1;
     p.ticks[i] = 0;
     p.passvalue[i] =0;
     p.stride[i] = 0;
   }
   int info = getpinfo(&p);
   printf(2, "Here is a list of every process\n");
   for(i=0;i<N;i++){
     printf(2, "Process:: pid: %d inuse: %d, tickets: %d, passvalue: %d, stride: %d, ticks: %d\n", p.pid[i], p.inuse[i], p.tickets[i], p.passvalue[i], p.stride[i], p.ticks[i]);
   }
   return info;
}

int
main(void)
{
   mini2test();
   exit();
}
