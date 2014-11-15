#include <stdio.h>

int main(void)
{
    int i, sum, index, x;
    
    for(i = 1; i <= 1000; i++)
    {
        index = i;
        sum = 0;
        while(1)
        {
            x = index % 10;
            sum = sum + (x * x * x);
            index = index / 10;
            if(index == 0) break;
        }
        if(i == sum)
        {
            printf("i = %d \nsum = %d\n", i, sum);
        }
    
    }

}
