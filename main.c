#include <stdio.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main(int argc, char* argv[]) {
	char buffer[BUFFER_SIZE] = {0};
	ssize_t byte = 0;
	
	while ((byte = read(0, buffer, BUFFER_SIZE)) != 0) {
		printf("byte: %zd string: %s\n", byte, buffer);
		memset(buffer, 0, BUFFER_SIZE);
	}
    
	return 0;
}