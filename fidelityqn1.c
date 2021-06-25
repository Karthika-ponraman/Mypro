#include<stdio.h>
int main()
{
 int n,x,y,t;
 t=0;
 scanf("%d",&n);
 scanf("%d",&x);
 y=n-x;
 do
 {
   if(x>y)
   {
       x=x-y;
   }
   else
   {
       y=y-x;
   }
   t=t+1;
 } while((x!=y)||(x!=0)||(y!=0));
 printf("%d",t);
 return 0;
}
