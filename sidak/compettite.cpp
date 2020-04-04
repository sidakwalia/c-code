#include <bits/stdc++.h> 
using namespace std; 
  
// Utility function to print the 
// contents of an array 
void printArr(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Function to update every element of 
// the array as the sum of next two elements 
void updateArr(int arr[], int n) 
{ 
  
    // Invalid array 
    if (n < 3) 
        return; 
  
    // First and second elements of the array 
    int first = arr[0]; 
    int second = arr[1]; 
  
    // Update every element as required 
    // except the last and the 
    // second last element 
    for (int i = 0; i < n - 2; i++) 
        arr[i] = arr[i + 1] + arr[i + 2]; 
  
    // Update the last and the second 
    // last element of the array 
    arr[n - 2] = arr[n - 1] + first; 
    arr[n - 1] = first + second; 
  
    // Print the updated array 
    printArr(arr, n); 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 3, 4, 2, 1, 6 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    updateArr(arr, n); 
  
    return 0; 
} 