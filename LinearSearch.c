#include <stdio.h> 
int main() 
{ 
 int arr[100], n, i, key, low, high, mid, found = 0; 
 printf("Enter number of elements: ");
 scanf("%d", &n); 
 printf("Enter sorted elements:\n"); 
 for(i = 0; i < n; i++) 
 { 
   scanf("%d", &arr[i]); 
 } 
 printf("Enter element to search: ");
 scanf("%d", &key); 
 // Linear Search 
 for(i = 0; i < n; i++) 
 { 
   if(arr[i] == key) 
   { 
     printf("Element found at position %d using Linear Search\n", i + 1); 
     found = 1; 
     break; 
   } 
 } 
 if(!found) 
 { 
   printf("Element not found using Linear Search\n"); 
 }
return 0;
}
