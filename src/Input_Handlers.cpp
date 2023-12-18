#include "Input_Handlers.hpp"

std::unique_ptr<char> InputHandlers::GetMenuChoice(std::istream& inStream)
{
          PrintHandlers::PrintInputContext("choice: ", std::cout);

          std::unique_ptr<char> menuChoice = std::make_unique<char>();
          inStream >> *menuChoice;
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

          // ternary check if menuChoice is a lower case, if true, convert, else default to input.
          // take lower case input, subtract it by the lower bound of its caseness to normalize ascii value, then add lower bound of upper case.
          *menuChoice = (*menuChoice >= 'a' && *menuChoice <= 'z') ? (*menuChoice - 97 + 65) : *menuChoice;

          // menuChoice = static_cast<char>(std::toupper(menuChoice));

          return menuChoice;
}