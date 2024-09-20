#include <stdio.h>
#include <unistd.h>
#define is_cap(c) (c >= 'A' && c <= 'Z')
#define is_small(c) (c >= 'a' && c <= 'z')

void count_alpha(char *s)
{
    int arr[26] = {0};
    int flag = 0;
    for(int i = 0; s[i]; i++)
    {
        if(is_cap(s[i]))
            arr[(int)(s[i] - 'A')] += 1;
        else if(is_small(s[i]))
            arr[(int)(s[i] - 'a')] += 1;
    }
    while(*s)
    {
        if(is_cap(*s) || is_small(*s))
        {
            if(is_cap(*s) && arr[(int)(*s - 'A')] > 0)
            {
                if(flag == 0)
                {
                    printf("%d%c",arr[(int)(*s - 'A')], *s + 32);
                    arr[(int)(*s - 'A')] = 0;
                    flag++;
                }
                else
                {
                    printf(", %d%c",arr[(int)(*s - 'A')], *s + 32);
                    arr[(int)(*s - 'A')] = 0;
                }
            }
            else if(is_small(*s) && arr[(int)(*s - 'a')] > 0)
            {
                if(flag == 0)
                {
                    printf("%d%c",arr[(int)(*s - 'a')], *s);
                    arr[(int)(*s - 'a')] = 0;
                    flag++;
                }
                else
                {
                    printf(", %d%c",arr[(int)(*s - 'a')], *s);
                    arr[(int)(*s - 'a')] = 0;
                }
            }
        }
        s++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
    {
        count_alpha(av[1]);
    }
    printf("\n");
    return 0;
}