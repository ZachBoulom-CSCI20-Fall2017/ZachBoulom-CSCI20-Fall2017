#include <iostream>
using namespace std;
 
 struct monster{
  string head;
  string eyes;
  string ears;
  string mouth;
  string nose;
 };
 
 int main()
 {
   monster monsterA;
   monsterA.head = "Zombus";
   monsterA.eyes = "Vegitas";
   monsterA.ears = "Wackus";
   monsterA.nose = "Vegitas";
   monsterA.mouth = "Wackus";
   
   monster monster_bill;
   monster_bill.head = "Happy";
   monster_bill.eyes = "Wackus";
   monster_bill.ears = "Wackus";
   monster_bill.mouth = "Wackus";
   monster_bill.nose = "Wackus";
   
   cout<<"Head:"<<monsterA.head<<endl;
   cout<<"Eyes:"<<monsterA.eyes<<endl;
   cout<<"Ears:"<<monsterA.ears<<endl;
   cout<<"Nose:"<<monsterA.nose<<endl;
   cout<<"Mouth:"<<monsterA.mouth<<endl;
   
   cout<<endl<<"Head:"<<monster_bill.head<<endl;
   cout<<"Eyes:"<<monster_bill.eyes<<endl;
   cout<<"Ears:"<<monster_bill.ears<<endl;
   cout<<"Nose:"<<monster_bill.nose<<endl;
   cout<<"Mouth:"<<monster_bill.mouth<<endl;
     
 }
 
 /* struct goes before main, not a variable/object
    struct is a template and an object is what's made from the template? why is there a ;?
*/