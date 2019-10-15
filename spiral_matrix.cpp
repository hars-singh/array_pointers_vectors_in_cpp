#include<iostream>
#include<vector>
using namespace std;
vector<int>spiralOrder(const vector<vector<int> > &A) {
    int T=0;
    int  L=0;
    vector<int> K;
    int rows =A.size();
    int cols =A[0].size();
    int B=rows -1;
    int R=cols -1;
    int dir =0;
    int i=0;
   while(T<=B&&L<=R)
    {
        if(dir ==0)
        {
            for(i=L;i<=R;i++)
            {
                K.push_back(A[T][i]);
            }
            dir=1;
            T++;
            
        }
        else if(dir == 1)
        {
            for(i =T;i<=B;i++)
            {
                K.push_back(A[i][R]);
            }
            dir =2;
            R--;
           
        }
            else if(dir == 2)
        { 
            for(i =R;i>=L;i--)
            {
                K.push_back(A[B][i]);
            }
            dir =3;
            B--;
       
        }
        
         else if(dir ==3)
        {
            for(i =B;i>=T;i--)
            {
                K.push_back(A[i][L]);
            }
            dir =0;
            L++;
          
        }
        
        
        
        
        
    }
    return K;
}
int main()
{
    const vector<vector<int> > A{{1,2,3,4},
                           {2,3,4,5},
                           {3,4,5,6},
                           {4,5,6,7}};
                           
    vector<int>P = spiralOrder(A);
    for(int i =0;i<P.size();i++)
    {
        cout<<P[i]<<endl;
    }
    
    return 0;
}
