#include <stdio.h>
#include <string.h>
#include "main.h"

// Buffer Overflow?
// Not good
int main(int argc, char** argv){
	char buf[100];
	strcpy(buf, argv[1]);
	print(buf);
	return 0;
}