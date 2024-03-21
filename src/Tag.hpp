#ifndef __TAG_HPP__
#define __TAG_HPP__

#include <string>
#include <unordered_map>

enum Tag
{
      GAME,
      NONE,
      PERSONAL,
      PUBLIC,
      SCHOOL,
      SUS,
      WORK,
};

// bad bidirectional map because double storing data, but both ends are enum integers so not a big deal
static std::unordered_map<Tag, std::pair<std::string, Tag>> biMapTagStringTable
{
      {GAME, {"GAME", GAME,}},
      {NONE, {"NONE", NONE,}},
      {PERSONAL, {"PERSONAL", PERSONAL,}},
      {PUBLIC, {"PUBLIC", PUBLIC,}},
      {SCHOOL, {"SCHOOL", SCHOOL,}},
      {SUS, {"SUS", SUS,}},
      {WORK, {"WORK", WORK,}},
};

struct TagFunctions
{
      static std::string GetStringFromTag(const Tag& tag);
      static Tag GetTagFromString(const std::string& tagStr);
};


#endif