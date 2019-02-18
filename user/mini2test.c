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
     p.tickets[i] = 10;
     p.pid[i] = -1;
     p.ticks[i] = 0;
   }
   int info = getpinfo(&p);
   printf(2, "Here is a list");
   for(i=0;i<N;i++){
     printf(2, "Process:: inuse: %d, tickets: %d, pid: %d, ticks: %d\n", p.inuse[i], p.tickets[i], p.pid[i], p.ticks[i]);
   }
   return info;
}

int
main(void)
{
   mini2test();
   exit();
}
