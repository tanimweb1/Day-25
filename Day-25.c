#include<stdio.h>
int main(){


    //  bee 1035
int a,b,c,d;
scanf("%d%d%d%d", &a,&b,&c,&d);

if (b>c && d>a && a%2==0 && c>0&&d>0 &&(a+b)<(c+d))
{
    printf("Valores aceitos\n");
}

else {
    printf("Valores nao aceitos\n");
}



    return 0;
}

