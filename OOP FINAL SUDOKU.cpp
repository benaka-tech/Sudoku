/*******************************************************************************************************************************************************************************
*                                                      CLASSIC SUDOKU GAME                                                                                                      *
* DONE BY:																																									    *
* JK DAARUN USN:-1NT18CS059                                                                                                                                                     *
* JAYANTH C USN:-1NT18CS063                                                                                                                                                     *
* UTSAV DAS USN:-1NT18CS178                                                                                                                                                     *
* TARUN KUMAR ARCOT USN:-1NT18CS174                                                                                                                                             *
********************************************************************************************************************************************************************************/


#include <iostream>
#include<cctype>
#include <cstdlib>
#include <time.h>
#include<bits/stdc++.h>
#include <fstream>
#include <windows.h>
#include <MMsystem.h>


using namespace std;


int sudoku[9][9];

int sudoku_board[9][9];


int M0[9][9]={{0,7,0,4,0,0,5,0,0},{0,1,0,3,2,0,0,8,4},{9,0,0,0,6,1,0,0,0},{0,0,5,0,8,0,0,2,9},{0,2,9,7,0,5,1,6,0},{6,8,0,0,4,0,7,0,0},{0,0,0,8,1,0,0,0,7},{8,0,0,0,5,4,0,3,0},{0,0,2,0,0,3,0,4,0}};

int M1[9][9]={{0,0,8,4,7,0,3,0,6},{0,6,0,0,0,2,0,1,0},{2,4,0,5,0,0,0,0,8},{0,0,9,1,5,0,4,0,3},{0,7,0,0,0,0,0,5,0},{5,0,4,0,8,3,2,0,0},{7,0,0,0,0,6,0,8,5},{0,9,0,7,0,0,0,3,0},{6,0,2,0,9,5,1,0,0}};

int M2[9][9]={{0,2,7,4,0,5,9,6,0},{4,9,0,2,0,6,0,5,1},{0,0,1,0,0,0,0,7,0},{7,0,0,0,8,0,0,0,9},{0,0,9,0,0,0,7,0,0},{1,0,0,0,6,0,0,0,5},{0,7,0,0,0,0,5,0,0},{5,1,0,6,0,7,0,3,4},{0,4,2,8,0,3,6,1,0}};

int M3[9][9]={{7,0,8,0,3,0,0,0,6},{0,3,0,8,0,0,1,4,0},{0,5,0,0,4,2,0,0,9},{0,0,7,0,2,0,0,6,0},{5,0,2,3,0,9,8,0,4},{0,9,0,0,7,0,5,0,0},{8,0,0,1,9,0,0,2,0},{0,1,6,0,0,7,0,3,0},{3,0,0,0,8,0,7,0,1}};

int M4[9][9]={{5,0,6,0,7,8,4,0,0},{9,0,0,0,0,0,0,2,0},{0,2,8,0,0,4,3,6,0},{0,0,0,1,2,0,8,5,4},{0,0,0,9,0,3,0,0,0},{2,5,7,0,8,6,0,0,0},{0,1,3,6,0,0,9,8,0},{0,4,0,0,0,0,0,0,5},{0,0,5,8,3,0,7,0,1}};

int M5[9][9]={{5,0,0,0,8,0,0,0,0},{0,0,0,1,0,7,3,8,0},{6,0,0,0,0,2,1,7,9},{3,7,4,0,9,0,0,0,0},{0,0,1,2,0,8,6,0,0},{0,0,0,0,1,0,5,9,3},{7,9,6,3,0,0,0,0,4},{0,4,8,6,0,5,0,0,0},{0,0,0,0,4,0,0,0,2}};

int M6[9][9]={{0,0,0,0,9,4,7,0,0},{0,9,1,6,0,8,0,2,0},{4,0,0,7,3,0,5,0,6},{0,0,0,8,0,0,1,0,5},{1,0,6,0,0,0,2,0,9},{3,0,4,0,0,2,0,0,0},{5,0,2,0,8,9,0,0,3},{0,6,0,5,0,7,4,8,0},{0,0,7,1,6,0,0,0,0}};

int M7[9][9]={{0,0,3,1,0,4,0,5,0},{6,8,0,3,0,0,2,7,0},{0,5,0,7,0,2,0,0,1},{2,0,6,0,0,0,8,1,7},{0,0,0,0,0,0,0,0,0},{5,4,8,0,0,0,6,0,9},{8,0,0,9,0,1,0,2,0},{0,7,4,0,0,3,0,6,8},{0,3,0,6,0,8,4,0,0}};

