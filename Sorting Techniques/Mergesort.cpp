#include<iostream>
using namespace std;

/*void swap( int x,int y)
{ int temp;
   temp=x;
   x=y;
   y=temp;
}*/
int main()

{
	int n,m,i,j,k,temp;
	cin>>n>>m;
	int a[n],b[m],c[n+m];
	for( i=0;i<n;i++)
		cin>>a[i];
	
	for(i=0;i<m;i++)
		cin>>b[i];
	
	for( i=0;i<n-1;i++)
	 { for( j=i+1;j<n;j++)
	   { if(a[i] > a[j])
	      { temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	   }
	}

      /* for(i=0;i<n;i++)
		cout<<a[i];
*/
	for( i=0;i<m-1;i++)
	 { for ( j=i+1;j<m;j++)
	     { if(b[i]>b[j])
		 temp=b[i];
		b[i]=b[j];
		b[j]=temp;
	     }
	  }

	for(i=j=k=0;i<=m+n; )
	{ if (a[j] <= b[k])
		c[i++]=a[j++];
	  else
 		c[i++]=b[k++];
           if(j==n+1 || k==m+1)
		break;
         }
		
	for(; j<=n;)
	 { 
	   c[i++]=a[j++];
	  }
	for(;k<=m;)
	 { 
	   c[i++]=b[k++];
	  }

	for( i=0;i<m+n;i++)
	cout<<c[i]<<" ";
}
