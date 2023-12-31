//code to implement linear search
//in linear search you just run a for loop to find the element and then return its location.

#include <stdio.h>

int search (int arr[], int N, int x){
    for(int i = 0; i < N; i++)
        if(arr[i] == x)	
            return i;
    return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 4;
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, N, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}

