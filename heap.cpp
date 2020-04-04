#include<vector>
using namespace std;

class Heap{
	private:
	vector<int> v;

	int parent(int i){ return i/2;}
	int left(int i){return i*2;}
	int right(int i){return i*2;}

	void heapify(int i){
	int smallest=i;

	if(left(i)<=sze && v[left(i)]<v[smallest])
	smallest=left[i];
	}

	if(right(i)<=sze && v[right(i)]<v[smallest] )
	smallest=right[i];
	}

	if (smallest !=i){
	swap(v[smallest],v[i]);
	heapify(smallest);
	}



	public:
	Heap(){

	sze=0;
	v.push_back(-1);
	}


	void push(int ele){
	v.push_back(ele);
	++sze;

	int curIdx=sze;

	while(curIdx>1 && v[curIdx]<v[parent(curIdx)])
	swap(v[curIdx],v[parent(curIdx)]);
	curIdx=parent(curIdx);
	}
}

void pop(){
	if(sze<=0) return;
	swap(v[i],v[sze]);

	v.pop_back();
	--sze;

	heapify(1);
	}

