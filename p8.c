// Floyd Triangle

// #include <stdio.h>
// int main()
// {
//     int n , k=1;
//     printf("Enter a number: ");
//     scanf("%d",&n);
    
//     for(int i=1; i<=n;i++)
//     {
//         for(int j=1; j<=i;j++)
//         {
//             printf("%d" ,k++);
//         }
        
//         printf("\n");
//     }
// }


//Sol:

#include<stdio.h>
int main()
{ 
    int n,i;
    printf("Enter numbers of rows : \n");
    scanf("%d",&n);
    for( int k=i=1;i<=n;i++ )
    {
        int l=k+i-1;
        for( int j=1;j<=i;j++ )
        {
            if( i%2==1 )
                printf("%3d ",k);
            else
                printf("%3d ",l);
            k++;
            l--;
        }
        printf("\n");
    }
}