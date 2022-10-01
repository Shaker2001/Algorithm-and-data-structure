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
  int get_back()
  {
      if (head != NULL)
      {
          Node *cur= head;
          while(cur->next !=nullptr)
          {
              cur=cur->next;
          }
           return cur->data;
      }
      else
        return -1;

  }
  int get_front()
  {
    return head->data;
  }
void delete_front()
{
    Node *cur =head->next;
    delete head;
    head =cur;
    Isize--;
}
int delete_back()
  {
      if (head != NULL)
      {
          Node *cur= head->next;
          while(cur->next->next!=nullptr)
          {
              cur=cur->next;
          }
          cur->next=nullptr;
          //delete cur;

          Isize--;

      }
      else
        return -1;

  }
  int get_thi(int idx)
  {
      if (head != NULL)
      { int cnt =1;
          Node *cur= head->next;
          while(cur->next!=nullptr &&cnt<idx-1)
          {
              cur=cur->next;
                  cnt++;

          }
          //delete cur;
      return cur->data;

      }
      else
        return -1;
  }
 int find_node(int value)
 {  bool found=false;
    int  cnt =0;
     Node *cur= head->next;
          while(cur->next!=nullptr)
          {    if (cur->data==value){found =1;break;}
          cnt++;
              cur=cur->next;
          }
          if (found)
            return cnt+1;
            else
                return -1;
 }
  void display()
  {
      Node *cur =head;
    while(cur !=nullptr)
    {
       cout<< cur->data<<" ";
       cur=cur->next;
    }
    cout<<endl;
  }
};
int main(){ FIO;

linked_list list1;
list1.insert_back(4);
list1.insert_back(3);
list1.insert_back(6);
list1.insert_back(0);
list1.insert_back(1);
list1.insert_front(10);
list1.insert_front(22);
int back =list1.get_back();
int front=list1.get_front();
cout<<"using get_back : "<<back<<endl<<"using get_front :  "<<front<<endl;
list1.display();
cout<<"\n **************************** \n"<<endl;
list1.delete_back();
cout<<"After delete back"<<endl;
list1.display();
cout<<"\n **************************** \n"<<endl;
list1.delete_front();
cout<<"After delete front"<<endl;
list1.display();
cout<<"\n **************************** \n"<<endl;
int get_idx=list1.get_thi(3);
cout<<"After get_thi : "<<get_idx<<endl;
list1.display();
cout<<"\n **************************** \n"<<endl;
int get_value=list1.find_node(6);
cout<<"After get_value : "<<get_value<<endl;
cout<<"\n **************************** \n"<<endl;
int get_value_not_found =list1.find_node(5);
cout<<"After geting_value Not Found : "<<get_value_not_found<<endl;
return 0;
}
