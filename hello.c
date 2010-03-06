#include <stdio.h>
#include <stdlib.h>


void usage()
{
	fprintf(stderr, "usage: hello times\n");
	exit(-1);
}

int main(int argc, char **argv)
{
	/* check correct number of parameters */
	if (argc != 2) usage();
 
	int times = atoi(argv[1]);
	if (times == 0) usage();
	int i = 0;
	for (; i < times; i++)
		printf("Hello world - you nice fluffy place \n");
	return 0;
}
