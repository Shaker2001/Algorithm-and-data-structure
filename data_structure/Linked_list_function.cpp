#include<algorithm>
#include <bits/stdc++.h>
#define  endl  '\n'
#define  cinarr0   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
#define  cinarr1   int n; cin>>n; int arr[n+1]={0}; for (int i=1; i<=n; i++){cin>>arr[i];}
#define  mem(arr,val) memset(arr,val,sizeof(arr))
#define  zero   for+(int i =0 ; i<n ; i++)
#define  one   for(int i =1 ; i<=n ; i++)
#define whilet    int t ; cin>>t ;while(t--)
#define pp pair<int, int>
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long
using namespace std;

struct Node{
 int data ;
 Node *next;
};
class linked_list
{
private:
  Node *head=nullptr;
  int Isize;
public:

  void insert_back(int value)
  {
      Node *newnode=new Node;
      newnode->data=value;
      if (head==NULL)
      {
          head =newnode;
          Isize++;
      }
      else
      {
          Node *current = head ;
          while (current->next !=NULL)
          {
              current=current->next;
          }
          current->next =newnode;
          Isize++;
      }
  }
  void insert_front(int value)
  {
      Node *cur=new Node;
      cur->data= value;
      cur->next=head;
      head=cur;
      
  }

  void display()
  {
      Node *cur =head;
    while(cur !=nullptr)
    {
       cout<< cur->data<<" ";
       cur=cur->next;
    }
  }
};
int main(){ FIO;

linked_list list1;

list1.insert_front(11);
list1.insert_front(133);
list1.display();
return 0;
}
