/*This code covers all aspect of using pointer referencing and derefrencing*/
#include <iostream>

using namespace std;

int main()
{
    int a[4] = {1,2,3,4};
    int *p = a;
    int *k = &a[0]; 
    cout<<a<<" "<<&a[0]<<" "<<p<<" "<<k<<endl;
    cout<<a+1<<" "<<&a[0]+1<<" "<<p+1<<" "<<k+1<<endl;
    cout<<a+2<<" "<<&a[0]+2<<" "<<p+2<<" "<<k+2<<endl;
    cout<<a+3<<" "<<&a[0]+3<<" "<<p+3<<" "<<k+3<<endl;
    cout<<*a<<" "<<a[0]<<" "<<*p<<" "<<*k<<endl;
    cout<<*(a+1)<<" "<<a[1]<<" "<<*(p+1)<<" "<<*(k+1)<<endl;
    cout<<*(a+2)<<" "<<a[2]<<" "<<*(p+2)<<" "<<*(k+2)<<endl;
    cout<<*(a+3)<<" "<<a[3]<<" "<<*(p+3)<<" "<<*(k+3)<<endl;
    return 0;
}
