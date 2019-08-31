// Name: John Dinh
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
int main()
{
  std::string location;

  int days;

  double hotelCost;

  double foodCost;

  double totalCost;

  std::cout << "You\'re on a trip. Where?"<< std::endl;//Get location

  std::cin >> location;

  std::cout << "How long is the stay?" << std::endl;//Get days

  std::cin >> days;

  std::cout << "How much was the meal?" << '\n';//Find cost for food

  std::cin >> foodCost;

  std::cout << "How much was the hotel?" << '\n';// Find cost for hotel

  std::cin >> hotelCost;

  totalCost = hotelCost + foodCost;// find total cost by combining expenses for hotel and food

  std::cout << "Location\t" << "Days\t" << "Hotel\t" << "Meal\t" << "Total\t" << std::endl;//display results afterwards

  std:: cout << location << "\t" << "\t" << days << "\t" << "$" << hotelCost << "\t" << "$" << foodCost << "\t" << "$" << totalCost<< std::endl;

  return 0;
}
