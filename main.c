#include <stdio.h>
#include <string.h>

// Buffer Overflow?
int main(int argc, char** argv){
	char buf[100];
	strcpy(buf, argv[1]);

	return 0;
}