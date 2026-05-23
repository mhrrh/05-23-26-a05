// ------------- FILE HEADER -------------
// Author ✅: Madison Harrah
// Assignment ✅: 5
// Date ✅: 5/23/26
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

  cout << fixed << setprecision(2);

  const int SLICES_PER_PIZZA = 8;
  const double SALES_TAX = 0.07;
  const double DELIVERY_CHARGE = 0.20;

  int totalEntries = 0;
  int totalPizzas = 0;
  int maxPeople = 0;
  double maxTotalCost = 0.0;

  char userChoice = 'y';

  cout << "Welcome to my Pizza Party Statistics program!" << endl << endl;

  do {
    cout << "Do you want to enter more (y/n): ";
    cin >> userChoice;

    if (userChoice == 'y' || userChoice == 'Y'){
      int numPeople;
      double avgSlicesPerPerson;
      double costPerPizza;

      cout << "Enter the number of people, average slices per person, and the cost of a pizza separated by a space: " << endl;
      cin >> numPeople >> avgSlicesPerPerson >> costPerPizza;

      double totalSlicesNeeded = numPeople * avgSlicesPerPerson;
      int numPizzas = static_cast<int>(ceil(totalSlicesNeeded / SLICES_PER_PIZZA));

      double costOfPizzas = numPizzas * costPerPizza;
      double tax = costOfPizzas * SALES_TAX;
      double costIncludingTax = costOfPizzas + tax;
      double delivery = costIncludingTax * DELIVERY_CHARGE;
      double totalCost = costIncludingTax + delivery;

      cout << endl;
      cout << "Number of pizzas: " << numPizzas << endl;
      cout << "Cost of pizzas:   $" << costOfPizzas << endl;
      cout << "Tax:              $" << tax << endl;
      cout << "Delivery:         $" << delivery << endl;
      cout << "Total cost:       $" << totalCost << endl;

      totalEntries = totalEntries + 1;
      totalPizzas = totalPizzas + numPizzas;

      if (numPeople > maxPeople){
        maxPeople = numPeople;
      }
      if (totalCost > maxTotalCost){
        maxTotalCost = totalCost;
      }
    }
  } while (userChoice == 'y' || userChoice == 'Y');
  double averagePizzas = static_cast<double>(totalPizzas) / totalEntries;

  cout << "Number of entries: " << totalEntries << endl;
  cout << "Total number of pizzas: " << totalPizzas << endl;

  cout << fixed << setprecision(1);
  cout << "Average number of pizzas: " << averagePizzas << endl;

  cout << fixed << setprecision(2);
  cout << "Maximum number of people: " << maxPeople << endl;
  cout << "Maximum cost of pizzas: $" << maxTotalCost << endl << endl;

  cout << "Thank you for using my program!" << endl;


  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
