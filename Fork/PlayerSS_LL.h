//Player Scoreboard System Linked List Header
/*#ifndef PlayerSS_LL_H
#define PlayerSS_LL_H*/
//#pragma once
//#include "Includes.h"
#include <iostream>
#include <string>

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










/*struct Node{
    string Pname;
    int Pscore;
    struct Node *next;
};

class PlayerSS_LL{
		Node *head;
	public:
		PlayerSS_LL() : head(NULL) {}
		
		void Add(string name, int score); //append node
		void Display(/void/); //display node
		void Delete(string name); //delete node
		//void insertNode(string name, int score); //insert node // I don't think we need this LMAO
};


void PlayerSS_LL::Add(string name, int score){
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

void PlayerSS_LL::Display(void){
	Node *nodePtr;
	if(!head){
		cout << "List is empty!" << endl;
        return;
	}
	else{
		while(nodePtr){
			cout << "Player Name: " << nodePtr->Pname << endl;
			cout << "Score		: " << nodePtr->Pscore << endl << endl;
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
}*/



//#endif
