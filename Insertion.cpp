#include <iostream>
using namespace std;
int main() {
 int a[12]={20,14,13,26,43,13,38,94,16,36,102,450};
 int temp =0;
 for(int i=12;i>0;i--)
 {
   for(int j=0;j<i-1;j++)/*There should be total (n-1)+(n-2)+.....1 comparison for sorting*/
   {
     if(a[j]<a[j+1])/*Comparing Each element with it's succeding element*/
     {              /*at every iteration min element will be made aside in the array*/
       temp=a[j];
       a[j]=a[j+1];
       a[j+1]=temp;
     }
   }
 }
 for(int i=0;i<12;i++)
 {
   cout<<a[i]<<endl;
 }
 return 0;
}
