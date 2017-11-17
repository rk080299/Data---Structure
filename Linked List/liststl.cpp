#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;
void show (list <int> g)
{
    list<int> :: iterator it;
    for(it=g.begin();it!=g.end();++it)

        cout<<*it<<"\n";
}

int main()
{
  list <int> g;
  list  <int> ::iterator ite;
  ite=g.begin();
  int n,i,j;
  cin>>n;
  for(i=0;i<n;i++)
  {  cin>>j;
    g.push_back(j);
  }
 cout<<"Original List"<<"\n";
 show(g);
 advance(ite,g.front());
 cout<<"After Reverse"<<"\n";
 g.reverse();
 show(g);
 cout<<"After Sorting"<<"\n";
 g.sort();
 show (g);
cout<<"After Deletion"<<"\n";
 g.pop_back();
 show(g);

}
