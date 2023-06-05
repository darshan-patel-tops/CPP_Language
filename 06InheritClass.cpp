#include <iostream>
#include <string>

class Cricketer 
{
public:
    std::string name,state;
    int age;

    void Details()
    {
        std::cout<< "Enter Name:";
        // std::cin>>name;
        getline(std::cin, name);

        std::cout<< "Enter Age:";
        std::cin>>age;
        
        std::cout<< "Enter State:";
        std::cin>>state;


    }
};

class Batsman : public Cricketer 
{
public:
    int totalRuns;
    double averageRuns;
    int bestPerformance,innings;

    void inputData() 
    {
        std::cout << "Enter total runs: ";
        std::cin >> totalRuns;
        
        std::cout << "Enter best performance: ";
        std::cin >> bestPerformance;

        std::cout << "Enter Total Innings: ";
        std::cin >> innings;
    }

    void calculateAverageRuns() 
    {
        averageRuns = totalRuns/innings;
    }

    void displayData() 
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "State: " << state << std::endl;
        std::cout << "Total runs: " << totalRuns << std::endl;
        std::cout << "Average runs: " << averageRuns << std::endl;
        std::cout << "Best performance: " << bestPerformance << std::endl;
    }
};

int main() 
{
    Batsman batsman;
    batsman.Details();
    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();
    return 0;
}