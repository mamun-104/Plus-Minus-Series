
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,sum=0,flag;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum = sum-i;
        }
        else
        {
            sum = sum+i;
        }


    }
    printf("Sum = %d\n",sum);



    return 0;
}



