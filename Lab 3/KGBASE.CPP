#include<iostream.h>
#include<conio.h>

class stack
{
 int s[10], top;

 public:
				  //PROGRAM HAS ERROR
	stack()
	{
	 top=-1;
	}

	void push(char);
	char pop();
	void display();

};

void stack::display()
{
 cout<<endl;
 for(int i=top;i>=0;i--)
 cout<<s[i]<<' ';
}


void stack::push(char a)
{
 if(top==9)
	cout<<"Stack Overflow!";
 else s[++top]=a;
}


char stack::pop()
{
 if(top==-1)
  {
  cout<<"\nStack Underflow!";
  return -1;
  }

 else
 {
  int temp=top;
  top--;
  return s[temp];
 }
}


void main()
{
 clrscr();

 stack S1;
 int dec;
 cout<<"Enter Decimal Number - ";
 cin>>dec;

 int base;
 cout<<"Enter base - ";
 cin>>base;



 for(;dec>0;dec/=base)
 {if(dec%base<10)
	 S1.push(dec%base+'0');

  else
  {
  switch(dec%base)
   {
    case 10:S1.push('A');break;
    case 11:S1.push('B');break;
    case 12:S1.push('C');break;
    case 13:S1.push('D');break;
    case 14:S1.push('E');break;
    case 15:S1.push('F');break;
   }
  }
 }
 cout<<"At base "<<base<<"--";
 S1.display();

 getch();
}