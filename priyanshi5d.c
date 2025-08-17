#include<stdio.h>
int main(){
    float a,b;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    if(b!=0) printf("Result=%.2f\n",a/b);
    else printf("Error!Division by zero.\n");
    return 0;
}
