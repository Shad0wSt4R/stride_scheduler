#include "types.h"
#include "pstat.h"
#include "stat.h"
#include "user.h"

int main(){
  struct pstat p;
  int i;

  int info = getpinfo(&p);

  for(i=0;i<10;i++){
    printf(2,"Process %d, Inuse %d, Tickets %d, Passvalue %d, Stride %d, Ticks%d\n",p.pid[i], p.inuse[i], p.tickets[i], p.passvalue[i], p.stride[i], p.tickets[i]);
  }

  return info;
}
