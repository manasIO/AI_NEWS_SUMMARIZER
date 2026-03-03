#include<string>
#include<cstdio>
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	string word1 = "abc";
	string word2 = "bca";
    
	if(word1.size()!=word2.size()) cout<<"false";
    	unordered_map<char, int> mp, mp2;
	for(char var: word1) mp[var]++;
	for(char var: word2) mp2[var]++;
	int count1=0,count2=0;
	for(auto& [key, value]: mp) count1 += value;
	for(auto& [key, value]: mp) count2 += value;
	
	if(count1==count2) cout<<"TRUE";
	else cout<<"FALSE";
	return 0;
}
