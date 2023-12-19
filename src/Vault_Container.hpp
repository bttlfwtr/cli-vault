#ifndef VAULT_CONTAINER_HPP
#define VAULT_CONTAINER_HPP

#include <unordered_map>
#include <iostream>

#include "Account.hpp"

// the vault handles the modifications
// introduce middleman to avoid circualr dependency, container should only do container things
struct VaultContainer
{
          void AddItem(const Account& item);

          // allow this since it has to do with the entire container and not specific print handling
          void PrintVault(std::ostream& outStream);



          // domain of keys mapped to values of item username key
          // associated with item object.
          std::unordered_map<std::string, std::unordered_map<std::string, Account>> vault;
};

#endif // !VAULT_CONTAINER_HPP