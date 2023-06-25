//code to implement linear search

#include <stdio.h>

int LinearSearch (int arr[5], int size, int x){
    for(int i = 0; i < size; i++){
    if(arr[i] == x)
        return 1;
    else 
        return -1;
}
}

int main(){
    int arr[5] = {10,2,30,5,20};
    int x = 20;
    int size = sizeof(arr[5]);
    int res = LinearSearch(arr, size, x);
    (res == 1) ? printf("Element found at %d position",res) : printf("Element not in array");
    return 0;

}


