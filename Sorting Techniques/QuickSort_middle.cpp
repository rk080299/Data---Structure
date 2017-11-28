
#include <iostream>
#include <iomanip>
using namespace std;



void swap(int e,int f)
{ int temp;
  temp=e;
  e=f;
  f=temp;}


void quickSort(int a[],int low ,int high)

{ int l,h,middle;
  if(low >= high) return;

   l=low;
   h=high;

  middle = a[(l+h)/2];

while(l<=h) 
  {  while(a[l] < middle) 
	l++;
      while(a[h] > middle) 
	h--;
    if(l <= h)
	{ swap(a[l],a[h]);
          l++; h--;}
   }
   quickSort(a,low,h);
   quickSort(a,l,high);
 }

int main()
{ int n;	
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
   cin>>a[i];

quickSort(a,0,n-1);

cout<<"Sorted Array"<<"/n";
 for(int i=0;i<n;i++)
   cout<<a[i]<<" ";

return 0;


} 

   
