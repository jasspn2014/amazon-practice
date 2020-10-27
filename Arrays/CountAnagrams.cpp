#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
using namespace std;

bool isCountNil(int *arr){
	for(int i=0;i<26;i++){
		if(arr[i] != 0){
			return false;
		}
	}

	return true;
}

void printCount(int *arr){
	for(int i=0;i<26;i++){
		cout << arr[i] << " ";

	}

	cout << endl;
}

int main(){
	string phrase = "forxxorfxdofr";
	string word = "for";

	int n = phrase.size();
	int k = word.size();

	int count[26] = { 0 };

	for(int i=0;i<k;i++){
		count[phrase[i]-97]--;
		count[word[i]-97]++;
	}


	int res = 0;
	if(isCountNil(count)){
		res++;
	}

	for(int i=k;i<n;i++){
		count[phrase[i]-97]--;
		count[phrase[i-k]-97]++;

		printCount(count);
		if(isCountNil(count)){
			res++;
		}
	}

	cout << res << " ";
	return 0;
}
