#include <stdio.h>
#include "command.h"
#include "buffer.h"
#include "defs.h"
#include "a/iic.h"

int main(void)
{
	printf("main %d.\n",value);
	command_print();
	display_print();
	files_print();
	insert_print();
	kbd_print();
	search_print();
	utils_print();

	iic_printf();
	return 0;
}
