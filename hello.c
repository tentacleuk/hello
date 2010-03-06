#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc != 2) {
		fprintf(stderr, "usage: hello times\n");
		return -1;
	}
	int times = atoi(argv[1]);
	int i = 0;
	for (; i < times; i++)
		printf("Hello world - you complete bastard\n");
	return 0;
}
