#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myStrng[]="More respect less attack";
    int i=0,count=0;

    while (myStrng[i]!='\0'){
        count++;
        i++;
    }
    printf("The number of characters is %d \n",count);

    return 0;
}
