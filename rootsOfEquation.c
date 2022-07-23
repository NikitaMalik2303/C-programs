#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,disc,p,q,re,img;
    int ch;
    printf("please enter the value of coeffient of x^2 ,x and the constant term ");
    scanf("%f %f %f",&a,&b,&c);
    disc=pow(b,2)-4*a*c;
    if(disc==0){
        ch=0;
    }
    else if(disc<0){
        ch=2;
    }
    else{
        ch=1;
    }
    switch(ch){
    case 0:
        
        p=q=-b/(2*a);
        printf("the roots of the equation are real and equal \n");
        printf("the roots are %f and %f",p,q);
        break;

    case 1:

        p=(-b+sqrt(disc))/(2*a);
        q=(-b-sqrt(disc))/(2*a);
        printf("the roots of the equation are real and distinct \n");
        printf("the roots are %f and %f",p,q);
        break;
    case 2:

        re=-b/(2*a);
        img=pow(fabs(disc),0.5)/(2*a);
        printf("the roots of the equation are imaginary \n");
        printf("the roots are %f +%fi and %f -%fi",re,img,re,img);
        break;        

    }

    return 0;
}