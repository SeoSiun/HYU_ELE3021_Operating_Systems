#include "types.h"
#include "defs.h"

int
mySyscall(int trapno)
{
	cprintf("user interrupt %d called!\n",&trapno);
	return 0;
}

int
sys_mySyscall(void)
{
	int i;
	if(argint(0,&i)<0)
		return -1;
	return mySyscall(i);
} 
