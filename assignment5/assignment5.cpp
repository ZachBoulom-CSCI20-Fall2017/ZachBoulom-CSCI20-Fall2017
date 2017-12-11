#include <iostream>
#include <fstream>
using namespace std;

class Pokemon {
    private:
    int player_hp_;
    int cpu_hp_;
    int april_hp_;
    
    public:
    void SetPlayerHP(int hp_to_set_)
    {
        player_hp_ = hp_to_set_;
        return;
    }
    void SetCpuHP(int cpu_hp_to_set_)
    {
        cpu_hp_ = cpu_hp_to_set_;
        return;
    }
    void SetAprilHP(int april_hp_to_set_)
    {
        april_hp_ = april_hp_to_set_;
        return;
    }
    
    int GetPlayerHp()
    {
        return player_hp_;
    }
    int GetCputHP()
    {
        return cpu_hp_;
    }
    int GetAprilHP()
    {
        return april_hp_;
    }
    
    //Magikarp Moves
    int FlameThrower()
    {
        player_hp_ = player_hp_ - 100;
        cpu_hp_ = cpu_hp_ + 100;
    }
    int Splash()
    {
        cpu_hp_ = cpu_hp_ - 10;
    }
    int Tackle()
    {
        cpu_hp_ = cpu_hp_ - 1;
    }
    
    //Metapod Moves
    int Harden()
    {
        player_hp_ = player_hp_ + 1;
    }
    
    //Pikachu Moves
    int Thunderbolt()
    {
        player_hp_ = player_hp_ - 25;
    }
    
    //April Moves
    int TeachCode()
    {
        cpu_hp_ = cpu_hp_ - 100;
    }
    int SickDay()
    {
        april_hp_ = april_hp_ - 100;
    }
    int AssignHomework()
    {
        cpu_hp_ = cpu_hp_ - 100;
    }
    int FailingGrade()
    {
        cpu_hp_ = cpu_hp_ - 100;
    }
};

