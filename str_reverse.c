# include <stdio.h>
# define MAXN 1000
char str[MAXN];
int main ()
{
    int i=0;
    while((str[i]=getchar())!='\n') i++;
    str[i]='\0';
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
    return 0;
}
