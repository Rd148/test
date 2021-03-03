#include <stdio.h>
#include <stdlib.h>

void main() {
	char* user = getenv("USER");
	char output[] = system("hostnamectl");
	printf("User: %s\nhost: \n", user);
}
