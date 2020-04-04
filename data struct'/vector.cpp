#include<iostream>
#include<vector>

using namespace std;


void print(vector int &v){
	for(vector<int>::iterator iter=v.begin(),iter!=v.end() ++iter )
		cout<<*iter<<endl;

}


	int main(){
vector <int> vec;
cout<<"initial size"<<vec.size()<<endl;
cout<<"Enter three integers"<<endl;
int x;
for(int i=0;i<3;i++){cin>>x;
	vec.push_back(x);
}
cout<<"After input current size"<<vec.size()<<endl;
print(vec);
vector<int>::iterator itr=v.begin();
itr=itr+2;
vec.insert(itr,9);
cout<<"elements after inserting"<<endl;
print(vec);
vec.erase(vec.begin()+2);
print(vec();
vector <int> vec2(vec);
cout<<"\n after copy constructor new values are"<<endl;
print(vec2);
	}
