#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

struct Account
{
          Account() : username(new std::string),
                    password(new std::string),
                    domain(new std::string),
                    description(new std::string),
                    tag(new Tag){}

          ~Account()
          {
                    delete username;
                    delete password;
                    delete domain;
                    delete description;
                    delete tag;
          }

          // enum for predefined set of tags
          enum struct Tag
          {
                    school,
                    work,
                    sus,
                    gaming
          };

          std::string* username;
          std::string* password;
          std::string* domain;
          std::string* description;
          Tag* tag;
};

#endif // !ACCOUNT_HPP