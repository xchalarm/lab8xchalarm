#include<iostream>
using namespace std ;


int age,height,bounty;
string character ; 


int main(){
    cout << "Enter your age: ";
    cin  >> age;
    

    if(age <= 25){
    cout << "Enter your height: ";
    cin  >> height; 
        if(height < 100){
            character = "Chopper";
        }
        else if(height < 180){
            character = "Usopp";
        } 
        else {
        cout << "Enter your bounty: ";
        cin  >> bounty ;  
            if(bounty > 1.1e9){
                character = "Zoro";
            }
            else{
            character = "Sanji";
            }
        }
    }
    else if( age <= 60){
        cout << "Enter your bounty: ";
        cin  >> bounty;
        if(bounty > 500e6){
            character = "Jinbe";
        }
        else{
            character = "Franky";

        }
    }
    else{
        character = "Brook";
    }
    cout << "Your character = " << character;
}
    
/*"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
