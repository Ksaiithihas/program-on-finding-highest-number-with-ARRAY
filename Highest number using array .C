#include <stdio.h>

main()
{
    
int result[] = {10,400,20,50,60,70,550,1000,100,1200,5,1,6};
int largest=0;
for (int i=0;i<13;i++)
{
    if (result[i]>largest)
    {
        largest=result[i];
        
    }
}
    printf("%d ",largest);
    
}
