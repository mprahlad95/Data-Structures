// Multiple Stack

#include<iostream.h>
#include<conio.h>

enum boolean{false, true};


class multistack
{
 int bottom[4],top[4],n,maxsize,a[20];       //'n' is no of stacks in the main array 'a'

 public:

 multistack(int,int);
 void display(int);
 void push(int,int);
 int pop();
 boolean Isempty(int);
 boolean Isfull(int);

};

 /////////////////constructor////
 multistack::multistack(int size=12, int n=4)
 {
 for(int i=0;i<n;i++)
 top[i]=bottom[i]=((size/n)*i)-1;
 }
 ////////////////////////////////
 boolean Isempty(int index)
 {
  if(top[index]==bottom[index]) return true;
  return false;
 }
 ////////////////////////////////
 boolean Isfull(int index)
 {
  if(top[index]==bottom[index+1]||top[index]==(maxsize-1)) return true;
  return false;
 }
 ////////////////////////////////
 void multistack::display(int index)
 {
  cout<<endl;
  for(int k=bottom[index]+1;k<=top[index];k++)
  cout<<a[k]<<endl;
 }
 ////////////////////////////////
 void multistack::push(int index,int ele)
 {
  if(Isfull()) cout<<"FULL!";
  else
	a[++top[index]]=ele;
 }
 ////////////////////////////////
 int multistack::pop()
 {
  if(Isempty())
	{
	 cout<<"EMPTY!";
	 return -1;
	}
  else
	return a[top[index]--];

 }
 ////////////////////////////////
 ////////////////////////////////
void main()
{
 clrscr();

 int size,n,el;



 cout<<"\t\t\t***MULTIPLE STACKS***\n\n";
 cout<<"1)PUSH\n2)POP\n3)DISPLAY\n4)EXIT";

 cout<<"Enter choice - ";
 ch=getche();

 do
 {
 }while(ch!=


    ////////
   ////////
  ////////
  //BLEH//
  ////////
 ////////
////////






