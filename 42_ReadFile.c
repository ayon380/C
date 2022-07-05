#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr=fopen("Sample.txt","r");
    int n,n1,n2;
    fscanf(ptr,"%d",&n);
    fscanf(ptr,"%d",&n1);
    fscanf(ptr,"%d",&n2);
    fclose(ptr);
    printf("%d  %d  %d ",n,n1,n2);
    
    
    return 0;
}