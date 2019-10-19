#include<iostream>
using namespace std;
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition(int A[],int low,int high)
{
	int i=low;
	int j=high;
	int pivot=A[low];/*Setting pivot at the starting of array*/
	while(i<j)
	{
		while(A[i]<=pivot)/*Incrementing where elements shoulb be less than the selected pivot element located at lower index*/
		{
			i++;
		}
		while(A[j]>pivot)/*decrementing*/ 
		{
			j--;
		}
		if(i<j)/*replacing contadictory elements not satisfying the pivot position greater lesser patter condition*/
		{
		swap(&A[i],&A[j]);
		
	}
}
	swap(&A[j],&A[low]);/*Placing the elemnt at it's right position*/
	
	return j;
}
void quicksort(int A[],int low,int high)
{
	if(low<high)/*For quick sort lower index must be greater than higher one same as in the case of merge sort*/
	{
	int j=partition(A,low,high);/*Finding the partitioning/pivot element*/
	quicksort(A,low,j-1);/*Sorting at left ide of pivot*/
	quicksort(A,j+1,high);/*Sorting at the right side of pivot*/
    }
    
}
int main()
{
	
  int n;
  cout<<"Enter the number of Elements in array : "<<endl;
  cin>>n;
  int A[n];
  cout<<"Enter the elements in the array"<<endl;
  for(int i =0;i<n;i++)
  {
  	cin>>A[i];
  }
  int L=0;
  int R=n-1;
  quicksort(A,L,R);/*Sending the entire array to be performed quick sort*/
  for(int i =0;i<n;i++)
  {
  	cout<<A[i]<<endl;
  }
  return 0;	
	
}
