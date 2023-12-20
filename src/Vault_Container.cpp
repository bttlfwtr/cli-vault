#include "Vault_Container.hpp"

void VaultContainer::AddItem(const Account& item)
{
          vault[item.domain][item.username] = item;
}

void VaultContainer::PrintVault(std::ostream& outStream)
{
          // for every domain key's username key, print its value content
          for (const auto& domainKey : vault)
          {
                    outStream << domainKey.first << "\n"; // domain value

                    for (const auto& userKey : domainKey.second)
                    {
                              PrintHandlers::PrintItemInfo(userKey.second, std::cout);

                              PrintHandlers::PrintTag(userKey.second.tag, std::cout);
                    }
          }
}
