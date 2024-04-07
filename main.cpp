#include<bits/stdc++.h>
#include "Solution.h"
using namespace std;

struct Node {
	int val;
	Node* next;
};

void insertAtEnd(Node* &head, int val) {
	Node* newNode = new Node;
	newNode->val = val;
	newNode->next = nullptr;
	
	while(head == nullptr) {
		head = newNode;
		return;
	}
	
	Node* temp = head;
	while(temp->next != nullptr){
		temp = temp->next;
	}
	temp->next = newNode;
}

void insertAtStart(Node* &head, int val) {
	Node* newNode = new Node;
	newNode->val = val;
	newNode->next = head;
	head = newNode;
}

void printList(Node* head) {
	Node* temp = head;
	
	while(temp->next != nullptr) {
		cout << temp->val << " " << endl;
		temp = temp->next;
	}
	cout << endl;
}

int main() {
//	Node* head = nullptr;
//	
//	int arr[5] = {2,5,5,4,3};
//	
//	for(int i = 0; i < 5; i++) {
//		insertAtEnd(head, arr[i]);
//	}
//	
//	
//	
//	insertAtStart(head, 100);
//	
//	printList(head);


	Solution sol;

    // Test cases
    std::cout << sol.checkValidString("()") << std::endl; // Should output 1 (true)
    std::cout << sol.checkValidString("(*)") << std::endl; // Should output 1 (true)
    std::cout << sol.checkValidString("(*))") << std::endl; // Should output 1 (true)
    std::cout << sol.checkValidString("(((*)") << std::endl; // Should output 1 (true)
    std::cout << sol.checkValidString("(((******))") << std::endl; // Should output 1 (true)
    std::cout << sol.checkValidString(")(") << std::endl; // Should output 0 (false)
    std::cout << sol.checkValidString("(((****)") << std::endl; // Should output 0 (false)

    return 0;
	
}