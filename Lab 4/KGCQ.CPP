// circular queue

#include<iostream.h>
#include<conio.h>

enum boolean{false, true};


class CQ
{
 int front,rear,size,a[20];

 public:
 CQ(int s=5)
 {
  size=s;
  front=rear=0;
 }

 boolean Isempty()
 {
  if(front==rear) return true;
  return false;
 }

 boolean Isfull()
 {
  if(front==(rear+1)%size) return true;
  return false;
 }

 void display();
 void ins(int);
 int del();
};

void CQ::display()
{
  for(int i=(front+1)%size;i!=rear;i=(i+1)%size)
	cout<<a[i]<<endl;
  cout<<a[i];
}

void CQ::ins(int ele)
{
 if(Isfull()) cout<<"FULL!";
 else
	{
	 rear=(rear+1)%size;
	 a[rear]=ele;
	}
}

int CQ::del()
{
 if(Isempty())
	{
	 cout<<"EMPTY!";
	 return -1;
	}
 else
	{
	 front=(front+1)%size;
	 return a[front];
	}

}


void main()
{
 clrscr();

 int size,el;

 cout<<"Enter size of the queue - ";
 cin>>size;

 CQ c(size);

 cout<<"Insert "<<size-1<<" elements!\n";
 for(int i=0;i<size;i++)
  {
   cin>>el;
   c.ins(el);
  }

 cout<<"\n\nElements entered:\n";

 do
 {cout<<endl;
  c.display();
  cout<<"\nHit any key to delete!\n";
  if(!kbhit())
  {
   getch();
   int del=c.del();
   cout<<del<<" was deleted!\n";
  }
 }while(!c.Isempty());

 getch();
}

