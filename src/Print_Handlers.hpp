#ifndef __PRINT_HANDLER_HPP__
#define __PRINT_HANDLER_HPP__

#include <iostream> // dependency injection using ostream object
#include "Account.hpp"


struct PrintHandlers
{
      enum Color
      {
            RED,      // something bad happened
            ORANGE,
            YELLOW,
            GREEN,
            BLUE,
            INDIGO,
            VIOLET
      };

      // use (std::ostream& outStream = std::cin) to provide default value without needing to feed std::cin into argument
      static void PrintExists(const std::string existsContext, std::ostream& outStream);
      static void PrintInputContext(const std::string& inputContext, std::ostream& outStream);
      static void PrintItemInfo(const Account& account, std::ostream& outStream);
      static void PrintMenu(std::ostream& outStream);
      static void PrintMenuSelection(const std::string& choiceContext, std::ostream& outStream);
};

#endif