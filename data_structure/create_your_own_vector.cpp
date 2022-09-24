
#include<algorithm>
#include <bits/stdc++.h>
#define  endl  '\n'
#define  cinarr0   int n; cin>>n; int arr[n]; for (int i=0; i<n; i++){cin>>arr[i];}
#define  cinarr1   int n; cin>>n; int arr[n+1]={0}; for (int i=1; i<=n; i++){cin>>arr[i];}
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define  zero   for(int i =0 ; i<n ; i++)
#define  one   for(int i =1 ; i<=n ; i++)
#define whilet    int t ; cin>>t ;while(t--)
#define FIO cin.tie(0), cin.sync_with_stdio(0)
#define ll   long long

using namespace std;
class Vector
{
private:
    int *arr{};
    int Isize {};
    	int capacity { };

public:
    Vector(int siz)
    {
        arr=new int[siz]{};/// the difference between the codeblocks and the other compiler that he can accept the size of array as variable
        /// so that's what happen in codeblocks he declare its pointer we declare pointer arr and after the user enter his size

        Isize=siz;
    }
    void expand_capacity() {
		// Double the actual array size
		capacity *= 2;
		cout << "Expand capacity to " << capacity << "\n";
		int *arr2 = new int[capacity] { };
		for (int i = 0; i < Isize; ++i)
			arr2[i] = arr[i];	// copy data

		swap(arr, arr2);
		delete[] arr2;
	}

    void push(int val, int idx)
    {
        if (idx>=Isize)
        {
            cout<<"index not found"<<endl;
            return;
        }
        arr[idx]=val;
    }
    void Iswap (int a[])
    {
        int c[Isize];
       for (int i =0; i<Isize; i++)
       {
           c[i]=arr[i];
       }
       for (int i =0; i<Isize; i++)
          {arr[i]=a[i];}
       for (int i =0; i<Isize; i++)
            {a[i]=c[i];}
            return;
    }
 int largest_element(int arr[])
 { int n = sizeof(arr)/sizeof(arr[0]);
     int large=arr[0];
     for (int i =1; i<n; i++)
     {
         large=max(large,arr[i]);
     }
     return large;
 }
 int second_largest_element(int arr[])
 { int n = sizeof(arr)/sizeof(arr[0]);
     int large=arr[0];
     int second_large=arr[0];
     for (int i =1; i<n; i++)
     {
         large=max(large,arr[i]);
     }
     for (int i =0; i<n; i++)
     {  if (arr[i]!=large)
           {
               second_large=max(large,arr[i]);
           }
     }
     return second_large;
 }

int  Ipop_front()
{
  int *arr2=new int [Isize-1];

  int pop =arr[0];
  for (int i =1 ;i<Isize; i++){ arr2[i-1]=arr[i];}
  swap(arr,arr2);
  Isize--;
  delete [] arr2;
return pop;
}

int  Ipop_back()
{
  int *arr2=new int [Isize-1];

  int Iback =arr[Isize-1];
  for (int i =0 ;i<Isize-1; i++){ arr2[i]=arr[i];}
  swap(arr,arr2);
  Isize--;
  delete [] arr2;
return Iback;
}
int  del(int idx)
{
    if (idx>Isize){cout<<"index is out of range "<<endl;return -1;}
    int *arr2=new int[Isize-1];
    int del_element=arr[idx];
    for (int i =0 ; i<Isize-1 ; i++)
    {
        if (i<idx)
        {
            arr2[i]=arr[i];
        }
        else
        {
            arr2[i]=arr[i+1];
        }
    }
     swap(arr,arr2);
  Isize--;
  delete [] arr2;
  return del_element;
}
void rotate_right()
{
    int *arr2=new int[Isize];

    for (int i =1 ; i<Isize ; i++)
    {
      arr2[i]=arr[i-1];
    }
    arr2[0]=arr[Isize-1];
  swap(arr,arr2);
  delete [] arr2;
  return ;

}
void rotate_left()
{
    int *arr2=new int[Isize];

    for (int i =0 ; i<Isize-1 ; i++)
    {
      arr2[i]=arr[i+1];
    }
    arr2[Isize]=arr[0];
  swap(arr,arr2);
  delete [] arr2;
  return ;

}




void print()
{
    for (int i=0 ;i <Isize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


};


int main(){ FIO;
int siz =5;

Vector v1(siz);

v1.push(6,0);
v1.push(7,1);
v1.push(9,2);
v1.push(10,3);
v1.push(11,4);
int arr[5]={1,2,3,4,5};
v1.Iswap(arr);
for (int i =0; i<5; i++)
    cout<<arr[i]<<" ";
cout<<endl;
v1.print();
/////////////
cout<<"\n <------ function large element ------> \n"<<endl;
int mx_element =v1.largest_element(arr);
cout<<mx_element<<endl;
cout<<"\n <------ pop_front() ------> \n"<<endl;
int pop =  v1.Ipop_front();
v1.print();
cout<<endl<<pop<<endl;
cout<<"\n <------ pop_back() ------> \n"<<endl;
int I_back =  v1.Ipop_back();
v1.print();
cout<<endl<<I_back<<endl;
cout<<"\n <------ del ------> \n"<<endl;
int deleted =  v1.del(2);
v1.print();
cout<<endl<<deleted<<endl;
cout<<"\n <------ rotate_right() ------> \n"<<endl;
int sizee =5;

Vector v2(sizee);

v2.push(6,0);
v2.push(7,1);
v2.push(9,2);
v2.push(10,3);
v2.push(11,4);
cout<<"**** before the rotation  ***** "<<endl;
v2.print();
cout<<"**** after the rotation to right  ***** "<<endl;
v2.rotate_right();
v2.print();
cout<<"**** after the rotation to left ***** "<<endl;
v2.rotate_left();
v2.print();


        return 0;
}

