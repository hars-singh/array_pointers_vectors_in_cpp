/*Worst case time complexity O(n^2) and O(nlogn) some time and it fluctuates sometime*/

#include<iostream>
#include<cstdlib>
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
	int pivot=A[low];
	while(i<j)
	{
		while(A[i]<=pivot)
		{
			i++;
		}
		while(A[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
		swap(&A[i],&A[j]);
		
	}
}
	swap(&A[j],&A[low]);
	
	return j;
}
	int RandomPivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
	// Randomizing the pivot value in the given subpart of array.
	pvt = low + n%(high-low+1);
 
	// Swapping pivot value from high, so pivot value will be taken as a pivot while partitioning.
	swap(&a[low], &a[pvt]);
 
	return partition(a, low, high);
}

void quicksort(int A[],int low,int high)
{
	if(low<high)
	{
	int j=RandomPivotPartition(A,low,high);
	quicksort(A,low,j-1);
	quicksort(A,j+1,high);
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
  quicksort(A,L,R);
  for(int i =0;i<n;i++)
  {
  	cout<<A[i]<<endl;
  }
  return 0;	
	
}
