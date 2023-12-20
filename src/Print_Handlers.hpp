#ifndef PRINT_HANDLER_HPP
#define PRINT_HANDLER_HPP

#include <iostream> // dependency injection using ostream object
#include "Account.hpp"

struct PrintHandlers
{
          // use (std::ostream& outStream = std::cin) to provide default value without needing to feed std::cin into argument
          static void PrintInputContext(const std::string inputContext, std::ostream& outStream);
          static void PrintItemInfo(const Account& account, std::ostream& outStream);
          static void PrintMenu(std::ostream& outStream);
          static void PrintMenuSelection(const std::string choiceContext, std::ostream& outStream);
          static void PrintTag(const Tag& tag, std::ostream& outStream);
};

#endif // !PRINT_HANDLER_HPP