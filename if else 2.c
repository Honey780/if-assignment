// Online C compiler to run C program online
#include <stdio.h>
int main() {
 int customer_id, customer_name, unit_consumed, charges, total_bill;
 printf("enter customer_id:");
scanf("%d ,&customer_id");
 printf("enter the customer_name:");
 scanf("%d ,&customer_name:");
 printf("unit_consumed:"); printf("unit_consumed:");
 scanf("%d ,&unit_consumed:");
       total_bill = unit_consumed * charges;
  if(unit_consumed<=199){
 charges=unit_consumed *1.20;
}
else if(unit_consumed >=200 <400){
 charges = unit_consumed *1.50;
}
 else if(unit_consumed >=400 >600){
 charges = unit_consumed*1.80;
 printf("unit_consumed:");
scanf("%d ,&unit_consumed:");
         total_bill = unit_consumed *charges;
 if(unit_consumed <=199){
charges=unit_consumed*1.20;
}
 else if(unit_consumed>=200<400){
 charges = unit_consumed*1.50;
}
 else if(unit_consumed>=400>600){
 charges=unit_consumed*1.80;
}
 else if(unit_consumed>=600){
charges=unit_consumed*2.00;
}
 printf("the unit consumed %d\n",unit_consumed);
printf("the charges is ksh.%d",charges);

 return 0;
}
}



enter customer_id: