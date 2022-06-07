//program to execute a menu driven volume finder 
#include <stdio.h>
int main(){
    int n;
    float ans,h,r,l,w,a;
    printf("Press 1 to find volume of Cone\n");
    printf("Press 2 to find volume of Cylinder\n");
    printf("Press 3 to find volume of Pyramid\n");
    printf("Press 4 to find volume of Cube\n");
    printf("Press 5 to find volume of Sphere\n");
    printf("Choose an option: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter the height of the cone: ");
        scanf("%f",&h);
        printf("Enter the radius of the base of the cone: ");
        scanf("%f",&r);
        ans = (3.14*r*r*h)/3;
        printf("The volume of this cone is = %f", ans);
        break;
    case 2:
        printf("Enter the height of the cylinder: ");
        scanf("%f",&h);
        printf("Enter the radius of the base of the cylinder: ");
        scanf("%f",&r);
        ans = (3.14*r*r*h);
        printf("The volume of this cylinder is = %f", ans);
        break;
    case 3:
        printf("Enter the height of the pyramid: ");
        scanf("%f",&h);
        printf("Enter the base length of the pyramid: ");
        scanf("%f",&l);
        printf("Enter the base width of the pyramid: ");
        scanf("%f",&w);
        ans = (l*w*h)/3;
        printf("The volume of this pyramid is = %f", ans);
        break;
    case 4:
        printf("Enter the edge length of the cube: ");
        scanf("%f",&a);
        ans = (a*a*a);
        printf("The volume of this cube is = %f", ans);
        break;
    case 5:
        printf("Enter the radius of the sphere: ");
        scanf("%f",&r);
        ans = (4*3.14*r*r*r)/3;
        printf("The volume of this sphere is = %f", ans);
        break;
    
    default:
        printf("Error: Please enter a valid input. ");
        printf("Try to choose between 1 to 5");
        break;
    }
    return 0;
}