/////////////////////////////////////
//fast transpose of a sparse matrix//
/////////////////////////////////////

#include<iostream.h>
#include<conio.h>
#include<process.h>
////////////////////////////////////////////////////
class Sparse
{
 int row,col,value;

 friend void transpose(Sparse *a, Sparse *b);
 friend void accept(Sparse *a);
 friend void display(Sparse *b);
};
////////////////////////////////////////////////////
void accept(Sparse a[])
{
 int m[10][10],R,C;

 cout<<"Enter number of rows - ";
 cin>>R;
 cout<<"Enter number of columns - ";
 cin>>C;

 for(int r=0;r<R;r++)
 for(int c=0;c<C;c++)
 cin>>m[r][c];

 int z=0,nz=0;

 for(r=0;r<R;r++)
 for(c=0;c<C;c++)
 {
  if(m[r][c]==0) z++;
  else nz++;
 }

 if(z>nz)
 {
   cout<<"\nSparse..\n";

   a[0].value=nz;
   a[0].row=R;
   a[0].col=C;

   int i=1;

   for(r=0;r<R;r++)
   for(c=0;c<C;c++)
    {
     if(m[r][c]!=0)
     {
      a[i].row=r;
      a[i].col=c;
      a[i].value=m[r][c];
      i++;
     }
    }
 }
 else
 {
 cout<<"Tense! Exiting!";
 getch();
 exit(0);
 }
}
////////////////////////////////////////////////////

void display(Sparse b[])
{
 cout<<"Row\tColumn\tValue\n";

 for(int i=0;i<=b[0].value;i++)
   cout<<b[i].row<<'\t'<<b[i].col<<'\t'<<b[i].value<<'\n';

}

////////////////////////////////////////////////////
void transpose(Sparse a[],Sparse b[])
{
   int k=1;

   b[0].row=a[0].col;
   b[0].col=a[0].row;
   b[0].value=a[0].value;

   for(int i=0;i<=b[0].row;i++)
   for(int j=1;j<=b[0].value;j++)
 {
   if(i==a[j].col)
    {
     b[k].row=a[j].col;
     b[k].col=a[j].row;
     b[k].value=a[j].value;
     k++;
    }
 }
}
////////////////////////////////////////////////////
////////////////////////////////////////////////////
void main()
{
 clrscr();
 Sparse a[20],b[20];
 accept(a);
 transpose(a,b);
 display(a);

 cout<<"\nTranspose::\n";
 display(b);
 getch();
}

