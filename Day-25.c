#include<stdio.h>
int main(){

int a,b,c,d;
scanf("%d%d%d%d", &a,&b,&c,&d);

if (b>c)
{
    printf("Valores aceitos");
}
else if (d>a)
{
    printf("Valores aceitos");
}
else if ((c+d)>(a+b))
{
    printf("Valores aceitos");
}
 else if (a%2==0)
{
    printf("Valores aceitos");
}
else if (c&d>0){
    printf("Valores aceitos");
}

else {
    printf("Valores nao aceitos");
}



    return 0;
}