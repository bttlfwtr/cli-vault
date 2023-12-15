#include "Input_Handler.hpp"

char InputHandler::GetMenuChoice(std::istream& inStream)
{
          char menuChoice;

          PrintHandler::PrintInputContext("choice", std::cout);
          inStream >> menuChoice;

          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

          menuChoice = static_cast<char>(std::toupper(menuChoice));

          return menuChoice;
}
