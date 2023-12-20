#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

// enum for predefined set of tags
enum Tag
{
          game,
          personal,
          school,
          sus,
          work
};

struct Account
{
          // -Wreorder of list initializer matches member cluster
          Account(){}
          Account(std::string d, std::string u, std::string p, std::string e, std::string desc, Tag t) :
                    domain(d), username(u), password(p), email(e), description(desc), tag(t){}

          // member cluster / account properties
          std::string domain;
          std::string username;
          std::string password;
          std::string email;
          std::string description;
          Tag tag;
};

#endif // !ACCOUNT_HPP