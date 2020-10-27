#include<bits/stdc++.h>
using namespace std;

class LRU{
	list<int> q;
	unordered_map<int,list<int> :: iterator> mp;
	int cache_size;
	int hit,miss;
public:
	LRU(int size){
		cache_size = size;
		hit = 0;
		miss = 0;
	}

	void refer(int x){
		if(mp.find(x) == mp.end()){
			if(q.size() == cache_size){
				int last = q.back();
				q.pop_back();
				mp.erase(last);
			}
			miss++;
		}
		else{
			hit++;
			q.erase(mp[x]);
		}
		q.push_front(x);
		mp[x] = q.begin();
	}

	void displayCache(){
		for(auto i : q){
			cout << i << " ";
		}
	}

	int getHit(){
		return hit;
	}

	int getMiss(){
		return miss;
	}
};
int main(){
	LRU cache(4);
	cache.refer(1);
  cache.refer(2);
  cache.refer(3);
  cache.refer(1);
  cache.refer(4);
  cache.refer(5);
  cache.displayCache();
	cout << endl;
	cout << "Hit: " << cache.getHit() << endl;
	cout << "Miss: " <<cache.getMiss();

}
