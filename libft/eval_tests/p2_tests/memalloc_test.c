#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>

int memalloc_test(void)
{
    int 	tests_passed = 0;
	int 	i = 0;
	void 	*mem1 = ft_memalloc(sizeof(int) * 10);
	int 	mem2[10] = {'\0'};
	char	mem3[sizeof(int) * 10] = {'\0'};

	while (i < 40)
	{
		if (((char*)mem1)[i] != ((char*)mem2)[i])
		{
			printf("ERROR: mem1[i] != mem2[i]\n");
			break;
		}
		if (((char*)mem1)[i] != mem3[i])
		{
			printf("\nERROR: mem1[i] != mem2[i]\n");
			break;
		}
		i++;
	}
	if (i == 40)
		tests_passed++;

	free(mem1);
	if ((mem1 = ft_memalloc(-1)) == NULL)
		tests_passed++;
	else
		printf("\nERROR: ft_memalloc(-1) != NULL");
	
	free(mem1);
    if (tests_passed == 2)
	{
		printf("\tOK\n");
		return (1);
	}
    return (0);
}