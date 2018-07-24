#include<stdio.h>
int main()
{
   int a,b,c;
   printf("\nenter the 3 number");
   scanf("%d%d%d",&a,&b,&c);
   printf("largest numberis:");
   if((a>=b)&&(a>=c))
   {
       printf("%d",a);
   }
   else if((b>=a)&&(b>=c))
   {
       printf("%d",b);
   }
     else 
   {
       printf("%d",c);
   }
   return 0;
}
