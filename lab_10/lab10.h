#ifndef LAB10_H
#define LAB10_H
#include <iostream>
#include <string>
#include <cassert>
using namespace std;



class Node{
private:
	string data;
	Node* next;
	Node* previous;
	friend class List;
	friend class Iterator;
public:

	Node(string s);
};



class Iterator{
private:
	Node* current;
	Node* last;
	friend class List;
public:

	string get() const;


	void next();


	void previous();


	bool equal(const Iterator& b) const;
};



class List{
private:
	Node* first;
	Node* last;
public:

	List();


	void push_back(string s);


	bool remove(string value);


	void display();


	Iterator begin();


	Iterator end();
};



#endif