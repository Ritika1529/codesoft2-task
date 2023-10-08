#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// ramndom number from 1 t0 100
int main() {
    srand(time(0));
       int random= 1 + ( rand()%100);
          while(true){
      cout<< "\n\t\t\t Welcome to the number guessing game"<<endl;
              cout<<" you have to guess a number between o to 100. There were three levels  EASY , MEDIUM , HARD"<<endl;
           cout<< " \n Enter the difficulty level :\n ";
           cout<< " 1 for Easy !\t";
            cout<< " 2 for medium !\t";
             cout<< " 3 for Hard !\t";
              cout<< " o for ending the game!\n \t"<<endl;


       int difficultyChoice ;
       cout<< " enter the number : ";
       cin >> difficultyChoice;

    srand(time(0));
    int random= 1+ (rand()% 100);
    int playerchoice;

       if(difficultyChoice==1){
           cout<< "\n You have 10 choices for finding the secret number between 1 to 100: ";
           int choiceLeft =10;
           for(int i=1; i<=10; i++){
            cout<<" \n\t Enter the number : ";
            cin>>playerchoice;
            if(playerchoice== random){
                  cout<<" YOU WON " <<   endl;
                  cout<<" WELL DONE! ," <<endl;
                  cout<<"\t\t\t Want to PLAY it again OR Exit \n \n"<<endl;
                  break;
            }else{
               cout<< " NO! "<< playerchoice<< " The Numberyou have chosen is wrong!\n"<<endl;
               if(playerchoice>random)
               {
                  cout<<"The number You have choosen is smaller than output" <<endl;
               }else{
              cout<<"The number You have choosen is greater than output" <<endl;
               }
               choiceLeft = choiceLeft -1;
               cout<< choiceLeft << " choices left " <<endl;
               if(choiceLeft==0){
                  cout<< " You couldn't find the right number , it was" << random << " YOU LOSE! \n\n";
                  cout<<"Want to exit OR Play Again \n\n";
               }
            }
           }
       }
       else if (difficultyChoice==2){
          cout<< "\n You have 7 choices for finding the secret number between 1 to 100: ";
           int choiceLeft =7;
           for(int i=1; i<= 7; i++){
            cout<<" \n\t Enter the number : ";
            cin>>playerchoice;
            if(playerchoice== random){
                  cout<<" YOU WON " <<   endl;
                  cout<<" WELL DONE! ," <<endl;
                  cout<<"\t\t\t Want to PLAY it again OR Exit \n \n"<<endl;
                  break;
            }else{
               cout<< " NO! "<< playerchoice<< " The Numberyou have chosen is wrong!\n"<<endl;
               if(playerchoice>random)
               {
                  cout<<"The number You have choosen is smaller than output" <<endl;
               }else{
              cout<<"The number You have choosen is greater than output" <<endl;
               }
               choiceLeft = choiceLeft -1;
               cout<< choiceLeft << " choices left " <<endl;
               if(choiceLeft==0){
                  cout<< " You couldn't find the right number , it was" << random << " YOU LOSE! \n\n";
                  cout<<"Want to exit OR Play Again \n\n";
               }
            }
           }
       
       }
       else if(difficultyChoice==3){
          cout<< "\n You have 4 choices for finding the secret number between 1 to 100: ";
           int choiceLeft = 4;
           for(int i=1; i<=4; i++){
            cout<<" \n\t Enter the number : ";
            cin>>playerchoice;
            if(playerchoice== random){
                  cout<<" YOU WON " <<   endl;
                  cout<<" WELL DONE! ," <<endl;
                  cout<<"\t\t\t Want to PLAY it again OR Exit \n \n"<<endl;
                  break;
            }else{
               cout<< " NO! "<< playerchoice<< " The Numberyou have chosen is wrong!\n"<<endl;
               if(playerchoice>random)
               {
                  cout<<"The number You have choosen is smaller than output" <<endl;
               }else{
              cout<<"The number You have choosen is greater than output" <<endl;
               }
               choiceLeft = choiceLeft -1;
               cout<< choiceLeft << " choices left " <<endl;
               if(choiceLeft==0){
                  cout<< " You couldn't find the right number , it was" << random << " YOU LOSE! \n\n";
                  cout<<"Want to exit OR Play Again \n\n";
               }
            }
           }
       
       }
       else if(difficultyChoice==0){
         exit(0);
       }
       else{
           cout<<" invalid Number " <<endl; 
       }
         }


return 0;
}






























