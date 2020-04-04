#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;

	int arr[100];

	for(int i=0;i<N;++i) cin>>arr[i];

		for (int i=1;i<N;i++)
		{
			int curEle=arr[i];
			int st = i-1;

			while(st>=0)
			{
				if (arr[st]>curEle){
					arr[st+1]=arr[st];
					--st;
				}
				else{
					break;
				}
			}
		arr[st+1]=curEle;
		}
		for  (int i=0;i<N;++i) cout<<arr[i]<<" ";

}