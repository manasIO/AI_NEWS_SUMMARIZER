#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;

vector<int> AsteroidCollision(vector<int>& asteroids){
	vector<int> res;

	for(int ast: asteroids){
		bool destroyed = false;
		if(ast < 0){
			while(!res.empty() && res.back()>0){
				if(abs(ast) > res.back()){
					res.pop_back();
				}else if(abs(ast)==res.back()){
					res.pop_back();
					destroyed = true;
					break;
				}else{
					destroyed = true;
					break;
				}
			}
		}
		if(!destroyed) res.push_back(ast);
	}

	return res;
}


int main(){

	string line;
	getline(cin, line);

	stringstream ss(line);
	vector<int> input;
	int x;
	while(ss >> x){
		input.push_back(x);
	}

	vector<int> answer = AsteroidCollision(input);
	for(int val: answer){
		cout<<val<<" ";
	}
	return 0;
}
