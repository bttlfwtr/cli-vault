#ifndef PRINT_HANDLER_HPP
#define PRINT_HANDLER_HPP

#include <iostream> // dependency injection using ostream object
// #include <sstream>

struct PrintHandler
{
          // use (std::ostream& outStream = std::cin) to provide default value without needing to feed std::cin into argument
          static void PrintMenu(std::ostream& outStream);
          static void PrintCustomInputLine(std::string inputContext, std::ostream& outStream);
          static void PrintMenuSelection(std::string choiceContext, std::ostream& outStream);
};

#endif // !PRINT_HANDLER_HPP