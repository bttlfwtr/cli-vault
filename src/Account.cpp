#include "Account.hpp"

std::string Account::GetTagString(const Tag& tag)
{
      switch (tag)
      {
            case Tag::GAME :
                  return "GAME";
            case Tag::PERSONAL :
                  return "PERSONAL";
            case Tag::PUBLIC :
                  return "PUBLIC";
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