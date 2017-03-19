#include <stdio.h>
#include <string.h>
#include <math.h>

#include "hello.h"
#include "util.h"

int main(int argc, char* argv[]) 
{
	char* message = concat("Hello ", HELLO_D);	
	printf("%s %.1lf !\n", message, sqrt(49.0));
	return 0;
}

