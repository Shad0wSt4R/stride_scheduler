#include "types.h"
#include "stat.h"
#include "pstat.h"
#include "user.h"

int main(){
  int i,id;
  double x=0;
  
  x=0;
  id=0;
  
  for(i=1;i<6;i++){
    id=fork();
    if(id<0){ //fork failure check
      printf(1,"%d ,Fork failed\n");
	 return -1;
    }
    else if(id==0){		//child
      settickets(i*10);
      printf(1,"%d forked child %d\n",getpid(),id);
      for(;;)
		x++;
    }
  }
  exit();
}
