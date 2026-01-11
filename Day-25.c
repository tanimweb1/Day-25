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



// bee 1036

double a,b,c,rat,x1,x2;
scanf("%lf%lf%lf", &a,&b,&c);


rat = (b*b-4*a*c);


if(rat>0 && a!=0){
   x1= (-b+sqrt(rat))/(2*a);
    x2= (-b-sqrt(rat))/(2*a);
  
printf("R1 = %0.5lf\n",x1);
printf("R2 = %0.5lf\n",x2);
}

else{
    printf("Impossivel calcular\n");
}



// bee 1036

double a,x1,x2;
scanf("%lf", &a);

if(a>=0 && a<=100){
    if(a>=0 && a<=25){
        printf("Intervalo [0,25]\n");
    }
   else if(a>25 && a<=50){
        printf("Intervalo (25,50]\n");
    }
   else if(a>50 && a<=75){
        printf("Intervalo (50,75]\n");
    }
   else if(a>75 && a<=100){
        printf("Intervalo (75,100]\n");
    }
   else if(a<0){
        printf("Fora de intervalo\n");
    }
}
else {
    printf("Fora de intervalo\n");
}

    

    return 0;
}




