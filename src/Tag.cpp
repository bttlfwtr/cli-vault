#include "Tag.hpp"

std::string TagFunctions::GetStringFromTag(const Tag& tag)
{
      auto iter{biMapTagStringTable.find(tag)};

      if (iter != biMapTagStringTable.end())
            return iter->second.first;
      else
            return "?TAG?";
}

// iterate through every first to get its pair then check for its second's first
// alternatively create a tag specifically for String -> Tag to use unordered_map find()
Tag TagFunctions::GetTagFromString(const std::string& tagStr)
{
      for (const auto& pair : biMapTagStringTable)
      {
            if (pair.second.first == tagStr)
            {
                  return pair.second.second;
            }
      }

      return Tag::NONE;
}