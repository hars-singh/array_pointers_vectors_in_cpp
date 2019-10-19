/*Time complexity 2^n and space complexity O(n)*/
#include<iostream>
using namespace std;
int fibonaci(int n);
int main()
{   int n;
	cout<<"Enter any number for calculating fibonaci number corrosponding to this numner"<<endl;
	cin>>n;
  int k=0;
	int last =1;
	int second_last =0;
	int counter =0;
	while(counter<n-2)
	{
		k =second_last;
		second_last =last;
		last =k +last;
		counter++;
	}
	cout<<last<<endl;
	//int result = fibonaci(n);
	//cout<<"Fibonaci number corrosponding to given value : "<<result<<endl;
	return 0;
}

/*int fibonaci(int n)
{
	if (n == 1)
	return 0;
	else if (n == 2)
	return 1;
	else 
	return fibonaci(n-1) + fibonaci(n-2);
}*/
