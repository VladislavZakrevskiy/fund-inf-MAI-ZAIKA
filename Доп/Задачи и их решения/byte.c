#include <stdio.h>

int get_byte(int move, int byte)
{
	return ((byte >> move * 8) & 0xFF);
}

int main(void)
{
	int byte, byte_1 = 0;
	scanf("%x", &byte);
	for (int i = 0; i < 4; i++) {
		byte_1 |= get_byte(i, byte) << ((4-i)*8 - 8);
	}
	printf("%x\n", byte_1);
	return 0;
}