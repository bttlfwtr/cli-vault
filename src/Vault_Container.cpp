#include "Vault_Container.hpp"

void VaultContainer::AddItem(const Account& item)
{
          vault[item.domain].emplace(item.username, item);

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