<<<<<<< HEAD
#include <stdio.h>
int main(){
int len,bre,rad;
float area_rect,peri,circum,area_cir;
printf("Enter the Length of Rectangle:");
scanf("%d",&len);
printf("Enter the Bredth of Rectangle:");
scanf("%d",&bre);
printf("Enter the Radius of the Circle:");
scanf("%d",&rad);
area_rect=(len*bre);
peri=(2*(len+bre));
circum=(2*3.14*rad);
area_cir=(3.14*rad*rad);
printf("\nThe Perimeter of Rectangle is=%.0f",peri);
printf("\nThe Area of Rectangle is=%.0f",area_rect);
printf("\nThe Circumference of Circle is=%.3f",circum);
printf("\nThe Area of Circle is=%.3f",area_cir);

=======
#include <stdio.h>
int main(){
int len,bre,rad;
float area_rect,peri,circum,area_cir;
printf("Enter the Length of Rectangle:");
scanf("%d",&len);
printf("Enter the Bredth of Rectangle:");
scanf("%d",&bre);
printf("Enter the Radius of the Circle:");
scanf("%d",&rad);
area_rect=(len*bre);
peri=(2*(len+bre));
circum=(2*3.14*rad);
area_cir=(3.14*rad*rad);
printf("\nThe Perimeter of Rectangle is=%.0f",peri);
printf("\nThe Area of Rectangle is=%.0f",area_rect);
printf("\nThe Circumference of Circle is=%.3f",circum);
printf("\nThe Area of Circle is=%.3f",area_cir);

>>>>>>> 9355785caf4f3cb2bd05a9c0bd6028e7df80d9d5
}