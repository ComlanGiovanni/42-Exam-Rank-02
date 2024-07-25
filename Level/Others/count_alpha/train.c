#include <stdio.h>
#include <unistd.h>

#define is_cap(c) (c >= 'A' && c <= 'Z')
#define is_small(c) (c >= 'a' && c <= 'z')

void count_alpha(char *str)
{
    int alphabet[26] = {0};
    int flag = 0;

    int idx;
    idx = 0;

    //make fct name fill alphabet
    while (str[idx])
    {
        if (is_cap(str[idx]))
            alphabet[(int)(str[idx] - 'A')] += 1;
        else if (is_small(str[idx]))
            alphabet[(int)(str[idx] - 'a')] += 1;
        idx++;
    }
    idx = 0;
    // make another fct name print nbr alphabet ?
    while(str[idx])
    {
        if(is_cap(str[idx]) || is_small(str[idx]))
        {
            if(is_cap(str[idx]) && alphabet[(int)(str[idx] - 'A')] > 0)
            {
                if(flag == 0)
                {
                    printf("%d%c",alphabet[(int)(str[idx] - 'A')], str[idx] + ' ');
                    alphabet[(int)(str[idx] - 'A')] = 0;
                    flag = 1;
                }
                else
                {
                    printf(", %d%c",alphabet[(int)(str[idx] - 'A')], str[idx] + ' ');
                    alphabet[(int)(str[idx] - 'A')] = 0;
                }
            }
            else if(is_small(str[idx]) && alphabet[(int)(str[idx] - 'a')] > 0)
            {
                if(flag == 0)
                {
                    printf("%d%c",alphabet[(int)(str[idx] - 'a')], str[idx]);
                    alphabet[(int)(str[idx] - 'a')] = 0;
                    flag = 1;
                }
                else
                {
                    printf(", %d%c",alphabet[(int)(str[idx] - 'a')], str[idx]);
                    alphabet[(int)(str[idx] - 'a')] = 0;
                }
            }
        }
        idx++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        count_alpha(argv[1]);
    printf("\n");
    return (0);
}
