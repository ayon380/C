#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n,s;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int a=2*n;
   for(int i=1;i<a;i++)
   {
       
       s=n;
       if(i<=n)
       {
           for(int j=1;j<a;j++)
           {
               printf("%d ",s);
               if(i>j)
               {
                   s--;
               }
               if(i+j>=2*n)
               {
                   s++;
               }
           }
       }
       else if(i>n)
       {
           for(int j=1;j<a;j++)
           {
               printf("%d ",s);
               if(j>=i)
               {
                   s++;
               }
               else if(i+j<2*n)
               {
                   s--;
               }
           }
       }
       printf("\n");
   }
    return 0;
}
