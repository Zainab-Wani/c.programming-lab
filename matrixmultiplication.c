#include<stdio.h>
void main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j,k;
    printf("enter the first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter elements mat1[%d][%d]",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("print second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter elements mat2[%d][%d]",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    printf("enter the first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat1[i][j]);
        }
        printf("\n");
    }
    printf("enter the second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat2[i][j]);
        }
        printf("\n");
    }
    printf("matrix multiplication");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           mat3[i][j]=0;
           for(k=0;k<3;k++)
           {
            mat3[i][j]=mat3[i][j]+mat1[i][k]*mat2[k][j];
           }
        }
    }
    printf("enter the third matrix:\n");
    printf("enter the third/multiplication matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",mat3[i][j]);
        }
        printf("\n");
    }
}
        