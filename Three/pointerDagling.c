// C program to demonstrate Deallocating a memory pointed by
// ptr causes dangling pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* ptr = (int*)malloc(sizeof(int));

	//# After below free call, ptr becomes a dangling pointer
//	free(ptr);
//	printf("Memory freed\n %d",ptr);

	//# removing Dangling Pointer
//	ptr = NULL;
//	printf("Memory freed\n %d",ptr);

	return 0;
}

