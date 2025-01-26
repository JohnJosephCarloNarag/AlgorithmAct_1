#include "PlayerSS_LL.h"
//using namespace std;

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