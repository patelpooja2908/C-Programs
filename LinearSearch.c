#include <stdio.h>

int main() {
    // Write C code here
    int arr[] = {10,9,20,22,2,5,1,7};
    int target = 20;
    int i,flag=0;
    for(i=0;i<=7;i++)
    {
        if(arr[i]==target)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("not present");
    else
        printf("present");
    return 0;
}