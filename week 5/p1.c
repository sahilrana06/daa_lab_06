#include <stdio.h>

void findMaxOccurrence(char arr[], int n) 
{
   char max = arr[0];
   for (int i = 1; i < n; i++) 
   {
       if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
   int count[max+1];
   for (int i=0;i<=max;i++) 
    {
       count[i]=0;
   }
   for (int i=0;i<n;i++) 
   {
       count[arr[i]]++;
   }
   char maxOccurrenceElement;
   int maxOccurrenceCount = 0;
   for (int i = 0; i <= max; i++) 
   {
       if (count[i] > maxOccurrenceCount) 
       {
           maxOccurrenceElement = i;
           maxOccurrenceCount = count[i];
       }
   }
   if (maxOccurrenceCount == 1) 
    {
       printf("No Duplicates Present\n");
    } 
   else
    {
       printf("%c %d\n", maxOccurrenceElement, maxOccurrenceCount);
    }
}
int main() 
{
   int t;
   printf(" ENTER NO. OF TEST CASES : ");
   scanf("%d", &t);
   while (t--)
    {
       int n;
       printf(" ENTER  SIZE : ");
       scanf("%d", &n);
       char arr[n];
       printf("ENTER ELEMENTS : ");
       for (int i = 0; i < n; i++) 
       {
           scanf(" %c", &arr[i]);
       }
       findMaxOccurrence(arr, n);
   }
   return 0;
}
