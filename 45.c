#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a>b)
            if(a>c) printf("%d\n",a);
                else printf("%d\n",c);
        else if(b>c) printf("%d\n",b);
        else printf("%d\n",c);
        
    }
    return 0;
}