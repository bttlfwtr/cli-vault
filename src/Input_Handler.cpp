#include "Input_Handler.hpp"

char InputHandler::GetMenuChoice(std::istream& inStream)
{
          char menuChoice;

          PrintHandler::PrintInputContext("choice", std::cout);

          inStream >> menuChoice;
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

          // ternary check if menuChoice is a lower case, if true, convert, else default to input.
          // take lower case input, subtract it by the lower bound of its caseness to normalize ascii value, then add lower bound of upper case.
          menuChoice = (menuChoice >= 'a' && menuChoice <= 'z') ? (menuChoice - 97 + 65) : menuChoice;

          // menuChoice = static_cast<char>(std::toupper(menuChoice));

          return menuChoice;
}