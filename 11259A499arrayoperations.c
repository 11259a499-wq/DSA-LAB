//basic array operations

//---------------------------------
//#print array elements
//#----------------------------------
/*#include<stdio.h>
int main()
{
int arr[]={10,20,30,40,50};
int n=5;
for (int i=0;i<n;i++)
{
printf("%d",arr[i]);
}
 printf("\n");

 }*/
 
 //-----------------------------
 //# array elements in reverse order
 //-----------------------------
 
 /*#include<stdio.h>
 int main()
 {
 int arr[]={12,24,36,48,60};
 int n=5;
 printf("reverse order:");
 for(int i=n-1;i>=0;i--)
 {
 printf("%d",arr[i]);
 }
 printf("\n");
 }*/
 
 //------------------------------
 //insert a new element
 //------------------------------
 
 /*#include<stdio.h>
 int main()
 {
 int arr[10]={10,20,40,50};
 int n=4,val=30,pos=2;
 for(int i=n-1;i>=pos;i--)
 {
 arr[i+1]=arr[i];
 }
 arr[pos]=val;
 n++;
 printf("array after insertion:");
 for(int i=0;i<n;i++)
 {
 printf("%d",arr[i]);
 }
 }*/
 
 //-------------------------------
 // insert at beginning
 //-------------------------------
 
 #include<stdio.h>
 int main()
 {
 int arr[10]={2,3,4,5};
 int n=4,val=1;
 for(int i=n-1;i>=0;i--)
 {
 arr[i+1]=arr[i];
 }
 arr[0]=val;
 n++;
 printf("array after inserting at beginning:");
 for(int i=0;i<n;i++)
 {
 printf("%d",arr[i]);
 printf("\n");
 }
 }
