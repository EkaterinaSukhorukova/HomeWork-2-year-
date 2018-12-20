#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#include <map>

using namespace std;

map <string, int> m;
map <string, int>::iterator it;

int main() {
	
	freopen("map.out", "w", stdout);

	//Checking an emptyness of the map  
	if (m.empty()) 
		cout << "Map is empty" << endl;
	else cout << "Map is not empty" << endl;
	//if map is empty it is right

	//inserting new elements in the map
	m.insert(pair<string, int>("A", 1));
	m.insert(pair<string, int>("B", 2));
	m.insert(pair<string, int>("C", 3));
	m.insert(pair<string, int>("D", 4));
	m.insert(pair<string, int>("E", 5));
	m.insert(pair<string, int>("F", 1));
	m.insert(pair<string, int>("G", 1));
	
	//output of inserted elements
	for (it = m.begin(); it != m.end(); it++)
      cout << (*it).first << " : " << (*it).second << endl;
  	//if all inserted pairs are in the output then insert, begin and end function work right  
	
	//now map must be not empty
	if (m.empty()) 
		cout << "Map is empty" << endl;
	else cout << "Map is not empty" << endl;
 
 	//cheking the size of the map. Current size must be 7
	cout << "Size of the map is: " << m.size() << endl; 
	
	//checking search by the key. Right answer is 1 2 1
	cout << m["A"] << " " << m["B"] << " " << m["F"] << endl;
	
	//checking find function. "A" must be in the map, "R" doesn't
    if (m.count("A")) cout << "A is the element of map";
    else cout << "A is not the element of map";
    
    cout << endl;
    
    if (m.count("R")) cout << "R is the element of map";
    else cout << "R is not the element of map";

	cout << endl; 
    
    //the map clearing
    m.clear();
    
    
    //after clearing the map must be empty 
    if (m.empty()) 
		cout << "Map is empty" << endl;
	else cout << "Map is not empty" << endl;

 
	return 0;
}
