#include "types.h"
#include "pstat.h"
#include "stat.h"
#include "user.h"

int main(){
  struct pstat info;
  int i;

	   getpinfo(&info);
	   //Output information for all processes.
	   for(i=0; i<NPROC; i++)
	   {
		printf(0, "PID\t In Use\t Pass Value\t Stride\t Tickets\t Ticks\n%d\t %d\t %d\t %d\t %d\t\t %d\n",
			info.pid[i],
			info.inuse[i],
			info.passvalue[i],
			info.stride[i],
			info.tickets[i],
			info.ticks[i]);
	   }
  exit();
}
