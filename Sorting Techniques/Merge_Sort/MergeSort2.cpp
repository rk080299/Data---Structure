#include <iostream>

using namespace std;


void merge(int a[],int l,int m,int r)
{
	int n1=m-l+1, n2=r-m,i,j,k;
	int L[n1],R[n2];

	for(i=0;i<n1;i++)
	 L[i]=a[i+l];

	for(j=0;j<n2;j++)
	 R[j]=a[m+1+j];
	i=j=0;
	k=l;

	while(i<n1 && j<n2)
	{ if(L[i] <= R[j])
	      { a[k]=L[i];
		i++;}
	   else
	      {a[k]=R[j];
 		j++;	}	
	
	 k++;
        }
	
	while(i<n1)
	{ a[k]=L[i];
	   i++;k++;
	}
	
	while(j<n2)
	{ a[k]=R[j];
	  j++;k++;
		
	}

}

void mergesort(int a[],int l,int r)
{ if(l<r)
    {	int m=l+(r-l)/2;
        
	mergesort(a,l,m);
	mergesort(a,m+1,r);

	merge(a,l,m,r);
     }
}


int  main()
{

int n,i;
cout<<"Enter the No Elements"<<"\n";
cin>>n;
int a[n];

cout<<"Enter the Elements of Array"<<"\n";
for(i=0;i<n;i++)
cin>>a[i];

mergesort(a,0,n-1);

cout<<"Array After Sorting"<<"\n";
for(i=0;i<n;i++)
cout<<a[i]<<" ";


}
