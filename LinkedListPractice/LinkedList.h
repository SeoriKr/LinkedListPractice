#pragma once

#include <iostream>
#include <string>

/*
template <typename T>
struct Node
{
	T data;
	Node* link;
};
*/

using namespace std;

struct Node
{
	int data;
	Node* link;
};

class LinkedList
{
private:
	 struct Node* head;
	 struct Node* curNode;
	 struct Node* tail;
	 int nodeCnt;

public:
	void append(int num);
	void index
	void printList();

public:
	LinkedList();
	~LinkedList();
};

