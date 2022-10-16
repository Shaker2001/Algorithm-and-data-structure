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
  void Reverse()
  {
      Node *pre=NULL;
      Node *next=NULL;
      Node *cur =head;
      while(cur != nullptr)
      {   next =cur->next;
          cur->next=pre;
          pre=cur;
          cur=next;
      }
  }
  Node *get_idx(int idx)
  {
      Node *cur=head;
      for (int i=0 ;i<idx; i++)
      {
          cur=cur->next;
      }
      return cur;
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
class Stack
{
private:
    int sizee;
    int *arr{};
    int top ;
public:
    Stack(int siz)
    {
       sizee=siz;
        arr =new int[siz]{};
       top=-1;
    }
    /// function is_empty()
    bool Is_empty()
    {
        if (top<0)return true;
        else return false;
    }
    /// function is-full()
    bool Is_full()
    {
        if (top==sizee-1)
            return true;
        return false;
    }
    /// fuction push()
    void Push(int val)
    {
       if (Is_full()){cout<<"the function is full, we can't add any additional elements"<<endl;return;}
       arr[++top]=val;
    }
    ///function top()
    int Top()
    {
       if (!(Is_empty()))return arr[top];
    }

    ///function pop
    void pop()
    {
        if (!(Is_empty())){top--;return;}
        cout<<"the stack is empty,so we can't pop "<<endl;return;
    }
    void display()
    {
        for (int i =sizee-1 ;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return;
    }

};
int main(){ FIO;


///////////////////////////////////////////////////////
////////////////////////////////////////////////
///////////////////////////////////////////
////HELLO STACK
cout<<endl<<"HELLOOOOOOOOOOOOOOOOOOO STACK \n ";
Stack st(6);
st.Push(6);
st.Push(3);
st.Push(5);
st.Push(8);
st.Push(2);
st.display();
return 0;
}

