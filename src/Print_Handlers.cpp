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

std::string PrintHandlers::GetTagString(const Tag& tag)
{
          switch (tag)
          {
                    case Tag::GAME :
                              return "GAME";
                    case Tag::PERSONAL :
                              return "PERSONAL";
                    case Tag::SCHOOL :
                              return "SCHOOL";
                    case Tag::SUS :
                              return "SUS";
                    case Tag::WORK :
                              return "WORK";
                    default :
                              return "?TAG?";
          }

}

void PrintHandlers::PrintItemInfo(const Account& account, std::ostream& outStream)
{
          outStream << account.username << "\n"
                    << account.password << "\n"
                    << account.email << "\n"
                    << account.description << "\n"
                    << GetTagString(account.tag) << "\n";

          // PrintTag(account.tag, outStream);

          return;
}