#include "Print_Handler.hpp"

void PrintHandler::PrintMenu(std::ostream& outStringStream)
{
          outStringStream << "(A)dd\n"  // : add item to domain
                    << "(S)earch\n"     // : search specific content, or print all content of vault
                    << "(M)odify\n"     // : modify existing item information
                    << "(D)elete\n"     // : delete item from domain
                    << "(E)xit\n"       // : exit program, E -l removes login cred from config
                    << "(H)elp\n";       // : get choice instructions
          return;
}

void PrintHandler::PrintCustomInputLine(std::string inputContext, std::ostream& outStream)
{
          outStream << "    ><>" << inputContext << ": ";

          return;
}

void PrintHandler::PrintMenuSelection(std::string choiceContext, std::ostream& outStream)
{
          outStream << choiceContext << "\n";

          return;
}