#include<stdio.h>
int main()
{
    int array[5] = {1,2,3,4,5};
    int n = sizeof (array) /
sizeof(array[0]);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i];
    }
    printf("sum of array elements: %d\n",sum);
    return 0;
}

