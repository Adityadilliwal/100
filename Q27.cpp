//Smallest & largest element in 2D array
#include<iostream>
using namespace std;
main()
{
	int r,c,sml,lar;
	cout<<"Enter rows and columns\n";
	cin>>r>>c;
	int a[r][c];
	cout<<"Enter elements\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		cin>>a[i][j];
	}
	sml=lar=a[0][0];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(a[i][j]<sml)
			sml=a[i][j];
			if(a[i][j]>lar)
			lar=a[i][j];
		}
	}
	cout<<"Largest: "<<lar;
	cout<<"\nSmallest: "<<sml;	
}
