#include<stdio.h>
int region_size=3;
int is_valid_sudoku(int A[9][9])
{
    int i,j,I,J;
    for(i=0;i<9;++i)
    {
       // vector<bool> is_present(A.size()+1,false);
        int is_present[10]={0};
        for(j=0;j<9;++j)
        {
            if(A[i][j]!=0 && is_present[A[i][j]]==1)
            {
                return 0;
            }
            else{
                is_present[A[i][j]]=0;
            }
        }
    }
    //For checking colunms cinditions
    for(j=0;j<9;++j)
    {
        int is_present[10]={0};
        for(i=0;i<9;++i)
        {
            if(A[i][j]!=0 && is_present[A[i][j]]==1)
            {
                return 0;
            }
            else
            {
                is_present[A[i][j]]==1;
            }
        }
    }
    for(I=0;I<region_size;++I)
    {
        for(int J=0;J<region_size;++J)
         {
           int is_present[10]={0};
            
     for(i=0;i<region_size;++i)
    {
         for(j=0;j<region_size;++j)
         {
            if(A[region_size*I+i][region_size*J+j]!=0 && is_present[A[region_size*I+i][region_size*J+j]])
            {
                return 0;
            }
            else{
                is_present[A[region_size*I+i][region_size*J+j]]=1;
            }

            }}
            }
            }
            return 1;
        
}
int main()
{
    int i,j;
    int A[9][9]={
        {7,2,6,3,5,9,4,1,8},
        {4,5,8,1,6,7,2,3,9},
        {9,1,3,8,2,4,7,6,5},
        {1,6,2,9,7,5,3,8,4},
        {3,9,4,2,8,5,1,5,7},
        {8,7,5,4,1,3,9,2,6},
        {5,3,7,6,4,1,8,9,2},
        {6,8,9,7,3,2,5,4,1 },
        {2,4,1,5,9,8,6,7,3}
    };
    for(i=0;i<9;++i)
    {
        for(j=0;j<9;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    if(is_valid_sudoku(A))
    {
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;

}