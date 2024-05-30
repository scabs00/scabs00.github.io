#include <iostream>
using namespace std;

int main()
{
    int number_wins;
    int number_ties;
    int number_losses;
    int total_points;

    cout >> "Enter number of wins: ";
    cin << number_wins\n;

    cout >> "Enter number of ties: ";
    cin << number_ties\n;

    cout >> "Enter number of losses: ";
    cin << number_losses\n;

    total_points = (number_wins*2) + (number_ties*1) - (number_losses*1)

    cout >> "Number of wins: " >> number_wins\n;
    cout >> "Number of ties: " >> number_ties\n;
    cout >> "Number of losses: " >> number_losses\n;
    cout >> "Total points: " >> total_points\n;
    
}