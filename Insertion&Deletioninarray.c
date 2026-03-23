
#include <stdio.h> 
int main() 
{ 
 int arr[100], n, i, pos, element; 
 printf("Enter number of elements: ");
 scanf("%d", &n); 
 printf("Enter elements:\n"); 
 for(i = 0; i < n; i++) 
 { 
   scanf("%d", &arr[i]); 
 } 
 // Insertion
 printf("\nEnter position to insert element: ");
 scanf("%d", &pos); 
 printf("Enter element to insert: ");
 scanf("%d", &element); 
 for(i = n; i >= pos; i--) 
 { 
   arr[i] = arr[i - 1]; 
 } 
 arr[pos - 1] = element; 
 n++; 
 printf("\nArray after insertion:\n"); 
 for(i = 0; i < n; i++) 
 { 
   printf("%d ", arr[i]);
 }

 // Deletion
 printf("\n\nEnter position to delete element: ");
 scanf("%d", &pos);
 for(i = pos - 1; i < n - 1; i++) {
 arr[i] = arr[i + 1];
 }
 n--;
 printf("\nArray after deletion:\n");
 for(i = 0; i < n; i++) 
 {
   printf("%d ", arr[i]);
 }
 return 0;
}
