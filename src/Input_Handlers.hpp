#ifndef INPUT_HANDLER_HPP
#define INPUT_HANDLER_HPP

#include <limits>
#include <memory>

#include "Print_Handlers.hpp"

struct InputHandlers
{
          static char GetMenuChoice(std::istream& inStream);

};

#endif // !INPUT_HANDLER_HPP