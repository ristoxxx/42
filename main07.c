#include <stdio.h>
int main()
{
	char str[] = "maxp";
	printf("%s\n", ft_strdup(str));
}


#include <stdio.h>
int main()
{
	ft_range(1, 5);
	printf("%d", ft_range(1, 5));
}

#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int *range;
    int min = 5;
    int max = 10;
    int size;
    int i;

    size = ft_ultimate_range(&range, min, max);
    if (size == -1)
    {
        printf("Invalid range\n");
        return (1);
    }

    printf("Range: ");
    for (i = 0; i < (max - min); i++)
    {
        printf("%d ", range[i]);
    }
    printf("\n");

    free(range);
    return (0);
}

#include <stdio.h>
#include <stdlib.h>

unsigned int ft_srtlen(char *str);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strjoin(int size, char **strs, char *sep);

int main(void)
{
    char *strs[] = {"Hello", "world", "from", "C"};
    char sep[] = " ";
    int size = 4;
    char *result;

    result = ft_strjoin(size, strs, sep);
    if (result)
    {
        printf("Joined string: %s\n", result);
        free(result);
    }
    else
    {
        printf("Memory allocation failed\n");
    }
    return (0);
}
