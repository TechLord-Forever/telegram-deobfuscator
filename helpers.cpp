#include <stdio.h>
#include "helpers.h"

#if DEBUG
	#define DEBUG_PRINT(a) printf a
#else
	#define DEBUG_PRINT(a) (void)0
#endif

void printHex(const void *buffer, size_t length)
{
	const unsigned char *p = (const unsigned char *) buffer;
	if (buffer == NULL) {
		printf("NULL");

	} else {
		size_t i;
		for (i = 0; i < length; i++) {
			printf("%02X", *p++);
		}
	}
	printf("\n");
}

void printAscii(unsigned char *data, size_t length)
{
	for (int i = 0; i < length; i++) {
		printf("%c ", data[i]);
	}
}
