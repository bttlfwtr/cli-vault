#include "print_handler.hpp"

void PrintHandler::PrintMenu(std::ostream& outStringStream)
{
          outStringStream << "(A)dd\n"  // : add item to domain
                    << "(S)earch\n"     // : search specific content
                    << "(M)odify\n"     // : modify existing item information
                    << "(D)elete\n"     // : delete item from domain
                    << "(P)rint\n"      // : print all vault content
                    << "(E)xit\n"       // : exit program
                    << "(L)ogout\n"     // : exit and remove login from config
                    << "(H)elp\n"       // : get choice instructions
                    << "><>choice: ";

          return;
}
