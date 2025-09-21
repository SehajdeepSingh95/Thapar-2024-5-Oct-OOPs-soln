#include<iostream>
using namespace std;

class Company{
public:
    string company_name;
    string location;

    Company(string company_name, string location){
        this->company_name = company_name;
        this->location = location;
    }
};

class Team: public Company{
public:
    string team_name;
    string project;

    Team(string company_name, string location, string team_name, string project): Company(company_name, location){
        this->team_name = team_name;
        this->project = project;
    }
};

class Developer: public Team{
public:
    string developer_name;
    string programming_language;

    Developer(string company_name, string location, string team_name, string project, string developer_name, string programming_language): Team(company_name, location, team_name, project){
        this->developer_name = developer_name;
        this->programming_language = programming_language;
    }

    void display() {
        cout << company_name << " " << location << " " << team_name << " " << project << " " << developer_name << " " << programming_language << endl;
    }
};

int main(){
    Developer d1("Google","India","GenAI Team","LLM","Sehajdeep","Python");
    d1.display();
    
    return 0;
}