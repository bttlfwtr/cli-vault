#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

#include <string>
#include "Tag.hpp"

// enum for predefined set of tags
struct Account
{
      // -Wreorder of list initializer matches member cluster
      Account(){}
      Account(std::string d, std::string u, std::string p, std::string e, std::string desc, Tag t) :
            domain(d), username(u), password(p), email(e), description(desc), tag(t){}

      // member cluster / account properties
      std::string domain{}; // what if remove Account domain property and go off of user input domain instead?
      std::string username{};
      std::string password{};
      std::string email{};
      std::string description{};
      Tag tag{Tag::NONE}; // don't default empty initialization, since enum works off of whatever is value 0
};

#endif