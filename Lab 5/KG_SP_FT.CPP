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
 int nonzero[20],starting_pos[20];
 for(int i=0;i<a[0].col;i++)
	nonzero[i]=0;
 for(i=1;i<=a[0].value;i++)
	nonzero[a[i].col]++;

  starting_pos[0]=1;

 for(i=1;i<a[0].col;i++)
	starting_pos[i]=starting_pos[i-1]+nonzero[i-1];

   b[0].row=a[0].col;
   b[0].col=a[0].row;
   b[0].value=a[0].value;

   int j;

 for(i=1;i<=a[0].value;i++)
 {
   j=starting_pos[a[i].col]++;

   b[j].row=a[i].col;
   b[j].col=a[i].row;
   b[j].value=a[i].value;
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

