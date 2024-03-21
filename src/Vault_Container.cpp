#include "Vault_Container.hpp"

void VaultContainer::AddItem(const Account& item)
{
      // ~8% slower, does not replace any key-value pairs if key already exists for inner or outer key.
      // vault.emplace(item.domain, std::unordered_map<std::string, Account>()).first->second.emplace(item.username, item);

      // check if username key exists without [] operator initializing a domain key
      // && operator acts as short circuit for first condition
      if ((vault.count(item.domain) > 0) && (vault[item.domain].count(item.username) > 0))
      {
            // TODO : HANDLE ALREADY EXISTING
            PrintHandlers::PrintExists(item.username, std::cout);
            PrintHandlers::PrintItemInfo(vault[item.domain][item.username], std::cout);

            return;
      }
      else
            vault[item.domain][item.username] = item;

          return;
}

void VaultContainer::PrintVault(std::ostream& outStream)
{
      // for every domain key's username key, print its value content
      for (const auto& domainKey : vault)
      {
            outStream << "/ / / / / /" << domainKey.first << "\\ \\ \\ \\ \\ \\\n"; // domain value

            for (const auto& userKey : domainKey.second)
            {
                  PrintHandlers::PrintItemInfo(userKey.second, std::cout);
                  outStream << "\n";
            }

            outStream << "\n";
      }

      return;
}