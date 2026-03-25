#include <stdio.h>
int main(){
   int a=-3;
   a =- a- a + !a ;
   printf("%d\n",a);

   a=2;
   int b=1,c,d;
   c=a<b;
   d=(a>b)&&(c<b) ;
   printf("c = %d, d=%d\n",c,d);

   a=b=c=d=4;
   a*=b+1;
   c+=d*=3;
   printf("a=%d,c=%d\n",a,c);

   a=9,b=15,c=16,d=12;
   int e,f;
   e=! (a<b||b<c);
   f=(a>b)? a-b:b-a;
   printf("e= %d, f =%d\n",e,f);

   a=6;
   a=a+5*a;
   printf("a=%d\n",a);

   a=5,b=5;
   printf ("%d,%d\t",++a,b--);
   printf ("%d,%d\t",a,b);
   printf ("%d,%d\t", ++a,b++);
   printf ("%d,%d\n" , a,b) ;

   int x,y,z;
   x=x++;
   y=x++;
   z= x+y;
   printf ("x = %d,y=%d,z=%d\n",x,y);

   a=4,b=8,c=3,d=9,z;
   z=a++ + ++b * c--- - - d;
   printf ("a = %d,b = %d, c=%d,d=%d,z=%d\n",a,b,c,d,z);

   a=14;
   a=a%-5;
   b=a/3;
   c=a/5%3;
   printf ("a=%d,b=%d,c=%d\n",a,b,c);
}
