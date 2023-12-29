#ifndef __INPUT_HANDLER_HPP__
#define __INPUT_HANDLER_HPP__

#include <limits>

#include "Account.hpp"
#include "Print_Handlers.hpp"

struct InputHandlers
{
          static char GetMenuChoice(std::istream& inStream);
          static Account GetAccountInput(std::istream& inStream);
};

#endif