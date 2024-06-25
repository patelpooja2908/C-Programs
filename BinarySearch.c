#include <stdio.h>

int main() {
    // Write C code here
    int a[] = {10,9,20,22,2,5,1,7};
    int target = 20;
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Ascending order[Sorting..!!]");
    for(i=0;i<=4;i++)
    {
        printf();
    }
    return 0;
}
