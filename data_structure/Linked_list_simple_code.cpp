
#include<algorithm>
#include <bits/stdc++.h>
#define  endl  '\n'
#define  cinarr0   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
#define  cinarr1   int n; cin>>n; int arr[n+1]={0}; for (int i=1; i<=n; i++){cin>>arr[i];}
#define  mem(arr,val) memset(arr,val,sizeof(arr))
#define  zero   for(int i =0 ; i<n ; i++)
#define  one   for(int i =1 ; i<=n ; i++)
#define whilet    int t ; cin>>t ;while(t--)
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long

using namespace std;

struct Node{
 int data ;
 Node *next;
};
int main(){ FIO;
Node *node1=new Node;
Node *node2=new Node;
Node *node3=new Node;
Node *node4=new Node;

node1->data=5;
node2->data=7;
node3->data=8;
node4->data=9;
node1->next=node2;
node2->next=node3;
node3->next=node4;
node4->next=nullptr;
cout<<node4->data<<endl;
cout<<node2->next->next->data<<endl;
cout<<node1->next->next->data<<endl;

  return 0;
}

