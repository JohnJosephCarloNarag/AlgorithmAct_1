#include <iostream>
using namespace std;

int opt;

class parkDetails{
    private:
    struct Node{
        string vehicle;
        int plateNum;
        int row,col;
        Node* next;
    };
        int parkSpot[3][2];
        
        bool isAvail;
        Node* head;
    public:
    parkDetails() : head(NULL){};
    //LINKED LIST (List of parked vehicles)
    //	-Add, Delete, Traverse Functions
    
    void insertAtBeginning(string vVehicle, int vPlateNum, int vRow, int vCol){
        Node* newNode = new Node(); 
        newNode->vehicle = vVehicle;
        newNode->plateNum = vPlateNum;
        newNode->row = vRow;
        newNode->col = vCol;
        newNode->next = head;      
        head = newNode;  
    //Add File Management
    }

    void deleteFromBeginning() {
        if (!head) {
            cout << "========== NO CARS TO DELETE ==========" << endl;
            return;
        }
        Node* temp = head; 
        head = head->next; 
        delete temp;      
    //Update File
    }

    void deleteFrompos(int pos) {
        if (pos < 1) {
            cout << "========= ENTRY DOES NOT EXIST =========\n\n";
            return;
        }

        if (pos == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp; ++i) {
            temp = temp->next;
        }

        if (!temp || !temp->next) {
            cout << "========= ENTRY DOES NOT EXIST =========\n\n";
            return;
        }
        Node* nodeToDelete = temp->next; 
        temp->next = temp->next->next;   
        delete nodeToDelete;     
        //Update File       
    }

    void displayList(){
        Node* temp = head;
        while (temp != NULL){
            cout << "Vehicle: "<<temp->vehicle << endl
                 << "Plate#: "<<temp->plateNum << "\n\n";
            temp = temp->next;
        }
        cout << endl;
    }

    //ARRAY (Display Parking Lots)
    void availParkingLots(){
        for (int i = 0; i < 3;i++){
            for (int j = 0; j < 2; j++){
                int spotNo = parkSpot[i][j];
                string res = checkIfAvail(spotNo);// <-- bool test to check if spot is taken or not
                cout << "| "<< res << " |\t";
            }
            cout << endl;
        }
    }

    //Check if Parking spot is available
    string checkIfAvail(int spotNo){
        string res = (spotNo == 1) ? "X" : "O";
        return res;
    }

    void userInputs(int menuOpt){
        string vehicle;
        int plateNum;

        if(menuOpt == 1){
        //Implement method that checks if parking spots are full.
        //And add them to the Queue method
        cout << "========= PARK VEHICLE =========\n";
        cout << "Input vehicle name: ";
        cin >> vehicle;
        cout << "Input Plate No.: ";
        cin >> plateNum;
        for (int i = 0; i < 3;i++){
            for (int j = 0; i < 2; j++){
                if (parkSpot[i][j] == 0){
                    insertAtBeginning(vehicle, plateNum, i, j);
                    parkSpot[i][j] = 1;
                    cout << "========= Car has been Parked! =========\n\n";
                    return;
                }else{
                    continue;
                }
            }
        }
        //Input Queue method
        
        //Implement a way to check for available parking spots
        //and put the car there.
        }else if (menuOpt == 2){
            int searchNo;
            cout << "=============== SEARCH ===================\n\n";
            cout << "Input Vehicle Plate# : ";
            cin >> searchNo;
            searchVehicle(searchNo);
            //Method for finding plate no.
        }


    }

    void searchVehicle(int searchNo){
        Node* temp = head;
        int pos = 1;
        while (temp != NULL){
            temp->next;
            if (temp->plateNum == searchNo){
                parkSpot[temp->row][temp->col] = 0;
                deleteFrompos(pos);
                cout << "========== Vehicle has been Deleted ==========\n\n";
                return;
            }
            pos++;
        }
        cout << "========== Vehicle not Found ==========\n\n";
        return;
    }

    void menu(){
    do{          
        cout << "============= PARKING SYSTEM =============\n\n";
        cout << "[1] Park a Car\n";
        cout << "[2] Retrieve Car\n";
        cout << "[3] Display All Available Parking Spots\n";
        cout << "[4] Display All Vehicles\n";
        cout << "[5] Exit\n\n";
        cout << "==========================================\n";
        cout << "Enter: ";
        cin >> opt;
            switch (opt){
                case 1:
                userInputs(opt);
                break;
    
                case 2:
                userInputs(opt);
                break;
                
                case 3:
                // Array method availParkingLots
                break;
            
                case 4:
                displayList();
                break;

                case 5:
                system("cls");
                cout << "=======================================\n";
                cout << "Thank you for using the parking system!\n";
                cout << "=======================================\n";
                exit(0);
                default:
                cout << "\n====== Error: Invalid Input ======\n\n";
            }   
    }while (true);

}
};
    
    //QUEUE (Vehicles waiting for vacant spot)

    //STACK (List of vacant spots)

int main(){
    parkDetails p;
    p.menu();
	//p.availParkingLots(); <-- Test
}
