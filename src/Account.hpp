#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <memory>
#include <string>

struct Account
{
          Account() : username(std::make_unique<std::string>()),
                    password(std::make_unique<std::string>()),
                    domain(std::make_unique<std::string>()),
                    description(std::make_unique<std::string>()),
                    tag(std::make_unique<Tag>()){}

          // enum for predefined set of tags
          enum struct Tag
          {
                    school,
                    work,
                    sus,
                    gaming
          };

          std::unique_ptr<std::string> username;
          std::unique_ptr<std::string> password;
          std::unique_ptr<std::string> domain;
          std::unique_ptr<std::string> description;
          std::unique_ptr<Tag> tag;
};

#endif // !ACCOUNT_HPP