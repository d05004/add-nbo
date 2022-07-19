//main.c
#include <stdio.h>
#include "getValue.h"
#include <stdint.h>

int main(int argc,char **argv)
{
	uint32_t r1=0,r2=0,r3=0,*p;

	r1=getValue(argv[1]);
	r2=getValue(argv[2]);
	r3=r1+r2;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",r1,r1,r2,r2,r3,r3);

	return 0;
}
