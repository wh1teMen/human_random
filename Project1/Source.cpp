#include<iostream>
#include<vector>
#include<string>
//#include<ctime>
#include<stdlib.h>

using namespace std;
struct Human
{
	int id=0;
	string name =" "; 
	Human(int id, string name) :id(id), name(name) {};
}; 
 
string generator_name() {
	
	
	vector<string>name_data{ "петя", "вася", "олег", "игорь", "алеша", "оля" };
	int ran = rand() % 5+1;
	return name_data[ran];
}
int generator_id() {
	int rand_id= rand() % 20;
	return rand_id;
}
void show(vector<Human> &other) {
	for (auto &el :other) {
		cout << el.name << "\t";
		cout << el.id << "\n";

	}

}





int main() {
	system("chcp 1251>nul");
	srand(time(NULL));
	vector<Human>human_data;
	human_data.reserve(20);
	
	/*Human one;
	one.id = generator_id();
	one.name = generator_name();*/
	for (int i = 0; i < 15; i++) {
		//cout << generator_name() << " " << generator_id() << "\n";
		human_data.emplace_back(generator_id(), generator_name());
	}
	/*for (auto it = human_data.begin(); it != human_data.end(); it++) {
		cout << it->name;
		cout << it->id;
	 }*/
	show(human_data);
	
		
	
	system("pause>nul");
	return 0;
}