/*
Zach Boulom
10/28/17
Player and computer roll a dice of the user’s choice until either a 1 is rolled or a player decides to stop. 
If a 1 is rolled, the player gets 0 points, and if the player decides to stop, the player get points equal to the sum of the numbers rolled since the last 1.  
Play continues until one player has a score of 100 or more points.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Player{
    
    private:
    int total_score_;
    
    public:
    Player(); //constructor
    int RandomNumGen(); //generates random number from 1-6
    int GetScore(); 
    void AddPoints(int round_points); // adds points to score
};

Player::Player(){
    total_score_ = 0;
    return;
}

int Player::RandomNumGen(){
    int ran_num = 0;
    
    srand(time(0));
    ran_num = (rand() % 6) + 1;
    
    return ran_num;
}

int Player::GetScore(){
    return total_score_;
}

void Player::AddPoints(int round_points){
    total_score_ = total_score_ + round_points;
    return;
}

int main(){
    Player player_one;
    Player computer;
    
    while(player_one.GetScore() < 100 && computer.GetScore() < 100){
        char player_move;
        int round_points = 0;
        
        bool player_turn = true;
        bool computer_turn = false;
        
        int roll_dice = 0;
        
        cout << "Your total score is " << player_one.GetScore() << endl;
        
        //players turn
        while(roll_dice != 1 && player_turn == true){ //checks if player rolls 2-6
            cout << "Potential points at " << round_points << endl;
            cout << "Press 'r' to roll or 'h' to hold" << endl;
            
            cin >> player_move;
            
            if(player_move == 'r'){ //rolls dice for player
                roll_dice = player_one.RandomNumGen();
                round_points = round_points + roll_dice;
                
                if(roll_dice == 1){
                    cout << "You rolled a " << roll_dice << endl;
                    round_points = 0;
                    
                    //ends players turn and let's computer turn begin
                    player_turn = false;
                    computer_turn = true;
                } 
                else if(roll_dice != 1){
                    cout << "You rolled a " << roll_dice << endl;
                    round_points = round_points + roll_dice; //adds potential points
                }
            }
            
            else if(player_move == 'h'){ //player holds adding potential points to their score and ends turn
                player_one.AddPoints(round_points);
                
                player_turn = false;
                computer_turn = true;
            }
            
        }
        
        //computers turn
        cout << "Computer's turn" << endl;
        
        while(computer_turn == true){ //ai will only hold if round points less than 12
            int roll_dice_ai = 0;
            roll_dice_ai = computer.RandomNumGen();
            
            cout << "Computer rolled a " << roll_dice_ai << endl;
            round_points = round_points + roll_dice_ai;
            
            if(roll_dice_ai == 1){
                round_points = 0;
                computer_turn = false;
            }
            if(round_points >= 12){
                computer.AddPoints(round_points);
                computer_turn = false;
            }
            
        }
        cout << "Computer has " << computer.GetScore() << " points" << endl;
        player_turn = true;
        
    }
    
    //displays winner
    if(player_one.GetScore() > 99){
        cout << "congrats, you win!" << endl;
    }
    else if(computer.GetScore() > 99){
        cout << "you lose, AI wins" << endl;
    }
    
}

/*
Your total score is 0
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 8
Press 'r' to roll or 'h' to hold
r
You rolled a 1
Computer's turn
Computer rolled a 1
Computer has 0 points
Your total score is 0
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 6
Press 'r' to roll or 'h' to hold
r
You rolled a 1
Computer's turn
Computer rolled a 1
Computer has 0 points
Your total score is 0
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 8
Press 'r' to roll or 'h' to hold
r
You rolled a 5
Potential points at 18
Press 'r' to roll or 'h' to hold
r
You rolled a 6
Potential points at 30
Press 'r' to roll or 'h' to hold
r
You rolled a 1
Computer's turn
Computer rolled a 1
Computer has 0 points
Your total score is 0
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 6
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 14
Press 'r' to roll or 'h' to hold
r
You rolled a 1
Computer's turn
Computer rolled a 1
Computer has 0 points
Your total score is 0
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 8
Press 'r' to roll or 'h' to hold
r
You rolled a 1
Computer's turn
Computer rolled a 1
Computer has 0 points
Your total score is 0
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 5
Potential points at 10
Press 'r' to roll or 'h' to hold
r
You rolled a 5
Potential points at 20
Press 'r' to roll or 'h' to hold
h
Computer's turn
Computer rolled a 5
Computer has 25 points
Your total score is 20
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 8
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 14
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 20
Press 'r' to roll or 'h' to hold
h
Computer's turn
Computer rolled a 6
Computer has 51 points
Your total score is 40
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 8
Press 'r' to roll or 'h' to hold
r
You rolled a 4
Potential points at 16
Press 'r' to roll or 'h' to hold
r
You rolled a 5
Potential points at 26
Press 'r' to roll or 'h' to hold
r
You rolled a 6
Potential points at 38
Press 'r' to roll or 'h' to hold
Computer's turn
Computer rolled a 1
Computer has 51 points
Your total score is 78
Potential points at 0
Press 'r' to roll or 'h' to hold
r
You rolled a 2
Potential points at 4
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 10
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 16
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 22
Press 'r' to roll or 'h' to hold
r
You rolled a 3
Potential points at 28
Press 'r' to roll or 'h' to hold
h
Computer's turn
Computer rolled a 2
Computer has 81 points
congrats, you win!
*/