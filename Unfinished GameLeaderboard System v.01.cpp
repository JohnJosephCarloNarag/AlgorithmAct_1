#include <iostream>
using namespace std;

void Top10Array(int scoreboard_id[]){
	cout << "====Top 10 Scoreboard====";
	for(int i = 0; i <=10; i++){
		cout << scoreboard_id[i];
	}
	cout << ""
}


class PlayerSS_LL{
	private:
		struct Node{
			int name; //player name btw
			int score; //player score
			struct Node *next;
		};
		Node *head;
		
	public;
		PlayerSS_LL(){
			head = NULL;
		}
		~PlayerSS_LL();
		
		void appendNode(int name, int score);
		void displayNode(/*void*/);
		void deleteNode(int name);
		void insertNode(int name, int score);
};

void PlayerSS_LL::appendNode(int name, int score){
	Node *newNode, *nodePtr;
	newNode = new Node;
	newNode->Pname = name;
	newNode->Pscore = score;
	newNode->next = NULL;
	
	if(!head){
		head = newNode;
	}
	else{
		nodePtr = head;
		while(nodePtr->next){
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
	cout << "Score has been added!" << endl;
}

void PlayerSS_LL::displayNode(/*void*/){
	Node *nodePtr;
	if(!head){
		cout << "List is empty!" << endl;
	}
	else{
		while(nodePtr){
			cout << "Player Name: " << nodePtr->Pname << endl;
			cout << "Score		: " << nodePtr->Pscore << endl << endl;
			nodePtr = nodePtr->next;
		}
	}
}

void PlayerSS_LL


int main();

