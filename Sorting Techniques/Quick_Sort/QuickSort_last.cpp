#include <iostream>
using namespace std;

int split(int a[], int low,int high)
{
  int position;
   position=a[high];
   int i=low-1;

   for(int j=0;j<=high-1;j++)
    { 
      if(a[j]<=position)
	{
          i++;
	  swap(	a[i],a[j]);
	} 	
    }
  swap(a[i+1],a[high]);
  return (i+1);
}




void sort(int a[],int low,int high)
{ 

  if(low<high)
  {  
	int p=split(a,low,high);
	//cout<<p<<" ";
	sort(a,low,p-1);
	sort(a,p+1,high);
   }

}

void swap (int d,int e)
{ int t;
  t=d;
  d=e;
  e=t;
}



int main()
{ int n,i;
 cin>>n;
 int b[n];

 for(i=0;i<n;i++)
  cin>>b[i];
sort(b,0,n-1);

for(i=0;i<n;i++)
  cout<<b[i];

return 0;

}
 




