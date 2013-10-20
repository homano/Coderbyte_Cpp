//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>


using namespace std;

vector<string> StringParsing(string str, string delimiter){
    vector<string> strvec;
    string token;
    size_t pos = 0;
    while((pos = str.find(delimiter)) != string::npos){
    	token = str.substr(0, pos);
    	if (token.length() >= 1)
    		strvec.push_back(token);
    	str.erase(0,pos+delimiter.length());
    }
    if (str.length() >= 1)
    	strvec.push_back(str);
    //for(size_t i = 0; i < strvec.size(); i++)
    	//cout << strvec[i] << endl;
    return strvec;
}

string LetterCount1(string str){
	char locletter, gloletter, temp;
	string word, delimiter = " ";
	int count[26] = {0};
	int glomax = 0, locmax = 0;
	vector<string> strvec = StringParsing(str, delimiter);
	for (size_t i = 0; i < strvec.size(); i++){
		for(size_t j = 0; j < strvec[i].size(); j++){
			temp = tolower(strvec[i][j]);
			if(temp >= 'a' && temp <= 'z'){
				count[int(temp - 'a')]++;
				if(count[int(temp - 'a')] > locmax){
					locmax = count[int(temp - 'a')];
					locletter = strvec[i][j];
				}
			}
		}
		if (locmax > glomax){
			glomax = locmax;
			gloletter = locletter;
			word = strvec[i];
		}
		for (int k = 0; k < 26; k++)
			count[k] = 0;
	}
	cout << gloletter << endl;
	return word;
}
int main()
{
    string str = "This is awesome and you are my   best";
    string word = LetterCount1(str);
    cout << word << endl;
    return 0;

}
