using namespace std;

struct Node{
	int data;
	Node* next;

	//Constructor
	Node(int val){
		data = val;
		next = nullptr;
	}

};

Node* reverseLinkedList(Node* head){
	Node* current = head;
	Node* prev = nullptr ;
	Node* next = nullptr;

	while(current != nullptr){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;

	}
	return current;
}

void printList(Node* head){

}


int main(){

	return -1;
}
