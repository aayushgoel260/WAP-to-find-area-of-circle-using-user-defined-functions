#include<stdio.h>
#include<math.h>
void area(){
    int r;
    printf("Enter radius : ");
    scanf("%d",&r);
    printf("Area of circle is %.2f",(3.14)*r*r);
}
void area();
int main(){
    area();
    return 0;
}