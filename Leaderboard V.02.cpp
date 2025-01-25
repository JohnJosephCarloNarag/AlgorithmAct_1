//#include "PlayerSS_LL.h"
//#include "Priority_Queue.h"
//#include "ArrayTop10s.h"
#include <iostream>
#include <string>
using namespace std;

/*class LeaderboardSS_LL{
    LL_Node *head;
    public:
        LeaderboardSS_LL(){
            head = NULL;
        };

        LeaderboardSS_LL() : head(NULL) {}
};*/



/*void Top10Array(int scoreboard_id[]){
	cout << "====Top 10 Scoreboard====";
	for(int i = 0; i <=10; i++){
		cout << scoreboard_id[i];
	}
	cout << ""
}*/
struct Node{
    string Pname;
    int Pscore;
    struct Node *next;
};

class PlayerSS_LL{ //Player Scoreboard System Linked List Header
		Node *head;
	public:
		PlayerSS_LL() : head(NULL) {}
		
		void Add(string name, int score); //append node
		void Display(/*void*/); //display node
		void Delete(string name); //delete node
		void Update(string name, int score); //Update node
};


void PlayerSS_LL::Add(string name, int score){ 
	Node *newNode, *nodePtr;
	newNode = new Node;
	newNode->Pname = name;
	newNode->Pscore = score;
	newNode->next = nullptr;
	nodePtr = head;

    //Dupe name checker
    while(nodePtr != nullptr){
        if(nodePtr->Pname == name){
            cout << "Duplicate!!!" << endl;
            cout << "Choose the update option." << endl;
            delete newNode;
            return;
        }
        nodePtr = nodePtr->next;
    }
    
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

void PlayerSS_LL::Display(void){
	Node *nodePtr;
    nodePtr = head;
	if(!head){
		cout << "List is empty!" << endl;
        return;
	}
	else{
		while(nodePtr){
			cout << "\nPlayer Name: " << nodePtr->Pname << endl;
			cout << "Score      : " << nodePtr->Pscore << endl << endl;
			nodePtr = nodePtr->next;
		}
	}
}

void PlayerSS_LL::Delete(string name){
    Node *nodePtr, *prevNode;
    int found = 0;
    if(!head){
		cout << "List is empty!" << endl;
        return;
	}
    if(head->Pname == name){
        nodePtr = head->next;
        delete head;
        head = nodePtr;
        found = 1;
    }
    else{
        nodePtr = head;
        prevNode= NULL;
        while(nodePtr != NULL && nodePtr->Pname != name){
            prevNode = nodePtr;
            nodePtr - nodePtr->next;
        }
        if (nodePtr != NULL){
            prevNode->next = nodePtr->next;
            delete nodePtr;
            found = 1;
        }
    }
    if (found == 0){
        cout << "Player can not be found in the database." << endl;
    }
}

void PlayerSS_LL::Update(string name, int score){
    Node *newNode, *nodePtr;
    newNode = new Node;
    nodePtr = head;

    while(nodePtr->next != NULL){
        if(nodePtr->Pname == name){
            	newNode->Pname = name;
	            newNode->Pscore = score;
            return;
        }
        nodePtr = nodePtr->next;
    }
}



int main(){
    PlayerSS_LL players;

    //examples
    players.Add("Rohan", 12);
    players.Add("Simon", 22);
    players.Display();
    players.Add("Simon", 22);
    players.Display();
    return 0;
}