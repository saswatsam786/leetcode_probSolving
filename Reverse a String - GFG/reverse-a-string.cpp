// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
    int i=0,j=str.size()-1;
    char ch;
    while(i<j){
        char ch = str[i];
        str[i]=str[j];
        str[j]=ch;
        i++;
        j--;
    }
    
    return str;
  //Your code here
}