#ifndef INPUT_HANDLER_HPP
#define INPUT_HANDLER_HPP

#include <limits>

#include "Print_Handler.hpp"

struct InputHandler
{
          static char GetMenuChoice(std::istream& inStream);

};

#endif // !INPUT_HANDLER_HPP