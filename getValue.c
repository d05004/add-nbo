//getValue.c
#include "getValue.h"
#include <netinet/in.h>
#include <stdio.h>

int getValue(char *fileName){
	FILE *fp;
	char *buf[4]={0,};
	uint32_t r,*p;

	fp=fopen(fileName,"r");
	fread(buf,4,1,fp);
	p=(uint32_t*)buf;
	r=htonl(*p);
	fclose(fp);

	return r;
}
