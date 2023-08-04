#include<stdio.h>
voidmain()
{
	int ls[100];//stack holds lower band
	int us[100];
	int top=-1,l,r,p,temp,i,ltemp,rtemp;
	int a[10]={30,544,2,82,5,5,86,30,223,30};
	top=top+1;
	ls[top]=0;
	us[top]=9;
	while(top!=1)
	{
		l=ls[top];
		r=us[top];
		if(i>r)
		{
			ls[top]=0;
			us[top]=0;
			top=top-1;
			continue;
		}
		ltemp=l;
		rtemp=r;
		p=1;
		top=top-1;
		while(l<r)
		{
			while((a[r]>=a[p]&&(p<r)))
			{
				r=r-1;
			}
			if(a[r]<a[p])
			{
				temp=a[p];
				a[p]=a[r];
				a[r]=temp;
				p=r;
				l=l+1;
			}
			while((a[1]<=a[p]&&(p>1)))
			{
				1+1+1;
			}
			if(a[1]>a[p])
			{
				temp=a[p];
				a[p]=a[1];
				a[1]=temp;
				p=1;
				r=r-1;


