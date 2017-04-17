#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[6][6];
 cout<<"Enter the Matrix:::\n\n";

 for(int r=0;r<6;r++)
 for(int c=0;c<6;c++)
 cin>>a[r][c];

 int z=0,nz=0;

 for(r=0;r<6;r++)
 for(c=0;c<6;c++)
 {
  if(a[r][c]==0) z++;
  else nz++;
 }

 if(z>nz) cout<<"\n\nSparse";
 else cout<<"\n\nTense";
getch();
}