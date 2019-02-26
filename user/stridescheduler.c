#include "types.h"
#include "stat.h"
#include "pstat.h"
#include "user.h"

int main(){
  int i,id;
  double x=0;
  
  x=0;
  id=0;
  
  for(i=1;i<5;i++){
    id=fork();
    if(id<0){ //fork failure check
      printf(1,"%d ,Fork failed\n",getpid());
    }
    else if(id>0){ //parent
      settickets(i*10);
      printf(1,"%d forked child %d\n",getpid(),id);
    }
    else{//child
      for(;;){
	x++;
      }
      break;
    }
  }
}
