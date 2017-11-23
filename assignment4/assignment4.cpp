/*
Zach Boulom
11/22/17
This program will read in student answersPreview the documentView in a new window for a test and compare the answers to the corresponding answer keyPreview the 
documentView in a new window for the test.  1 point is awarded for each correct answer, omitted answers get 0 points, and incorrect answers deduct ¼ point.  
The program should output to the screen and a file the student’s name, list of missed questions, and overall grade on the exam.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<cstring>

using namespace std;

class StudentInfo{
    public:
    StudentInfo();
    void SetNames(string first, string last);
    void SetScores(double score);
    void WrongAnswers(int problem, int problem_number);
    
    void PrintResults();
    
    private:
    string first_name_;
    string last_name_;
    double grade_;
    int missed_[21];
};

StudentInfo::StudentInfo(){
    first_name_ = "N/A";
    last_name_ = "N/A";
    grade_ = 0;
    for (int i=0; i < 21; i++){
        missed_[i] = 0;
    }
}
//sets names and scores
void StudentInfo::SetNames(string first, string last){
    first_name_ = first;
    last_name_ = last;
}
void StudentInfo::SetScores(double score){
    grade_ = score;
}
void StudentInfo::WrongAnswers(int problem, int problem_number){
    missed_[problem_number - 1] = problem;
    missed_[problem_number] = 0;
}


//prints the students results, counts amount of missed questions
void StudentInfo::PrintResults(){
    cout << "Test Results" << endl;
    cout << first_name_ << " " << last_name_ << endl;
    cout << "Score: " << grade_ << endl;
    
    if(missed_[0] != 0){
        cout << "Missed Questions: " << endl;
        for (int i=0; missed_[i] != 0 && i < 21; i++){
            if(missed_[i+1] != 0){
                cout << missed_[i] << ", ";
            }
            else{
                cout << missed_[i] << endl;
            }
        }
    }
}

int main(){
   const int students = 6;
   const int questions = 21;
   
   double points = 0;
   int wrong_answers = 0;
   
   StudentInfo student[students];
   string names[2];
   
   string student_answer[questions];
   string answer_sheet[questions];
   
   ifstream inFS;
   

    //loads answer key   
   inFS.open("answerkey.txt");
   
   if (!inFS.is_open()){
       cout << "answer key not found" << endl;
       
       return 1;
   }
   
   
   else {
       for (int i=0; i<questions; i++){
           inFS >> answer_sheet[i];
       }
   
        inFS.close();
   

        //loads students tests   
        inFS.open("studentanswers.txt");
   
        if (!inFS.is_open()){
            cout << "student answers not found" << endl;
       
            return 1;
        }
        
        for (int z = 0; z < students + 1; z++) {
            
            for(int i = 0; i < questions + 1; i++){
                
                if(i < 1){
                    inFS >> names[0];
                    inFS >> names[1];
                } 
                else {
                    inFS >> student_answer[i - 1];
                }
            }
                
            //grades papers
            for(int i = 0; i < questions; i++){
                if(student_answer[i] == answer_sheet[i]){
                points += 1;
            } 
            else if(student_answer[i] == "?"){
                wrong_answers++;
                student[z].WrongAnswers(i + 1, wrong_answers);
            } 
            else {
                points -= 0.25;
                wrong_answers++;
                student[z].WrongAnswers(i + 1, wrong_answers);
                }
            }

            //uses classes    
            student[z].SetNames(names[0], names[1]);
            student[z].SetScores(points);
            student[z].PrintResults();
            cout << endl;
        }
        
        
        inFS.close();
        

   }
}