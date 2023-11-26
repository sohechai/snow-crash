#include <stdio.h>

int main(int ac, char **av)
{
        if (ac < 2) {
                printf("haha\n");
        }

        char *str = av[1];
        char tmp[26] = "";
        int i = 0;
	printf("%s\n", str);
        while (str[i])
        {
                tmp[i] = str[i] - i;
                i++;
        }
        printf("tmp = %s\n", tmp);
        return (0);
}
