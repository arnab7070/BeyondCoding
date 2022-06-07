//code to find out the electricity bill
#include<stdio.h>
int main()
{
for (int i = 0; i < 10; i++)
{

    
    
float bill, units;

printf("Enter the units consumed = ");
scanf("%f",&units);

if(units<=102 && units>=0)
{
bill=units*5.30;
printf("Electricity Bill = %f Rupees\n",bill);
}
else if(units<=180 && units>102)
{
bill=102*5.30+(units-102)*5.97;
printf("Electricity Bill = %f Rupees\n",bill);

}
else if(units<=300 && units>180)
{
bill=102*5.30+78*5.97+(units-180)*6.97;
printf("Electricity Bill = %f Rupees\n",bill);

}

else if(units>300)
{
bill=102*5.30+78*5.97+120*6.97+(units-320)*7.31;
printf("Electricity Bill = %f Rupees\n",bill);

}
else
{
printf("Please enter valid consumed units...");
}
}
return 0;
}