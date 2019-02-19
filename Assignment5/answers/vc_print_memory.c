/**
 * File              : vc_print_memory.c
 * Author            : Derrick Park
 * Date              : Wed 08 Aug 21:34:52 2018
 * Last Modified Date: Wed 08 Aug 21:34:52 2018
 * Last Modified By  : Derrick Park
 */
#include <stdio.h>

static void	print_hex(unsigned char c)
{
	if ((c / 16) > 9)
		putchar((c / 16) - 10 + 'a');
	else
		putchar((c / 16) + '0');
	if ((c & 0xf) > 9)
		putchar((c & 0xf) - 10 + 'a');
	else
		putchar((c & 0xf) + '0');
}

static void	print_addr(unsigned int offset)
{
	print_hex((offset >> 24) & 0xff);
	print_hex((offset >> 16) & 0xff);
	print_hex((offset >> 8) & 0xff);
	print_hex(offset & 0xff);
	putchar(':');
	putchar(' ');
}

static void	print_data(char *addr, unsigned int count)
{
	unsigned int i;

	i = 0;
	while (i < 16)
	{
		if (i >= count)
		{
			putchar(' ');
			putchar(' ');
		}
		else
			print_hex(addr[i]);
		if (i % 2 == 1)
			putchar(' ');
		i++;
	}
}

static void	print_text(char *addr, unsigned int count)
{
	unsigned int i;

	i = 0;
	while (i < 16 && i < count)
	{
		if (addr[i] > 31 && addr[i] < 127)
			putchar(addr[i]);
		else
			putchar('.');
		i++;
	}
}

void	*vc_print_memory(void *addr, unsigned int size)
{
	unsigned int offset;

	offset = 0;
	while (offset < size)
	{
		print_addr(offset);
		print_data((char*)addr + offset, size - offset);
		print_text((char*)addr + offset, size - offset);
		offset += 16;
		putchar('\n');
	}
	return (addr);
}


int main(void) {
    const char str[] = "Salut les aninches c'est cool show non on fait de truc terrible\x00\x2e\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";
    unsigned int num_chars = sizeof(str) - 1; // - 1 to ignore null at the end
    vc_print_memory((char*)str, num_chars);
    return 0;
}
