#include <iostream>

using namespace std;

int main()
{   
    int a[2][3] ={1,2,3,4,5,6};/*a[0] is row conatining first 3 elements likewise a[1] is row containing next 3 elements and so on a[2] is row containing last 3 elements*/
    int (*p)[3]=a;/*a denotes the base address of the 2d array declared but base address will point to another array which is one dimesnional in shape and contaning 3 elements*/ 
    cout<<a<<" "<<&a[0]<<endl;/*This will give base address of the array as it is 2D array so from the base address is illustrating address of first row a[0] having 3 element*/ 
    cout<<*p<<" "<<a[0]<<" "<<&a[0][0]<<endl;/*This(*p) is like pointer not of array(a) but of array(a[0]) so it reperesents address of a[0][0]*/
    cout<<a+1<<" "<<&a[1]<<endl;/*incrementing pointer of 2d array will give base address of the next row the array*/
    cout<<*a+1<<" "<<a[0] + 1<<" "<<&a[0][1]<<endl;/*moving into coloumns can be illustrated best through this example*/
    cout<<*(a+1)<<" "<<a[1]<<" "<<&a[1][0]<<endl;/*incrementing row can be done through this operation*/
    cout<<*(a+1)+2<<" "<<a[1]+2<<" "<<&a[1][2]<<endl;/*moving in row as well as in coloumns*/
    cout<<*(*(a+1)+2)<<" "<<*(a[1]+2)<<" "<<a[1][2]<<endl;/*Actually extracting elements from any loacation in 2d matrix*/
    return 0;
}
