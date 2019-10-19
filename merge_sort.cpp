#include<iostream>
using namespace std;
void merge(int A[],int L,int M,int R)
{
	
	int arr1[M+1-L];/*Creating an array having elements M+1-l*/
	int arr2[R-M];/*Creating an array having elements R-M*/
	int k=0;
	int i=0;
	int j=0;
	for( i=0;i<=M-L;i++)
	{
		arr1[i]=A[i+L];/*Copying L to M the elements of original arrayy in arr1*/ 
	}

	for(j=0;j<=R-M+1;j++)
	{
		arr2[j]=A[j+M+1];/*Copying M+1 to R elements of original array in arr2*/
	}
	k=L;/*Initializing the first index of the array to be sorted as L*/
	j=0;/*Initializing the index of array 1*/
	i=0;/*Initializing the index of the array 2*/
	while(i<=M-L&&j<=R-M-1)/*This while loop is for comparing the elements of two arrays which is already sorted untill all the elements of one of the arrays are completly passed*/
	{
		if(arr1[i]>=arr2[j])
		{
          A[k]=arr2[j];
		  j++;
		  k++;			 
		}
		else
		{
			A[k]=arr1[i];
			i++;
			k++;
		}
	}
	while(i<=M-L)/*This while is useful when elements are remaining inside left array*/
	{
		A[k]=arr1[i];
		i++;
		k++;
	}
	
	while(j<=R-M-1)/*This while is useful when elements are remaining inside right array*/
	{
		A[k]=arr2[j];
		j++;
		k++;
	}	
}
void mergesort(int A[], int L, int R)/*Here L and R is used instead of 0 and n-1 coz this function involves recursive approach so L is always not going to be 0 and R is always not going to be n-1*/
{ 
	if(L<R)/*This is the most important condition when which stops calling of that recursive functions having only one element array*/
	{
	int M=(L+R)/2;
	mergesort(A,L,M);/*Sorting the left sub array*/
	mergesort(A,M+1,R);/*Sorting the right sub array*/
	merge(A,L,M,R);/*Then merging these subarray and sorting them simultaneously*/
}	
}


int main()
{ int n;
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
  mergesort(A,L,R);/*Passing L and R as These will be useful for recursive approaches*/
  for(int i =0;i<n;i++)
  {
  	cout<<A[i]<<endl;
  }
  return 0;
}
