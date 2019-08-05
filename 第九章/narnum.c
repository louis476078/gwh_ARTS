#include <stdio.h>

int main()
{
    int i=0;
    int count=0;
    int hun,ten,bit; 
    printf("plz scan a start:");
    scanf("%d",&i);
    while(i<1000)
    {
        hun = (i /100);
        bit = (i%10)%10 ;
        ten = (i%100)/10;
        if((hun*hun*hun+bit*bit*bit+ten*ten*ten)==i)
        {
            printf("%d  ",i);
            count++;
            if(count==10)
            {
                printf("\n");
                count=0;
            }
        }
        i++;
    }
}