#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, r1, r2, r, i1 ;
    printf("Enter a, b, c of a quadratic equation ax^2+bx+c=0");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = ((b*b)-4*a*c);
    if(discriminant==0){
        printf("The roots are real and equal");
        r1= (-b)/(2*a);
        printf("r1=r2=%f", r1);
    }
    else if(discriminant>0){
        printf("The roots are real and distinct");
        r1= ((-b)+(sqrt(discriminant)))/(2*a);
        r2= ((-b)-(sqrt(discriminant)))/(2*a);
        printf("r1=%f", r1);
        printf("r2=%f", r2);
    }
    else if(discriminant<0){
        printf("The roots are complex conjugate");
        r= -b/(2*a);
        i1= sqrt(-1*(discriminant))/(2*a);
        printf("r1=%f+i%f", r, i1);
        printf("r2=%f-i%f", r, i1);
    }

    return 0;
}
