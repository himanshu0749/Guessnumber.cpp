#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	cout<<"***********************************************************************************************************************";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\t********************Guess The Number*****************\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
	cout<<"Difficulty Level"<<endl;
	cout<<"1. Easy"<<endl;
	cout<<"2. Medium"<<endl;
	cout<<"3. Hard"<<endl;
	cout<<"If U want to play a game"<<endl<<"Select Y else N"<<endl;
	srand(time(NULL));
	char select;
	int diff,chances,key=rand()%100+1,user,again;
		cin>>select;
		if(select=='N' || select=='n'){
			return 0;
		}
		else if(select=='y' || select=='y'){
			cout<<"choose difficulty level"<<endl;
			cin>>diff;
			if(diff==1){
				cout<<"Welcome to Easy Level"<<endl;
				chances=15;
				do{
					cout<<"u have "<<chances<<" chance remain"<<endl;
					cin>>user;
					if(user<key){
						cout<<"number is smaller"<<endl;
						chances--;
					}
					else if(user>key){
						cout<<"number is lager"<<endl;
						chances--;
					}
					else if(user>100){
						cout<<"choose correct number"<<endl;
					}
					else{
						cout<<"u win the game"<<endl;
						break;
					}
				}while(chances);
				while(chances==0){
					cout<<"u will loose the game"<<endl;
					break;
				}
			}
			else if(diff==2){
					cout<<"Welcome to Medium Level"<<endl;
					chances=10;
					do{
						cout<<"u have "<<chances<<" chance remain"<<endl;
						cin>>user;
						if(user<key){
							cout<<"number is smaller"<<endl;
							chances--;
						}
						else if(user>key){
							cout<<"number is lager"<<endl;
							chances--;
						}
						else if(user>100){
							cout<<"choose correct number"<<endl;
						}
						else{
							cout<<"u win the game"<<endl;
							break;
						}
					}while(chances);
					while(chances==0){
						cout<<"u will loose the game"<<endl;
						break;
					}	
				}
			
			else if(diff==3){
					cout<<"Welcome to Hard Level"<<endl;
					chances=5;
					do{
						cout<<"u have "<<chances<<" chance remain"<<endl;
						cin>>user;
						if(user<key){
							cout<<"number is smaller"<<endl;
							chances--;
						}
						else if(user>key){
							cout<<"number is lager"<<endl;
							chances--;
						}
						else if(user>100){
							cout<<"choose correct number"<<endl;
						}
						else{
							cout<<"u win the game"<<endl;
							break;
						}
					}while(chances);
					while(chances==0){
						cout<<"u will loose the game"<<endl;
						break;
					}
			
			}
		else{
			cout<<"select correc optiont"<<endl;
		}
	}
}
