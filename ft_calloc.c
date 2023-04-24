#include <stdlib.h>

void *ft_calloc(size_t nelem, size_t elsize)
{
	void *mem;
	size_t i;

	mem = (void *)malloc(nelem * elsize);
	if(!mem)
		return (0);
	i = 0;
	while(i < nelem * elsize)
		mem[i++] = 0;
	return (mem);
}
