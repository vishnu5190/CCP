#include<stdio.h>
int main()

{
    int marks[4][3], max, i , j ;
    printf("Enter marks of four student in three subjects\n");
    for(i=0 ; i<4 ; i++)
    {
        for(j = 0 ; j<3 ; j++)
        scanf("%d",&marks[i][j]);

        
    }
    for(j=0 ; j< 3 ; j++)
    {
        max = marks[0][j];
        for(i=1 ; i<4 ; i++)
        {
            if(max<marks[i][j])
            {
                max= marks[i][j];

            }
        }
        printf("Heightst marks in subject %d = %d \n" , j+1 , max);
    }
    return 0 ;
}


