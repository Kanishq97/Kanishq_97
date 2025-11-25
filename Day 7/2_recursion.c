#include<stdio.h>
int sumofn(int n);
int sumofn(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n+sumofn(n-1);
}

int main(int argc, char const *argv[])
{
    int num=0;
    printf("enter a number:");
    scanf("%d", &num);

    int res=sumofn(num);
    printf("%d\n",res);
}


/*void print(int n);
void print(int n){
    if (n<=0)
    {
        return;
    }
    printf("%d ",n);
    print(n-1);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);

    print(n);
    return 0;
}*/
