#include <iostream>
#include "LinkedList.h"
#define NEXT_LINE() cout << endl

using namespace std;

void main()
{
	LinkedList* linkedList = new LinkedList;

	cout << "1번 추가 전" << endl;
	NEXT_LINE();
	linkedList->printList();
	NEXT_LINE();	

	cout << "1번 추가 후" << endl;
	NEXT_LINE();
	linkedList->append(1);
	linkedList->printList();
	NEXT_LINE();

	cout << "2번 추가 전" << endl;
	NEXT_LINE();
	linkedList->printList();
	NEXT_LINE();

	cout << "2번 추가 후" << endl;
	NEXT_LINE();
	linkedList->append(2);
	linkedList->printList();
	NEXT_LINE();

	cout << "3 ~ 5번 추가 전" << endl;
	NEXT_LINE();
	linkedList->printList();
	NEXT_LINE();

	cout << "3 ~ 5번 추가 전" << endl;
	NEXT_LINE();
	linkedList->append(3);
	linkedList->append(4);
	linkedList->append(5);
	linkedList->printList();
	NEXT_LINE();

}