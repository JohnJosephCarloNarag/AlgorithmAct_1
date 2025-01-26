//#include "PlayerSS_LL.cpp"
#include "PlayerSS_LL.h"
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