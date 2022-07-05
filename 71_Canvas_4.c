#include <stdio.h>

int main()
{
    int l,b;
    scanf("%d%d",&l,&b);
    int area=l*b;
    int perimeter=2*(l+b);
    printf("The area is %d\n",area);
    printf("The perimeter is %d\n",perimeter);
    printf("The no of sides is 4");
    return 0;
}