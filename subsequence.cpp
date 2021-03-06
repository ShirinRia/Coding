#include<iostream>
 
using namespace std;
 int s=0;
// A function to print all combination of a given length from the given array.
void GenSubSet(int a[], int reqLen, int start, int currLen, bool check[], int len) 
{
	// Return if the currrLen is more than the required length.
	if(currLen > reqLen)
	return;
	// If currLen is equal to required length then print the sequence.
	else if (currLen == reqLen) 
	{
		cout<<"\t";
		for (int i = 0; i < len; i++) 
		{
			if (check[i] == true) 
			{
				
                s=s+a[i];
               
			}
            
		}
         
         if(s==7){
            for (int j = 0; j < len; j++) 
		    {
			if (check[j] == true) 
			
				cout<<a[j]<<" ";
                
		    }
            cout<<"\n";
           
         }
		cout<<"\n";
         s=0;
		return;
       
	}
	// If start equals to len then return since no further element left.
	if (start == len) 
	{
		return;
	}
	// For every index we have two options.
	// First is, we select it, means put true in check[] and increment currLen and start.
	check[start] = true;
	GenSubSet(a, reqLen, start + 1, currLen + 1, check, len);
	// Second is, we don't select it, means put false in check[] and only start incremented.
	check[start] = false;
	GenSubSet(a, reqLen, start + 1, currLen, check, len);
}
 
int main()
{
	int i, n, k;
	bool check[n];
	cout<<"Enter the number of element array have: ";
	cin>>n;
 
	int arr[n];
	cout<<"\n";
 
	// Take the input of the array.
	for(i = 0; i < n; i++)
	{
		cout<<"Enter "<<i+1<<" element: ";
		cin>>arr[i];
		check[i] = false;
	}
 
	cout<<"\nEnter the length of the subsets required: ";
	cin>>k;
 
	cout<<"\nThe combination of length "<<k<<" for the given array set:\n";
	GenSubSet(arr, k, 0, 0, check, n);
 
	return 0;
}