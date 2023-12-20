#include "Print_Handlers.hpp"

void PrintHandlers::PrintMenu(std::ostream& outStream)
{
          outStream << "(A)dd\n"  // : add item to domain
                    << "(S)earch\n"     // : search specific content, or print all content of vault
                    << "(M)odify\n"     // : modify existing item information
                    << "(D)elete\n"     // : delete item from domain
                    << "(E)xit\n"       // : exit program, E -l removes login cred from config
                    << "(H)elp\n";       // : get choice instructions

          return;
}

void PrintHandlers::PrintInputContext(const std::string inputContext, std::ostream& outStream)
{
          outStream << "    ><>" << inputContext;

          return;
}

void PrintHandlers::PrintMenuSelection(const std::string menuChoiceContext, std::ostream& outStream)
{
          outStream << menuChoiceContext;

          return;
}

void PrintHandlers::PrintTag(const Tag& tag, std::ostream& outStream)
{
          switch (tag)
          {
                    case Tag::GAME :
                              outStream << "game\n";
                              break;
                    case Tag::PERSONAL :
                              outStream << "personal\n";
                              break;
                    case Tag::SCHOOL :
                              outStream << "school\n";
                              break;
                    case Tag::SUS :
                              outStream << "sus\n";
                              break;
                    case Tag::WORK :
                              outStream << "work\n";
                              break;
                    default :
                              outStream << "?TAG?\n";
                              break;
          }

          return;
}

void PrintHandlers::PrintItemInfo(const Account& account, std::ostream& outStream)
{
          outStream << account.username << "\n"
                    << account.password << "\n"
                    << account.email << "\n"
                    << account.description << "\n";

          PrintTag(account.tag, outStream);

          return;
}