#include<iostream>
#include<algorithm>
using namespace std;


bool ispermutation(string str1,string str2){
	int n1=str1.length();
	int n2=str2.length();

	if(n1!=n2)
		return false;

	sort(str1.begin(),str1.end());	sort(str2.begin(),str2.end());
int n;
	for(int i=0;i<n;i++){
		if(str1[i]!=str2[i])
			return false;

	}
	return true;
}
int main() 
{ 
    string str1 = "test"; 
    string str2 = "ttew"; 
    if (ispermutation(str1, str2)) 
    cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  
    return 0; 
} 