int M8[9][9]={{0,4,0,0,0,2,3,0,8},{0,3,1,0,6,0,0,0,0},{7,9,0,1,8,0,0,6,0},{1,0,4,8,0,6,0,0,9},{0,7,0,0,0,0,0,4,0},{9,0,0,7,0,4,5,0,2},{0,2,0,0,3,1,0,9,6},{0,0,0,0,4,0,1,5,0},{3,0,5,6,0,0,0,7,0}};

int M9[9][9]={{5,0,6,0,0,9,0,0,8},{9,4,0,0,7,0,5,0,0},{0,8,0,5,0,2,0,1,0},{0,5,0,4,6,0,0,0,7},{8,0,3,0,0,0,6,0,4},{7,0,0,0,8,1,0,3,0},{0,9,0,7,0,6,0,5,0},{0,0,2,0,3,0,0,4,9},{1,0,0,8,0,0,7,0,2}};



void menu1(){
    PlaySound("C:\\Users\\Benaka\\Desktop\\sudoku\\music\\mario_08.wav",NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
    cout<<"\t\t\t\t\t\t########## SUDOKU ##########"<<endl;
    


    cout<<"\t\t\t\t\t\tWelcome to Sudoku!!"<<endl;
    cout<<"\t\t\t\t\t\tChoose an option to continue\n"<<endl;
    cout<<"\t\t\t\t\t\t1 - Play"<<endl;
    cout<<"\t\t\t\t\t\t2 - Rules"<<endl;
    cout<<"\t\t\t\t\t\t3 - Scores"<<endl;
    cout<<"\t\t\t\t\t\t4 - Exit"<<endl;

cout<<"\n\n\nMade by:- \nJK Daarun\t\t1NT18CS059,\nUtsav Das\t\t1NT18CS178,\nJayant C\t\t1NT18CS063,\nTarun Kumar Arcot\t1NT18CS174"<<endl;
    

}



void initializesudoku(){

    srand(time(0));

    int s = rand()%10;

    switch (s) {

        case 0:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M0[i][j];

                }

            }

            break;

        case 1:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M1[i][j];

                }

            }

            break;

        case 2:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M2[i][j];

                }

            }

            break;

        case 3:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M3[i][j];

                }

            }

            break;

        case 4:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M4[i][j];

                }

            }

            break;

        case 5:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M5[i][j];

                }

            }

            break;

        case 6:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M6[i][j];

                }

            }

            break;

        case 7:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M7[i][j];

                }

            }

            break;

        case 8:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M8[i][j];

                }

            }

            break;

        case 9:

            for(int i=0;i<9;i++){

                for(int j=0;j<9;j++){

                    sudoku[i][j]= M9[i][j];

                }

            }

            break;

    }

    for(int i=0;i<9;i++){

        for(int j=0;j<9;j++){

            sudoku_board[i][j]= sudoku[i][j];

        }

    }

}

//printing the table

void printsudoku(){

    
    cout<<"  ########### SUDOKU ############"<<endl;

    cout<<endl;

    int w=1;

    cout<<"     1  2  3  4  5  6  7  8  9"<<endl;

       cout<<"  -------------------------------"<<endl;

       cout<<"  -------------------------------"<<endl;
      
    
    for(int i=0;i<9;i++){
    
    cout<<w<<" "<<"||";
    

    w++;

        for(int j=0;j<9;j++){
             
            if (sudoku_board[i][j]==0){
                 
                cout<<" "<<" "<<""<<"|";
             
            }

            else {

                cout<<" "<<sudoku_board[i][j]<<"|";
               
            }

        }

    cout<<"|";

    cout<<endl;
	printf("  ||--------------------------||");
	cout<<endl;

    }

   
 
}

void sudoku_rules()

