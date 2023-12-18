#ifndef VAULT_CONTAINER_HPP
#define VAULT_CONTAINER_HPP

#include <unordered_map>

#include "Account.hpp"


// introduce middleman to avoid circualr dependency

struct VaultContainer
{
          /*
          domain of keys mapped to values of item username key
          associated with item object.
          */
          std::unordered_map<std::string, std::unordered_map<std::string, std::string>> vault;
};

#endif // !VAULT_CONTAINER_HPP