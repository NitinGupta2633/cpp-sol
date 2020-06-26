#include<iostream>
int main()
{
	int T;
	std::cin>>T;
	int x,y,z;
	int N,P,K;int sum1,sum;
	int i=1,j=0;
	int result[T];
	while(i<=T)
	{
		std::cin>>N;
		std::cin>>K;
		z=K;
		int *p=new int[N];
		while(j<N)
		{ std::cin>>x;
			p[j]=x;
			j++;
			sum=sum+x;
			if(z<x)
			{
				sum1=sum1+z;
			}
			else
			{
				sum1=sum1+x;
			}
			
		}  y=sum-sum1;
		result[i-1]=y;
			delete [] p;
	}
	for(int o=0;o<T;o++)
	{
		std::cout<<result[o]<<std::endl;
	}
	

}
