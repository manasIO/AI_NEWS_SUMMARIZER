#include<iostream>
using namespace std;

string removeStars(string s){
	string res;
	for(char c: s){
		if(c=='*') res.pop_back();
		else res+=c;
	}
	return res;

}

int main(){
 string input;
 cin>>input;
 string result = removeStars(input);
 cout<<result;
return 0;
}


