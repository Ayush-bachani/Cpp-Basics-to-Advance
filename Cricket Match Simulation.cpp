#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
#include<windows.h>
#include<chrono>
using namespace std;
class player{
	public:
	string name;
	int runs;
	void create(string nm){
		name=nm;
		runs=0;
	}
	void bat(string name){
		int run_made = (rand()%7);
		runs+=run_made;
		if(run_made==6 || run_made==4){
			Sleep(1000);
			calabration(run_made, name);
		}
		else{
			Sleep(1000);
			cout<<"\nCurrent Ball Run "<<run_made<<" TOTAL RUNS: "<<runs;
		}
	}
	void calabration(int run_made, string name){
		cout<<"\n>>> CONGRATULATION "<<name<<" <<<";
		cout<<" (HE HIT "<<run_made<<")";
	}
	
	int getRuns(){
		return runs;
	}
	string getName(){
		return name;
	}
};
class Team{
	public:
	string Team_name;
	player p1[3];
	int total_runs;
	
	void create(string tmnm, string pnames[], int n){
		Team_name = tmnm;
		total_runs = 0;
		for(int i=0;i<n;i++){
			p1[i].create(pnames[i]);
	}}
	void playinnings(){
		cout<<"\n**********************************\n";
		cout<<"     >>>> "<<Team_name<<" INNING <<<<\n";
		cout<<"**********************************\n";
		for(int j=0;j<3;j++){
			cout<<"\n-->"<<p1[j].getName()<<" is Batting <--";
			for(int i=0;i!=3;i++){
				p1[j].bat(p1[j].getName());
				}
			cout<<"\n"<<p1[j].getName()<<" Scored: "<<p1[j].getRuns()<<"\n";
			total_runs+=p1[j].getRuns();
		}
		show_score(Team_name);
		Sleep(1000);
		cin.get();
		system("CLS");
	}
	int TotalRuns(){
		return 	total_runs;
	}
	void show_score(string Team_name){
		cout<<"\n**********************************\n";
		cout<<" >>>> "<<"SCORE BOARD OF "<<Team_name<<" <<<<\n";
		cout<<"**********************************\n";
		cout<<p1[0].name<<" MADE "<<p1[0].runs<<endl;
		cout<<p1[1].name<<" MADE "<<p1[1].runs<<endl;
		cout<<p1[2].name<<" MADE "<<p1[2].runs<<endl;
		cout<<"\n >>>> TOTAL RUNS OF "<<Team_name<<" "<<TotalRuns()<<" <<<<\n";
	}
	
};
int main(){
	srand(time(0));
	string team1Players[3] = {"Alice", "Bob", "Charlie"};
	Team T1;
	T1.create("Team-A", team1Players, 3);
	
	T1.playinnings();
	
	string team2Players[3] = {"Kevin", "Alvin", "Davin"};
	Team T2;
	T2.create("Team-B", team2Players, 3);
	
	T2.playinnings();
	T1.show_score("Team-A");
	T2.	show_score("Team-B");
	if(T1.TotalRuns()>T2.TotalRuns()){
		cout<<"\nTeam-A"<<" WON THE GAME !!!!!!";
	}
	else if(T1.TotalRuns()<T2.TotalRuns()){
		cout<<"\nTeam-B"<<" WON THE GAME !!!!!!";
	}
	else{
		cout<<"THIS GAME IS TIE!!!!";
	}
}




















