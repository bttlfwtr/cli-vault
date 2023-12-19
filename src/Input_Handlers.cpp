#include "Input_Handlers.hpp"

char InputHandlers::GetMenuChoice(std::istream& inStream)
{
          PrintHandlers::PrintInputContext("choice: ", std::cout);

          char menuChoice;
          inStream >> menuChoice;
          // toupper returns int, typecast char to ignore conversion warning
          menuChoice = (char)toupper(menuChoice);

          // ternary check if menuChoice is a lower case, if true, convert, else default to input.
          // take lower case input, subtract it by the lower bound of its caseness to normalize ascii value, then add lower bound of upper case.
          // menuChoice = (menuChoice >= 'a' && menuChoice <= 'z') ? (menuChoice - 97 + 65) : menuChoice;

          // ignore buffered following inputs of char std::cin
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

          return menuChoice;
}