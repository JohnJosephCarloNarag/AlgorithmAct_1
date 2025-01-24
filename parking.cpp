#include <iostream>
using namespace std;

struct Node{
        int data;
        Node* next;
    };

class parkDetails{
    private:
        int plateNum;
        string vehicle;
        bool isAvail;
        Node* head;
    public:
    parkDetails() : head(NULL){};
    //LINKED LIST (List of parked vehicles)
    //	-Add, Delete, Traverse Functions
    
    void insertAtBeginning(int value){
        Node* newNode = new Node(); 
        newNode->data = value;      
        newNode->next = head;      
        head = newNode;  
    //Add File Management
    }

    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head; 
        head = head->next; 
        delete temp;      
    //Update File
    }

    void deleteFromPosition(int position) {
        if (position < 1) {
            cout << "Position should be >= 1." << endl;
            return;
        }

        if (position == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp; ++i) {
            temp = temp->next;
        }

        if (!temp || !temp->next) {
            cout << "Position out of range." << endl;
            return;
        }
        Node* nodeToDelete = temp->next; 
        temp->next = temp->next->next;   
        delete nodeToDelete;            
    }

    //Display all parked cars
    void display() {
        if (!head) {
            cout << "No cars are parked." << endl;
            return;
        }

        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> "; 
            temp = temp->next;
        }
        cout << "NULL" << endl; 
    }

    //ARRAY (Display Parking Lots)
    void availParkingLots(){
        int parkSlots[3][2] = {{1, 0}, {0, 0}, {0, 1}};
        for (int i = 0; i < 3;i++){
            for (int j = 0; j < 2; j++){
                //checkIfAvail(); <-- bool test to check if spot is taken or not
                cout << "| "<< parkSlots[i][j] << " |\t";
            }
            cout << endl;
        }
    }

    //Check is Parking spot is available
    void checkIfAvail(bool isAvail){
    isAvail = 1? true : false;
    }

};
    
    //QUEUE (Vehicles waiting for vacant spot)

    //STACK (List of vacant spots)

int main(){
    parkDetails p;
	//p.availParkingLots(); <-- Test
	
	
}








