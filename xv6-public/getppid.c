#include "types.h"
#include "defs.h"
#include "mmu.h"
#include "param.h"
#include "proc.h"

int
getppid(void)
{
	return myproc()->parent->pid;
}

int
sys_getppid(void)
{
	return getppid();
}
