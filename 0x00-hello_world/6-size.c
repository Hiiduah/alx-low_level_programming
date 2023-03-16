#include <stdio.h>
/**
 * main - A function to print the size of data types
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
"6-size.C" [New] 20L 487C written
root@f4be8d517413:~/alx-low_level_programming/0x00-hello_world# ix
bash: ix: command not found
root@f4be8d517413:~/alx-low_level_programming/0x00-hello_world# ls
0-preprocessor  1-compiler   4-puts.c    a.out   main.c  README.md
100-intel       2-assembler  5-printf.c  c       main.o  size32
101-quote.c     3-name       6-size.c    cisfun  main.s  size64
root@f4be8d517413:~/alx-low_level_programming/0x00-hello_world#
root@f4be8d517413:~/alx-low_level_programming/0x00-hello_world# chmod a+x 6-size.c
root@f4be8d517413:~/alx-low_level_programming/0x00-hello_world#
