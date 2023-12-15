#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

struct Account
{
          std::string username;
          std::string password;
          std::string domain;
          std::string description;

          // enum for predefined set of tags
          enum struct Tag
          {
                    school,
                    work,
                    sus,
                    gaming,
          };

          Tag tag;
};

#endif // !ACCOUNT_HPP