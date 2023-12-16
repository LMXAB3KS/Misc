#include <iostream>
#include <iomanip>
#include <vector>

class Drug {
public:
    std::string name;
    int penaltyCostFirstTime;
    int jailTimeFirstTime;
    int penaltyCostSecondTime;
    int jailTimeSecondTime;
    int penaltyCostThirdTime;
    int jailTimeThirdTime;

    Drug(const std::string& drugName, int firstTimePenalty, int firstTimeJail,
        int secondTimePenalty, int secondTimeJail, int thirdTimePenalty, int thirdTimeJail)
        : name(drugName), penaltyCostFirstTime(firstTimePenalty), jailTimeFirstTime(firstTimeJail),
          penaltyCostSecondTime(secondTimePenalty), jailTimeSecondTime(secondTimeJail),
          penaltyCostThirdTime(thirdTimePenalty), jailTimeThirdTime(thirdTimeJail) {}
};

void printDrugList(const std::vector<Drug>& drugs) {
    std::cout << std::setw(20) << "Drug Name"
              << std::setw(20) << "1st Time Penalty"
              << std::setw(20) << "1st Time Jail"
              << std::setw(20) << "2nd Time Penalty"
              << std::setw(20) << "2nd Time Jail"
              << std::setw(20) << "3rd Time Penalty"
              << std::setw(20) << "3rd Time Jail" << std::endl;

    std::cout << std::string(140, '-') << std::endl;

    for (const auto& drug : drugs) {
        std::cout << std::setw(20) << drug.name
                  << std::setw(20) << drug.penaltyCostFirstTime
                  << std::setw(20) << drug.jailTimeFirstTime
                  << std::setw(20) << drug.penaltyCostSecondTime
                  << std::setw(20) << drug.jailTimeSecondTime
                  << std::setw(20) << drug.penaltyCostThirdTime
                  << std::setw(20) << drug.jailTimeThirdTime << std::endl;
    }
}

int main() {
    std::vector<Drug> drugs = {
        {"Alcohol", 1000, 30, 2000, 60, 4000, 90},
        {"Ayahuasca", 800, 20, 1600, 40, 3200, 70},
        {"Cannabis", 500, 15, 1000, 30, 2000, 60},
        {"Benzos", 1500, 45, 3000, 90, 6000, 120},
        {"Cocaine", 2000, 60, 4000, 90, 8000, 120},
        {"Fentanyl", 2500, 75, 5000, 120, 10000, 150},
        {"GHB", 1200, 35, 2400, 70, 4800, 100},
        {"Hallucinogens", 700, 25, 1400, 50, 2800, 80},
        {"Heroin", 3000, 90, 6000, 120, 12000, 180},
        {"Inhalants", 400, 20, 800, 40, 1600, 60},
        {"Ketamine", 1800, 50, 3600, 80, 7200, 110},
        {"Khat", 1000, 30, 2000, 60, 4000, 90},
        {"Kratom", 600, 20, 1200, 40, 2400, 70},
        {"LSD", 800, 25, 1600, 50, 3200, 80},
        {"MDMA", 1500, 45, 3000, 90, 6000, 120}
    };

    int choice;
    std::cout << "Choose an option:" << std::endl;
    std::cout << "[0] Print the list of drugs and penalties" << std::endl;

    for (size_t i = 0; i < drugs.size(); ++i) {
        std::cout << "[" << i + 1 << "] " << drugs[i].name << std::endl;
    }

    std::cout << "Choose an option(0-15): ";
    std::cin >> choice;

    if (choice == 0) {
        printDrugList(drugs);
    } else if (choice >= 1 && choice <= static_cast<int>(drugs.size())) {
        //selected drug handling 
        std::cout << "You selected: " << drugs[choice - 1].name << std::endl;
    } else {
        std::cout << "Invalid choice. Exiting." << std::endl;
        return 1;
    }

    return 0;
}
