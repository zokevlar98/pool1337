#include <stdio.h>

char *ft_strncat(char *dest, char *src ,unsigned int  nb)
{
	char *dest_final = dest;
    while(*dest)
    {
        dest++;
    }
    while(*src && nb > 0)
    {
        *dest = *src;
        dest++;
        src++;
		nb--;
    }
    *dest = '\0';
    return (dest_final);
}
int main()
{
    char src1[]="israa";
    char dest1[]="hello";
printf("%s",ft_strncat(dest1,src1, 5));

    return 0;
}
