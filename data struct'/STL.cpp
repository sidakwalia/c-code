#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector <int> &v){
	for(vector<int>::iterator iter=v.begin();iter!=v.end();++iter)
		cout<<* iter<<endl;
}


int main(){
	vector <int> vec;
	vec.push_back(3);
	vec.push_back(12);

	vector<int>::iterator itr1=vec.begin();
    vector<int>::iterator itr2=vec.end();
    itr2--;print(vec);
    cout<<endl;
    cout<<*itr2;

    sort(itr1,itr2);
    
}


