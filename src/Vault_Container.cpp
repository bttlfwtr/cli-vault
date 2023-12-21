#include "Vault_Container.hpp"

void VaultContainer::AddItem(const Account& item)
{
          // ~8% slower, does not replace any key-value pairs if key already exists for inner or outer key.
          // vault.emplace(item.domain, std::unordered_map<std::string, Account>()).first->second.emplace(item.username, item);

          // TODO : check if username already exists within a domain
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
                              std::cout << "\n";

                    }

                    std::cout << "\n";
          }

          return;
}