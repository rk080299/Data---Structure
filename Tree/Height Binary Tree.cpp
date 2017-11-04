#include <iostream>
using namespace std;

struct node 
{
    int data;
    struct node* left;
    struct node* right;
};

struct node * Binarytree( int *list ,int lower ,int upper)
{   
    struct  node *newnode;
    int mid=(lower+upper)/2;
    newnode=new node;
    newnode->data=list [mid];
      
    if(lower>=upper)
   {   
        newnode->left=NULL;
        newnode->right=NULL;
        return (newnode);

    }
 

    if(lower<=mid-1)
		 newnode->left=Binarytree(list,lower,mid-1);
    else
          newnode->left=NULL;
    if(mid+1<=upper)
         newnode->right=Binarytree(list ,mid+1,upper);
    else
    	newnode->right=NULL;
    	
    
    return (newnode);
    

}

int maxDepth(struct node* node) 
{
   if (node==NULL) 
       return 0;
   else
   {
       /* compute the depth of each subtree */
       int lDepth = maxDepth(node->left);
       int rDepth = maxDepth(node->right);
 
       /* use the larger one */
       if (lDepth > rDepth) 
           return(lDepth+1);
       else return(rDepth+1);
   }
} 

int main()
{
    cout << "Enter the elements(0 to exit) : ";
     int  list[100], number=0,info=0;

	struct node * d= new node;
	d=NULL;
    cin>>info;
	
	while(info)
	{
	    list[number++]=info;
		cin>>info;
	}
	number--;
	d=Binarytree(list,0,number);
	
	cout<<"\n The height of tree is : "<<maxDepth(d);
	
    return 0;
}