int main(){
    Pokemon gameone;
    
    ofstream outFS;
    outFS.open("Battlelog");
    if (!outFS.is_open())
    {
        cout << "Battlelog Missing" << endl;
        return 1;
    }
    
    
    char userchoice;
    int magikarp_hp = 0;
    int metapod_hp = 0;
    int pikachu_hp = 0;
    int april_hp = 0;
    
    //user picks pokemon
    cout << "Pick a Pokemon" << endl;
    cout << "a) magikarp" << endl;
    cout << "b) metapod" << endl;
    cin >> userchoice;
    
    if (userchoice == 'a'){
        cout << "                                 __.--.._,-'\"\"-." << endl;
        cout << "                              ,-' .' ,'  .-\"''-.`.       .--." << endl;
        cout << "                            ,'    |  |  '`-.    \\ \\       `-.|" << endl;
        cout << "                           /       .   /    `.   \\ \\        ||" << endl;
        cout << "                          /         `..`.    `.   \\ .       ||" << endl;
        cout << "                         /        . .    `.    \\   . .      '." << endl;
        cout << "                .\"-.    .  ,\"\"'-. | |      \\    \\   `.`.__,'.'" << endl;
        cout << "                 `. `. .   |     `. |       \\    .    `-..-'" << endl;
        cout << "       _______     .  `|   |   '   .'        .   |...--._" << endl;
        cout << "       `.     `\"--.'   '    .      | .        .  |\"\"''\"-._\"-._" << endl;
        cout << "         `.             \\    `-._..'. .       |  |---.._  `-.__\"-.." << endl;
        cout << "    -.     `.           |\\           `.`      |  |'`-.  `-._   +\"-'" << endl;
        cout << "    `.`.     `-.        | `            .`.       | `. `.    `,\"" << endl;
        cout << "      `.`.      `.      |  '.           ` `      `.  \\  `   /" << endl;
        cout << "      | `.`.    __`.    |`/  `.     ...  `.`.     |   `.   ." << endl;
        cout << "      |   \\ .  `._      | `. / `. .'.' |   \\ \\    |     \\  |" << endl;
        cout << "      |.   ` \\    `-.   |   \\   .'.'/' |    \\ \\   |      ._'" << endl;
        cout << "      | `.  `.\\      `. |    \\ / , '.  |_    . \\  '-." << endl;
        cout << "     ,     .  .\\       `|     . ' / |  | `-...\\ \\'   `._" << endl;
        cout << "     `.     `.  \\       |.    '/ .  |  |       ' .      `-." << endl;
        cout << "      .`._    \\` \\      | `. /'  '  |  |       | |       ,.'" << endl;
        cout << "       .  `-.  \\`.\\    ,|   //  '   |  |__  .' | |      |" << endl;
        cout << "       |     `._`| `--' `  //  .    |  '  `\"  /| |   . -'" << endl;
        cout << "       '        `|       `//   '    |   .    / | |   |" << endl;
        cout << "      /....._____|       //   .  ___|   |   /  | |  ,|" << endl;
        cout << "     .         _.'      /, _.--\"'-._ `\".| ,'   | |.'" << endl;
        cout << "     |      _,' / ___   `-'.        `. _|'     |," << endl;
        cout << "     |  _,-\"  ,'.'   `-.._  `.      _,'         `" << endl;
        cout << "     '-\"   _,','          \"- ....--'" << endl;
        cout << "    /  _.-\"_.'" << endl;
        cout << "   /_,'_,-'" << endl;
        cout << " .'_.-'" << endl;
        cout << " '\"" << endl;
        cout << "Magikarp HP = 100" << endl;
        
        outFS << "                                 __.--.._,-'\"\"-." << endl;
        outFS << "                              ,-' .' ,'  .-\"''-.`.       .--." << endl;
        outFS << "                            ,'    |  |  '`-.    \\ \\       `-.|" << endl;
        outFS << "                           /       .   /    `.   \\ \\        ||" << endl;
        outFS << "                          /         `..`.    `.   \\ .       ||" << endl;
        outFS << "                         /        . .    `.    \\   . .      '." << endl;
        outFS << "                .\"-.    .  ,\"\"'-. | |      \\    \\   `.`.__,'.'" << endl;
        outFS << "                 `. `. .   |     `. |       \\    .    `-..-'" << endl;
        outFS << "       _______     .  `|   |   '   .'        .   |...--._" << endl;
        outFS << "       `.     `\"--.'   '    .      | .        .  |\"\"''\"-._\"-._" << endl;
        outFS << "         `.             \\    `-._..'. .       |  |---.._  `-.__\"-.." << endl;
        outFS << "    -.     `.           |\\           `.`      |  |'`-.  `-._   +\"-'" << endl;
        outFS << "    `.`.     `-.        | `            .`.       | `. `.    `,\"" << endl;
        outFS << "      `.`.      `.      |  '.           ` `      `.  \\  `   /" << endl;
        outFS << "      | `.`.    __`.    |`/  `.     ...  `.`.     |   `.   ." << endl;
        outFS << "      |   \\ .  `._      | `. / `. .'.' |   \\ \\    |     \\  |" << endl;
        outFS << "      |.   ` \\    `-.   |   \\   .'.'/' |    \\ \\   |      ._'" << endl;
        outFS << "      | `.  `.\\      `. |    \\ / , '.  |_    . \\  '-." << endl;
        outFS << "     ,     .  .\\       `|     . ' / |  | `-...\\ \\'   `._" << endl;
        outFS << "     `.     `.  \\       |.    '/ .  |  |       ' .      `-." << endl;
        outFS << "      .`._    \\` \\      | `. /'  '  |  |       | |       ,.'" << endl;
        outFS << "       .  `-.  \\`.\\    ,|   //  '   |  |__  .' | |      |" << endl;
        outFS << "       |     `._`| `--' `  //  .    |  '  `\"  /| |   . -'" << endl;
        outFS << "       '        `|       `//   '    |   .    / | |   |" << endl;
        outFS << "      /....._____|       //   .  ___|   |   /  | |  ,|" << endl;
        outFS << "     .         _.'      /, _.--\"'-._ `\".| ,'   | |.'" << endl;
        outFS << "     |      _,' / ___   `-'.        `. _|'     |," << endl;
        outFS << "     |  _,-\"  ,'.'   `-.._  `.      _,'         `" << endl;
        outFS << "     '-\"   _,','          \"- ....--'" << endl;
        outFS << "    /  _.-\"_.'" << endl;
        outFS << "   /_,'_,-'" << endl;
        outFS << " .'_.-'" << endl;
        outFS << " '\"" << endl;
        outFS << "Magikarp HP = 100" << endl;
        
        gameone.SetPlayerHP(100);
    }
    
    else if (userchoice == 'b'){
        cout << "                                   ,--.." << endl;
        cout << "                                  /     `." << endl;
        cout << "                                 /|       `." << endl;
        cout << "                                / |        |" << endl;
        cout << "                               /  j        |" << endl;
        cout << "                              /  |         `" << endl;
        cout << "                             '  ,'          \\" << endl;
        cout << "                           ,'                L" << endl;
        cout << "                          /                  +" << endl;
        cout << "                        .:.                   .`" << endl;
        cout << "                     ,\"`.  `.       ,..-._    +" << endl;
        cout << "                     |  |`.  L     '   _.'`.   ." << endl;
        cout << "                     j  `.,\\ '    | ,.' |  +.  +" << endl;
        cout << "                    '`.    |,'    |\" `\"\"   / `, ." << endl;
        cout << "                   |   `\"\"'/      `-.____.'    \\|" << endl;
        cout << "                 ,'|     ,'                     Y" << endl;
        cout << "                /  |    /                      '|" << endl;
        cout << "               /   |  ,'                     ,' +" << endl;
        cout << "              /    \\-'                      /    `" << endl;
        cout << "             /    /                       ,'      `" << endl;
        cout << "            .     ,`'-.                 ,'         L" << endl;
        cout << "             \\   /     \\               /            ." << endl;
        cout << "                /      `               \\            |" << endl;
        cout << "              `/          _,            `          ,'" << endl;
        cout << "               |                         `       ,'" << endl;
        cout << "               |           \"'             `.   ,'" << endl;
        cout << "               j         -\"'               |`-'" << endl;
        cout << "              /                           /'/" << endl;
        cout << "             /           ,               / /" << endl;
        cout << "            /            '              j /" << endl;
        cout << "          .' ___                        '/" << endl;
        cout << "          |-'   `\"`-.                  '/" << endl;
        cout << "          '          \\                .'" << endl;
        cout << "        ,\"            l          _,.-'" << endl;
        cout << "       ,---..         |L     _.-'" << endl;
        cout << "     ,'      `.      / |  ,-'" << endl;
        cout << "    /          `  _,'  ;-'" << endl;
        cout << "  ,'--.       ,-`|  ,-'" << endl;
        cout << " /     L   _,'  _|-'" << endl;
        cout << "(       \\-' _,-'" << endl;
        cout << " `......^.-'   " << endl;
        cout << "Metapod HP = 100" << endl;
        
        outFS << "                                   ,--.." << endl;
        outFS << "                                  /     `." << endl;
        outFS << "                                 /|       `." << endl;
        outFS << "                                / |        |" << endl;
        outFS << "                               /  j        |" << endl;
        outFS << "                              /  |         `" << endl;
        outFS << "                             '  ,'          \\" << endl;
        outFS << "                           ,'                L" << endl;
        outFS << "                          /                  +" << endl;
        outFS << "                        .:.                   .`" << endl;
        outFS << "                     ,\"`.  `.       ,..-._    +" << endl;
        outFS << "                     |  |`.  L     '   _.'`.   ." << endl;
        outFS << "                     j  `.,\\ '    | ,.' |  +.  +" << endl;
        outFS << "                    '`.    |,'    |\" `\"\"   / `, ." << endl;
        outFS << "                   |   `\"\"'/      `-.____.'    \\|" << endl;
        outFS << "                 ,'|     ,'                     Y" << endl;
        outFS << "                /  |    /                      '|" << endl;
        outFS << "               /   |  ,'                     ,' +" << endl;
        outFS << "              /    \\-'                      /    `" << endl;
        outFS << "             /    /                       ,'      `" << endl;
        outFS << "            .     ,`'-.                 ,'         L" << endl;
        outFS << "             \\   /     \\               /            ." << endl;
        outFS << "                /      `               \\            |" << endl;
        outFS << "              `/          _,            `          ,'" << endl;
        outFS << "               |                         `       ,'" << endl;
        outFS << "               |           \"'             `.   ,'" << endl;
        outFS << "               j         -\"'               |`-'" << endl;
        outFS << "              /                           /'/" << endl;
        outFS << "             /           ,               / /" << endl;
        outFS << "            /            '              j /" << endl;
        outFS << "          .' ___                        '/" << endl;
        outFS << "          |-'   `\"`-.                  '/" << endl;
        outFS << "          '          \\                .'" << endl;
        outFS << "        ,\"            l          _,.-'" << endl;
        outFS << "       ,---..         |L     _.-'" << endl;
        outFS << "     ,'      `.      / |  ,-'" << endl;
        outFS << "    /          `  _,'  ;-'" << endl;
        outFS << "  ,'--.       ,-`|  ,-'" << endl;
        outFS << " /     L   _,'  _|-'" << endl;
        outFS << "(       \\-' _,-'" << endl;
        outFS << " `......^.-'   " << endl;
        outFS << "Metapod HP = 100" << endl;
        
        gameone.SetPlayerHP(100);
    }
    
    cout << endl;
    cout << "-------------------------" << endl;
    cout << "         VERSUS" << endl;
    cout << "-------------------------" << endl;
    cout << endl;
    cout << "                                             ,-." << endl;
    cout << "                                          _.|  '" << endl;
    cout << "                                        .'  | /" << endl;
    cout << "                                      ,'    |'" << endl;
    cout << "                                     /      /" << endl;
    cout << "                       _..----\"\"---.'      /" << endl;
    cout << " _.....---------...,-\"\"                  ,'" << endl;
    cout << " `-._  \\                                /" << endl;
    cout << "     `-.+_            __           ,--. ." << endl;
    cout << "          `-.._     .:  ).        (`--\"| \\" << endl;
    cout << "               7    | `\" |         `...'  \\" << endl;
    cout << "               |     `--'     '+\"        ,\". ,\"\"-" << endl;
    cout << "               |   _...        .____     | |/    '" << endl;
    cout << "          _.   |  .    `.  '--\"   /      `./     j" << endl;
    cout << "         \\' `-.|  '     |   `.   /        /     /" << endl;
    cout << "         '     `-. `---\"      `-\"        /     /" << endl;
    cout << "          \\       `.                  _,'     /" << endl;
    cout << "           \\        `                        ." << endl;
    cout << "            \\                                j" << endl;
    cout << "             \\                              /" << endl;
    cout << "              `.                           ." << endl;
    cout << "                +                          \\" << endl;
    cout << "                |                           L" << endl;
    cout << "                |                           |" << endl;
    cout << "                |  _ /,                     |" << endl;
    cout << "                | | L)'..                   |" << endl;
    cout << "                | .    | `                  |" << endl;
    cout << "                '  \\'   L                   '" << endl;
    cout << "                 \\  \\   |                  j" << endl;
    cout << "                  `. `__'                 /" << endl;
    cout << "                _,.--.---........__      /" << endl;
    cout << "               ---.,'---`         |   -j\"" << endl;
    cout << "                .-'  '....__      L    |" << endl;
    cout << "              \"\"--..    _,-'       \\ l||" << endl;
    cout << "                  ,-'  .....------. `||'" << endl;
    cout << "               _,'                /" << endl;
    cout << "             ,'                  /" << endl;
    cout << "            '---------+-        /" << endl;
    cout << "                     /         /" << endl;
    cout << "                   .'         /" << endl;
    cout << "                 .'          /" << endl;
    cout << "               ,'           /" << endl;
    cout << "             _'....----\"\"\"\"\" " << endl;
    cout << "Pikachu HP = 100" << endl;
    
    outFS << endl;
    outFS << "-------------------------" << endl;
    outFS << "         VERSUS" << endl;
    outFS << "-------------------------" << endl;
    outFS << endl;
    outFS << "                                             ,-." << endl;
    outFS << "                                          _.|  '" << endl;
    outFS << "                                        .'  | /" << endl;
    outFS << "                                      ,'    |'" << endl;
    outFS << "                                     /      /" << endl;
    outFS << "                       _..----\"\"---.'      /" << endl;
    outFS << " _.....---------...,-\"\"                  ,'" << endl;
    outFS << " `-._  \\                                /" << endl;
    outFS << "     `-.+_            __           ,--. ." << endl;
    outFS << "          `-.._     .:  ).        (`--\"| \\" << endl;
    outFS << "               7    | `\" |         `...'  \\" << endl;
    outFS << "               |     `--'     '+\"        ,\". ,\"\"-" << endl;
    outFS << "               |   _...        .____     | |/    '" << endl;
    outFS << "          _.   |  .    `.  '--\"   /      `./     j" << endl;
    outFS << "         \\' `-.|  '     |   `.   /        /     /" << endl;
    outFS << "         '     `-. `---\"      `-\"        /     /" << endl;
    outFS << "          \\       `.                  _,'     /" << endl;
    outFS << "           \\        `                        ." << endl;
    outFS << "            \\                                j" << endl;
    outFS << "             \\                              /" << endl;
    outFS << "              `.                           ." << endl;
    outFS << "                +                          \\" << endl;
    outFS << "                |                           L" << endl;
    outFS << "                |                           |" << endl;
    outFS << "                |  _ /,                     |" << endl;
    outFS << "                | | L)'..                   |" << endl;
    outFS << "                | .    | `                  |" << endl;
    outFS << "                '  \\'   L                   '" << endl;
    outFS << "                 \\  \\   |                  j" << endl;
    outFS << "                  `. `__'                 /" << endl;
    outFS << "                _,.--.---........__      /" << endl;
    outFS << "               ---.,'---`         |   -j\"" << endl;
    outFS << "                .-'  '....__      L    |" << endl;
    outFS << "              \"\"--..    _,-'       \\ l||" << endl;
    outFS << "                  ,-'  .....------. `||'" << endl;
    outFS << "               _,'                /" << endl;
    outFS << "             ,'                  /" << endl;
    outFS << "            '---------+-        /" << endl;
    outFS << "                     /         /" << endl;
    outFS << "                   .'         /" << endl;
    outFS << "                 .'          /" << endl;
    outFS << "               ,'           /" << endl;
    outFS << "             _'....----\"\"\"\"\" " << endl;
    outFS << "Pikachu HP = 100" << endl;
    
    gameone.SetCpuHP(100);
    cout << endl;
    
    cout << "-----------------------------------------" << endl;
    cout << "              Battle Start" << endl;
    cout << "-----------------------------------------" << endl;
    
    outFS << endl;
    
    outFS << "-----------------------------------------" << endl;
    outFS << "              Battle Start" << endl;
    outFS << "-----------------------------------------" << endl;
    
    bool player_turn = true;
    bool pikachu_turn = false;
    
    //Magikarp vs Pikachu
    while (gameone.GetPlayerHp() > 0 && gameone.GetCputHP() > 0 && userchoice == 'a')
    {
        int user_move = 0;
        
        while (player_turn == true)
        {
            cout << "Select a move" << endl;
            cout << "Magikarp" << endl;
            cout << "1) flamethrower" << endl;
            cout << "2) splash" << endl;
            cout << "3) tackle" << endl;
            cin >> user_move;
            
            if (user_move == 1) //if user selects flamethrower
            {
                cout << "You burned Magikarp, take 100 damage and heal pikachu for 100 hp" << endl;
                gameone.FlameThrower();
                cout << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "You burned Magikarp, take 100 damage and heal pikachu for 100 hp" << endl;
                outFS << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
            }
            else if (user_move == 2) //if user selects splash
            {
                cout << "It's super effective, deal 10 damage to pikachu" << endl;
                gameone.Splash();
                cout << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "It's super effective, deal 10 damage to pikachu" << endl;
                outFS << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            else if (user_move == 3) //if user selects tackle
            {
                cout << "Not very effective, deal 1 damage to pikachu" << endl;
                gameone.Tackle();
                cout << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "Not very effective, deal 1 damage to pikachu" << endl;
                outFS << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            player_turn = false;
            pikachu_turn = true;
        }
        
        while (pikachu_turn == true && gameone.GetPlayerHp() > 0)
        {
            cout << "Pikachu's Turn" << endl;
            cout << "Pikachu used thunderbolt, dealing 25 damage" << endl;
            gameone.Thunderbolt();
            cout << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
            cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            
            outFS << "Pikachu's Turn" << endl;
            outFS << "Pikachu used thunderbolt, dealing 25 damage" << endl;
            outFS << "Magikarp HP = " << gameone.GetPlayerHp() << endl;
            outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            
            pikachu_turn = false;
            player_turn = true;
        }
    }

    //Metapod vs Pikachu    
    while (gameone.GetPlayerHp() > 0 && gameone.GetCputHP() > 0 && userchoice == 'b')
    {
        int user_move = 0;
        
        while (player_turn == true)
        {
            cout << "Select a move" << endl;
            cout << "Metapod" << endl;
            cout << "1) harden" << endl;
            cout << "2) cry" << endl;
            cout << "3) leer" << endl;
            cout << "4) tackle" << endl;
            cin >> user_move;
            
            if (user_move == 1) //if user selects harden
            {
                cout << "You healed for 1 hp, good job!" << endl;
                gameone.Harden();
                cout << "Metapod HP = " << gameone.GetPlayerHp() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "You healed for 1 hp, good job!" << endl;
                outFS << "Metapod HP = " << gameone.GetPlayerHp() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            else if (user_move == 2) //if user selects cry
            {
                cout << "You cried, doing nothing good job" << endl;
                
                outFS << "You cried, doing nothing good job" << endl;
            }
            else if (user_move == 3) //if user selects leer
            {
                cout << "You stare at Pikachu, nothing else happens" << endl;
                
                outFS << "You stare at Pikachu, nothing else happens" << endl;
            }
            else if (user_move == 4) //if user selects tackle
            {
                cout << " Metapod is too lazy to move and decides to afk for a little bit" << endl;
                
                outFS << " Metapod is too lazy to move and decides to afk for a little bit" << endl;
            }

            player_turn = false;
            pikachu_turn = true;
        }
        
        while (pikachu_turn == true)
        {
            cout << "Pikachu's Turn" << endl;
            cout << "Pikachu used thunderbolt, dealing 25 damage" << endl;
            gameone.Thunderbolt();
            cout << "Metapod HP = " << gameone.GetPlayerHp() << endl;
            cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            
            outFS << "Pikachu's Turn" << endl;
            outFS << "Pikachu used thunderbolt, dealing 25 damage" << endl;
            outFS << "Metapod HP = " << gameone.GetPlayerHp() << endl;
            outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            
            pikachu_turn = false;
            player_turn = true;
        }
    }
    
    cout << "============================================================" << endl;
    cout << "Sending out my last resort" << endl;
    
    cout << "             SSSSs " << endl;
    cout << "              SSSSs " << endl;
    cout << "           S a a SS " << endl;
    cout << "           '  -  DS " << endl;
    cout << "            \\_= (S " << endl;
    cout << "              _\\SS. " << endl;
    cout << "             (  \\ \\ " << endl;
    cout << "            / \\  \\| " << endl;
    cout << "           |   >  )\\ " << endl;
    cout << "           |_ /  /|/ " << endl;
    cout << "            |/O_/] " << endl;
    cout << "          __|/)___\\_ " << endl;
    cout << "         /__/|\\____/| " << endl;
    cout << "         \\         || " << endl;
    cout << "          \\________|/ " << endl;
    cout << "            |____,_| " << endl;
    cout << "             %%%%% " << endl;
    cout << "              %%%% " << endl;
    cout << "               %%%% " << endl;
    cout << "                %%% " << endl;
    cout << "                %%% " << endl;
    cout << "                %%' " << endl;
    cout << "                %% " << endl;
    cout << "               / O) " << endl;
    cout << "            ,___/\\(    " << endl;
    
    cout << "April HP = 10,000" << endl;
    
    cout << "============================================================" << endl;
    cout << "Sending out my last resort" << endl;
    
    outFS << "             SSSSs " << endl;
    outFS << "              SSSSs " << endl;
    outFS << "           S a a SS " << endl;
    outFS << "           '  -  DS " << endl;
    outFS << "            \\_= (S " << endl;
    outFS << "              _\\SS. " << endl;
    outFS << "             (  \\ \\ " << endl;
    outFS << "            / \\  \\| " << endl;
    outFS << "           |   >  )\\ " << endl;
    outFS << "           |_ /  /|/ " << endl;
    outFS << "            |/O_/] " << endl;
    outFS << "          __|/)___\\_ " << endl;
    outFS << "         /__/|\\____/| " << endl;
    outFS << "         \\         || " << endl;
    outFS << "          \\________|/ " << endl;
    outFS << "            |____,_| " << endl;
    outFS << "             %%%%% " << endl;
    outFS << "              %%%% " << endl;
    outFS << "               %%%% " << endl;
    outFS << "                %%% " << endl;
    outFS << "                %%% " << endl;
    outFS << "                %%' " << endl;
    outFS << "                %% " << endl;
    outFS << "               / O) " << endl;
    outFS << "            ,___/\\(    " << endl;
    
    outFS << "April HP = 10,000" << endl;
    
    gameone.SetAprilHP(10000);
    
    //April vs Pikachu
    while (gameone.GetAprilHP() > 0 && gameone.GetCputHP() > 0)
    {
        int user_move = 0;
        
        while (player_turn == true)
        {
            cout << "Select a move" << endl;
            cout << "April" << endl;
            cout << "1) teach code" << endl;
            cout << "2) sick day" << endl;
            cout << "3) assign homework" << endl;
            cout << "4) failing grade" << endl;
            cout << "5) classcraft" << endl;
            cin >> user_move;
            
            if (user_move == 1) //if user selects teach code
            {
                cout << "April taught pikachu C++, dealing 100 damage" << endl;
                gameone.TeachCode();
                cout << "April HP = " << gameone.GetAprilHP() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "April taught pikachu C++, dealing 100 damage" << endl;
                outFS << "April HP = " << gameone.GetAprilHP() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            else if (user_move == 2) //if user selects sick day
            {
                cout << "April isn't feeling too well, take 100 damage" << endl;
                gameone.SickDay();
                cout << "April HP = " << gameone.GetAprilHP() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "April isn't feeling too well, take 100 damage" << endl;
                outFS << "April HP = " << gameone.GetAprilHP() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            else if (user_move == 3) //if user selects assign homework
            {
                cout << "April assigned pikachu homework, dealing 100 damage" << endl;
                gameone.AssignHomework();
                cout << "April HP = " << gameone.GetAprilHP() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "April assigned pikachu homework, dealing 100 damage" << endl;
                outFS << "April HP = " << gameone.GetAprilHP() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            else if (user_move == 4) //if user selects failing grade
            {
                cout << "April gave Pikachu a failing grade, IT'S SUPER EFFECT, deal 100 damage" << endl;
                gameone.FailingGrade();
                cout << "April HP = " << gameone.GetAprilHP() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "April gave Pikachu a failing grade, IT'S SUPER EFFECT, deal 100 damage" << endl;
                outFS << "April HP = " << gameone.GetAprilHP() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }
            else if (user_move == 5) //if user selects classcraft
            {
                cout << "Please pay $59.99 to unlock classcraft premium, or $99.99 for the season pass and exclusive pets" << endl;
                cout << "April HP = " << gameone.GetAprilHP() << endl;
                cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
                
                outFS << "Please pay $59.99 to unlock classcraft premium, or $99.99 for the season pass and exclusive pets" << endl;
                outFS << "April HP = " << gameone.GetAprilHP() << endl;
                outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            }

            player_turn = false;
            pikachu_turn = true;
        }
        
        while (pikachu_turn == true && gameone.GetCputHP() > 0)
        {
            cout << "Pikachu's Turn" << endl;
            cout << "Pikachu used thunderbolt, dealing 0 damage, April too OP" << endl << endl;
            cout << "April HP = " << gameone.GetAprilHP() << endl;
            cout << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            
            outFS << "Pikachu used thunderbolt, dealing 0 damage, April too OP" << endl << endl;
            outFS << "April HP = " << gameone.GetAprilHP() << endl;
            outFS << "Pikachu HP = " << gameone.GetCputHP() << endl << endl;
            
            pikachu_turn = false;
            player_turn = true;
        }
    }
    
    cout << "------------------------------------" << endl;
    cout << "              Victory" << endl;
    cout << "------------------------------------" << endl;
    
    outFS << "------------------------------------" << endl;
    outFS << "              Victory" << endl;
    outFS << "------------------------------------" << endl;
    
    outFS.close();
}