{
PlaySound("C:\\Users\\Benaka\\Desktop\\sudoku\\music\\gamenow.wav",NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
cout<<"\t\t\t\t\tThe classic Sudoku Game Rules";
cout<<endl;
cout<<endl;
cout<<"The classic Sudoku game involves a grid of 81 squares.\nThe grid is divided into nine blocks,each containing nine squares\n";
cout<<endl;
cout<<"The rules of the game are simple:\neach of the nine blocks has to contain all the numbers 1-9 within its squares.\nEach number can only appear once in a row, column or box.\n";
cout<<endl;
cout<<"The difficulty lies in that each vertical nine-square column, or horizontal nine-square line across,\nwithin the larger square, must also contain the numbers 1-9, without repetition or omission.\n";
cout<<endl;
cout<<"Every puzzle has just one correct solution.\n";
cout<<endl;
}



bool check1 (){

    int cont=0;

    for(int i=0;i<9;i++){

        for(int j=0;j<9;j++){

            if (sudoku_board[i][j]!=0){

                cont++;

            }

        }

    }

    if(cont==81){

        return true;

    }

    else

        return false;

}

// CHECKING IF THE GAME HAS BEEN CORRECTED !!!

bool checkfinal () {

    int contL=0, contC=0 , contQ1=0, contQ2=0, contQ3=0, contQ4=0, contQ5=0, contQ6=0, contQ7=0, contQ8=0, contQ9=0;

    for(int i=0; i<9; i++){

        for(int k=0; k<8; k++){

            for(int j=k; j<8; j++){

                 //..COUNTING ELEMENTS OF THE LINES !!

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contL++;

                }

              //..COUNTING ELEMENTS OF THE COLUMNS !!

                if (sudoku_board[k][i]!=sudoku_board[j+1][i]){

                    contC++;

                }

            }

        }

    }

   
//...CONNECTING  1 !!! ...
    for(int i=0; i<3; i++){

        for(int k=0; k<2; k++){

            for(int j=k; j<2; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ1++;

                }

                if (sudoku_board[k][i]!=sudoku_board[j+1][i]){

                    contQ1++;

                }

            }

        }

    }

 
//...CONNECTING  2 !!! ...

    for(int i=0; i<3; i++){

        for(int k=3; k<5; k++){

            for(int j=k; j<5; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ2++;

                }

            }

        }

    }

    for(int j=3; j<6; j++){

        for(int k=0; k<2; k++){

            for(int i=k; i<2; i++){

                if (sudoku_board[k][j]!=sudoku_board[i+1][j]){

                    contQ2++;

                }

            }

        }

    }

   //...CONNECTING  3 !!! ...

    for(int i=0; i<3; i++){

        for(int k=6; k<8; k++){

            for(int j=k; j<8; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ3++;

                }

            }

        }

    }

    for(int j=6; j<9; j++){

        for(int k=0; k<2; k++){

           for(int i=k; i<2; i++){

                if (sudoku_board[k][j]!=sudoku_board[i+1][j]){

                    contQ3++;

                }

            }

        }

    }

  //...CONNECTING  4 !!! ...

    for(int i=3; i<6; i++){

        for(int k=0; k<2; k++){

           for(int j=k; j<2; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ4++;

                }

            }

        }

    }

    for(int j=0; j<3; j++){

        for(int k=3; k<5; k++){

            for(int i=k; i<5; i++){

                if (sudoku_board[k][j]!=sudoku_board[i+1][j]){

                    contQ4++;

                }

            }

        }

    }

  //...CONNECTING  5 !!! ...

    for(int i=3; i<6; i++){

        for(int k=3; k<5; k++){

            for(int j=k; j<5; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ5++;

                }

                if (sudoku_board[k][i]!=sudoku_board[j+1][i]){

                    contQ5++;

                }

            }

        }

    }

  //...CONNECTING  6 !!! ...

    for(int i=3; i<6; i++){

        for(int k=6; k<8; k++){

            for(int j=k; j<8; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ6++;

                }

            }

        }

    }

    for(int j=6; j<9; j++){

        for(int k=3; k<5; k++){

            for(int i=k; i<5; i++){

               if (sudoku_board[k][j]!=sudoku_board[i+1][j]){

                    contQ6++;

                }

            }

        }

    }

  //...CONNECTING  7!!! ...

    for(int i=6; i<9; i++){

        for(int k=0; k<2; k++){

            for(int j=k; j<2; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ7++;

                }

            }

        }

    }

    for(int j=0; j<3; j++){

        for(int k=6; k<8; k++){

            for(int i=k; i<8; i++){

                if (sudoku_board[k][j]!=sudoku_board[i+1][j]){

                    contQ7++;

                }

            }

        }

    }

  //...CONNECTING  8!!! ...

    for(int i=6; i<9; i++){

        for(int k=3; k<5; k++){

            for(int j=k; j<5; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ8++;

                }

            }

        }

    }

    for(int j=3; j<6; j++){

        for(int k=6; k<8; k++){

            for(int i=k; i<8; i++){

                if (sudoku_board[k][j]!=sudoku_board[i+1][j]){

                    contQ8++;

                }

            }

        }

    }

