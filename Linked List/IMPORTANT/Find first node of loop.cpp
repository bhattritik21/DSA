// C++ program to return first node of loop.
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int key;
	struct Node* next;
};

Node* newNode(int key)
{
	Node* temp = new Node;
	temp->key = key;
	temp->next = NULL;
	return temp;
}

// A utility function to print a linked list
void printList(Node* head)
{
	while (head != NULL) {
		cout << head->key << " ";
		head = head->next;
	}
	cout << endl;
}

// Function to detect and remove loop and find first element of loop
// in a linked list that may contain loop
Node* detectAndRemoveLoop(Node* head)
{
unordered_set<Node*> uset;
 
   Node *ptr = head;
 
    // Default consider that no cycle is present
    while (ptr != NULL) {
 
        // checking if address is already present in map
        if (uset.find(ptr) != uset.end())
          return ptr;
 
        // if address not present then insert into the set
        else
            uset.insert(ptr);
         
        ptr = ptr->next;
    }
    return NULL;
}

/* Driver program to test above function*/
int main()
{
	Node* head = newNode(50);
	head->next = newNode(20);
	head->next->next = newNode(15);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(10);

	/* Create a loop for testing */
	head->next->next->next->next->next = head->next->next;

	Node* res = detectAndRemoveLoop(head);
	if (res == NULL)
		cout << "Loop does not exist";
	else
		cout << "Loop starting node is " << res->key;

	return 0;
}
