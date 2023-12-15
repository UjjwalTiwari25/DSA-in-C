#include<iostream>
#include <vector>
using namespace std;
#include<math.h>
bool is_valid_sudoku(const vector<vector<int>> &A);

int main()
{
    int A[9][9];
   bool is_valid_sudoku(A[]);
   printA(A[]);

    
  }
 bool is_valid_sudoku(const vector<vector<int>> &A)
    {
        for(int i=0;i<A.size();++i)
        {
            vector<bool> is_present(A.size()+1,false);
            for(int j=0;j<A.size();++j)
            {
                if(A[i][j]!=0 && is_present[A[i][j]]==true)
                {
                    return false;
                }
                else {
                    is_present[A[i][j]]=true;
                }
            }
        }
    
        //Check column contraints
        for(int j=0;j<A.size();++j)
        {
            vector<bool> is_present(A.size()+1,false);
            for(int i=0;i<A.size();++i)
            {
                if(A[i][j]!=0 && is_present[A[i][j]]==true)
                {
                    return false;
                }
                else {
                    is_present[A[i][j]]==true;
                }

        }
    }
    int region_size=sqrt(A.size());
    for(int I=0;I<region_size;++I)
    {
         for(int J=0;J<region_size;++J)
         {
            vector<bool> is_present(A.size()+1,false);
            
     for(int i=0;i<region_size;++i)
    {
         for(int j=0;j<region_size;++j)
         {
            if(A[region_size*I+i][region_size*J+j]!=0 && is_present[A[region_size*I+i][region_size*J+j]])
            {
                return false;
            }
            else{
                is_present[A[region_size*I+i][region_size*J+j]]=true;
            }

            }}}}
            return true;
         }
         void printA(vector<vector<int>> A)
         {
            for(int i=0;i<A.size;++i)
            {
                for(int j=0;j<A.size;++j)
                {
                    cout<<A[i][j]>>"";

                }
                cout<<endl;

            }
         }