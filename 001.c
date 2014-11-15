#include <stdio.h>

int is_water_flower_number(number)
{
    int sum = 0;
    int x = number;
    int d;
    while (x) {
        d = x % 10;
        sum += d * d * d;
        x /= 10;
    }
    return sum == number;
}

int main(void)
{
    int i, sum;
    
    for (i = 1; i <= 1000; i++)
    {
        if (is_water_flower_number(i))
        {
            printf("Water flower number found: %d\n", i);
        }
    }

}
