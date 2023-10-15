#include<stdio.h>
int main()
{
    int row,column;
    printf("CAUTION:Program Is Valid For Only Square Matrix\n");
    printf("Enter The Number of ROWS:\n");
    scanf("%d",&row);
    printf("Enter The Number of COLUMNS:\n");
    scanf("%d",&column);
    int arr[row][column];
    printf("ENTER THE ELEMENTS IN THE MATRIX:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("THE MATRIX IS:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<row;i++)
    {
        for(int j=i;j<column;j++)
        //YOU can also DO j=0 to j=i
        {
            //SWAP arr[i][j] and arr[j][i]
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    printf("THE MATRIX AFTER 90 DEGREE ROTATION IS:\n");
    //Transpose of the matrix
    for(int i=0;i<row;i++)
    {
    for(int j=column-1;j>=0;j--)
    {
        printf("%d\t",arr[i][j]);
    }
         printf("\n");
    }
    return 0;
    }