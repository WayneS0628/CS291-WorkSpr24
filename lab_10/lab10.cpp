#include "lab10.h"



Node::Node(string s): data(s), next(nullptr), previous(nullptr){}



string Iterator::get() const{
	assert(current != nullptr);
	return current->data;
}



void Iterator::next(){
	assert(current != nullptr);
	current = current->next;
}



void Iterator::previous(){
	assert(current != nullptr);
	current = current->previous;
}



bool Iterator::equal(const Iterator& b) const{
	return current == b.current;
}



List::List(): first(nullptr), last(nullptr){}



void List::push_back(string s){
	Node* newnode = new Node(s);
	if(last == nullptr){
		first = newnode;
		last = newnode;
	}else{
		newnode->previous = last;
		last->next = newnode;
		last = newnode;
	}
}



bool List::remove(string value){
	Node* current = first;
	while(current != nullptr){
		if(current->data == value){
			if(current->previous){
				current->previous->next = current->next;
			}else{
				first = current->next;
			}
			if(current->next){
				current->next->previous = current->previous;
			}else{
				last = current->previous;
			}
			delete current;
			return true;
		}
		current = current->next;
	}
	return false;
}



void List::display(){
	for(Node* current = first; !(current == nullptr); current = current->next){
		cout << current->data << " -> ";
	}
	cout << "null\n\n";
}



Iterator List::begin(){
	Iterator iter;
	iter.current = first;
	iter.last = last;
	return iter;
}



Iterator List::end(){
	Iterator iter;
	iter.current = nullptr;
	iter.last = last;
	return iter;
}