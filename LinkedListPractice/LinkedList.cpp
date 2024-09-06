#include "LinkedList.h"

void LinkedList::append(int num)
{
	//if (!nodeCnt)
	//{
	//	
	//}

	Node* temp = new Node { num, nullptr};
	temp->link = nullptr;
	tail->link = temp;
	tail = temp;
	nodeCnt += 1;
}

void LinkedList::printList()
{
	Node* curNodeLink = head->link;

	while (curNodeLink != nullptr)
	{
		cout << curNodeLink->data << endl;
		curNodeLink = curNodeLink->link;
	}

	cout << endl << "총 요소 개수는 " << nodeCnt << " 개 입니다." << endl;
}

LinkedList::LinkedList()
{
	head = new Node;
	tail = new Node;
	head->data = 0;
	//tail->data = 0;
	//tail->link = nullptr;
	head->link = nullptr;
	tail = head;
	curNode = head;
	nodeCnt = 0;
}

LinkedList::~LinkedList()
{
}
