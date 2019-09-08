#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {5, 9, 6, 3, 5, 7, 1, 9, 2, 4};
    const int size = sizeof arr / sizeof arr[0];
    int i, key;

    for(i = 0; i < size; i++)
        printf("%d, ", arr[i]);
    printf("\b\b \n");

    printf("Enter the value you want: ");
    scanf("%d", &key);

    //linear search
    for(i = 0; i < size; i++)
        if(arr[i] == key)
            break;
        if(i < size)
            printf("arr[%d] = %d\n", i, key);
        else
            printf("%d not found\n", key);



    return 0;
}
