#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>
//#include <boost/algorithm/string/split.hpp>


using namespace std;

// the following tries to parse the string using space and choose the longest word
string LongestWord(string sen) {
  vector<string> field;
  boost::split(field, sen, boost::is_any_of(" "));
  int maxlen = 0;
  string target;
  for (int i = 0; i < field.size(); i++){
    if(field[i].length() > maxlen){
      maxlen = field[i].length();
      target = field[i];
    }
  }
  // code goes here
  sen = target;
  return sen;

}

// The following tries to go through the string and finds the longest word
// this piece of code works
string LongestWord(string sen) {
  vector<char> field, temp;
  int maxlen = 0, count = 0;
  string sen1;
  for (int i = 0; i < int(sen.length()); i++){
    if((sen.at(i) >= 'a' && sen.at(i) <= 'z') || (sen.at(i) >= 'A' && sen.at(i) <= 'Z')){
      temp.push_back(sen.at(i));
      count++;
      if(count > maxlen){
    	field.clear();
      	maxlen = count;
      	for(int j = 0; j < count; j++)
      		field.push_back(temp[j]);
      }
    }
    else{
    	temp.clear();
    	count = 0;
    }
  }
  // code goes here
  for(int k = 0; k < maxlen; k++)
  	sen1+=field[k];
  sen = sen1;
  return sen;

}

int main() {
  string str = "this is good";
  // keep this function call here
  cout << LongestWord(str) << endl;
  return 0;

}