//...CONNECTING  9 !!! ...

    for(int i=6; i<9; i++){

        for(int k=6; k<8; k++){

            for(int j=k; j<8; j++){

                if (sudoku_board[i][k]!=sudoku_board[i][j+1]){

                    contQ9++;

                }

                if (sudoku_board[k][i]!=sudoku_board[j+1][i]){

                    contQ9++;

                }

            }

        }

    }

    if(contL==324 && contC==324 && contQ1==18 && contQ2==18 && contQ3==18 && contQ4==18 && contQ5==18 && contQ6==18 && contQ7==18 && contQ8==18 && contQ9==18){

        return true;

    }

    else

        return false;

}

void scores(double time)
{   char name[20];
   cout<<"Enter your name";
   cin>>name;
   fstream file("scores.txt",ios::in | ios::out | ios::app);
   if(!file.is_open()){
    cout << "error while opening the file"<<endl;
}else{

file<<setw(7)<<name<<setw(7)<<time<<endl;
}
}
void display()
{
PlaySound("C:\\Users\\Benaka\\Desktop\\sudoku\\music\\highscore.wav",NULL, SND_FILENAME|SND_ASYNC);	
fstream fIn;
fIn.open( "C:\\Users\\Benaka\\Desktop\\scores.txt", ios::in );

if( fIn.is_open() )
{
  string s;
  while( getline( fIn, s ) )
  {
    cout << s << endl;
    // Tokenize s here into columns (probably on spaces)
  }
  fIn.close();
}
else
  cout << "Error opening file " << errno << endl;
}

int main () {
    SetConsoleTitle("Sudoku");
    int x,line,column,value,rpt=1;
    char s[100];
    time_t start,end;
    double time_taken;
    while(rpt)
    {
	

    menu1();

    cin>>x;

    system("cls");
    
    switch(x)
    {
	

  

default: menu1();

        cin>>x;

        system("cls");

    

    cout<<endl;
    break;

  

   case 1:PlaySound("C:\\Users\\Benaka\\Desktop\\sudoku\\music\\level.wav",NULL, SND_FILENAME|SND_ASYNC);
        
         
       
        
        
   		time(&start);
          initializesudoku();
         
        system("cls");
       
       
        while (check1()==false){

            printsudoku();

            cout<<endl;

            cout << "Enter the row, column and value to insert:"<<endl;
            
            cin >> line >> column >> value;
         
            
            while (value < 0 || value >9){
                
                cin>>value;

            }
            

            if (sudoku_board[line-1][column-1]==0 || sudoku[line-1][column-1]!=sudoku_board[line-1][column-1]){

                sudoku_board[line-1][column-1] = value;

            }

            system("cls");

            checkfinal ();

        }
        

        cout<<endl;

        if (checkfinal()==true)
        {
		
            cout<<"Congratulations, that's right!"<<endl;
            time(&end);
            time_taken = (end - start); 
            cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
            cout <<" sec "<< endl; 
            scores(time_taken);
			}
            
        else

            {
			
			cout<<"Incorrect game! ... Try again!"<<endl;
            time(&end);
            time_taken =(end - start); 
            cout << "Time taken by program is : " << fixed << time_taken << setprecision(5); 
         cout <<" sec "<< endl;
         scores(time_taken);
     }
           
        cout<<endl;

        cout<<"Do you want to play again?"<<endl;

        cout<<endl;

        menu1();

        cin>>x;

        system("cls");

        while(x!=1&&x!=2&&x!=3){

            menu1();

            cin>>x;

            system("cls");

        }

        system("cls");

    

    cout<<" Game over    !"<<endl;

    break;
    

case 2:sudoku_rules(); 
	   break;
case 3:display();
        break;
case 4:cout<<"Thanks for playing!!!!! See you soon :) BYE !!!" ;
       exit(0);
        break;
    }
    cout<<endl;
    cout<<"TO continue press non zero digit/n";
    cin>>rpt;
 
    
}
return 0;
}
