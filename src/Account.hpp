#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

struct Account
{
          // enum for predefined set of tags
          enum Tag
          {
                    game,
                    school,
                    sus,
                    work
          };

          std::string username;
          std::string password;
          std::string domain;
          std::string description;
          Tag tag;
};

#endif // !ACCOUNT_HPP