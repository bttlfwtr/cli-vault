#ifndef __INPUT_HANDLER_HPP__
#define __INPUT_HANDLER_HPP__

#include <limits>

#include "Print_Handlers.hpp"

struct InputHandlers
{
          static char GetMenuChoice(std::istream& inStream);

};

#endif