#ifndef LINEPARSER_H
#define LINEPARSER_H

#include "damageEffect.h"
#include <sstream>
#include <string>
#include <utility>
#include <vector>

std::vector<std::string> explode(std::string const &s, char delim);
void separateLineHeader(std::string line, std::string *header,
                        std::string *footer);

int ParseInt(const std::string &line);
float ParseFloat(const std::string &line);
std::string ParseString(const std::string &line);
void ParseDamageEffect(std::string const &line, damageEffect *Effect);

#endif // LINEPARSER_H
