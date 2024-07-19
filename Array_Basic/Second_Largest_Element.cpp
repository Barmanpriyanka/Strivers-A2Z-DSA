//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int largest =arr[0];
	    int secondlargest=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>largest)
	        {
	            largest=arr[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>secondlargest && arr[i]!=largest)
	        {
	            secondlargest=arr[i];
	        }
	    }
	   return secondlargest;
	}
};