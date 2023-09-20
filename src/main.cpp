#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>

// Local
#include "inc/types.hpp"
#include "inc/file.hpp"
#include "inc/terms.hpp"

auto readJson(const std::string& filename) -> nlohmann::json
{
  std::string path = "/var/rinha/";
  path.append(filename);
  path.append(".json");

  if (std::filesystem::exists(path)) {
    nlohmann::json jsonParser;
    std::cout << filename << std::endl;

    std::ifstream file(path);
    file >> jsonParser;

    return jsonParser;
  }

  std::cout << "This file doest exist" << std::endl;
  return "404";
};

auto main(int argc, char *argv[]) -> int
{
  if (argc == 1) {
    std::cout << "Need filename and type of file (.rinha [-source] or .json [-json])" << std::endl;
    return 1;
  }

  if (std::strcmp(argv[1], "-help") == 0)
  {
    std::cout << "Examples:\n\t'soulrinha <filename> -json' - to read json files\n\t'soulrinha <filename> -source' -  to read rinha source files" << std::endl;
    return 1;
  }

  if (std::strcmp(argv[2], "-json") == 0)
  {
    nlohmann::json ast = readJson(argv[1]);

    if (ast == "404") {
      return 0;
    }

    std::cout << ast << std::endl;
    return 0;
  }

  if (std::strcmp(argv[2], "-source") == 0) {
    std::cout << "Only recognize .json files!" << std::endl;
    return 1;
  }

  std::cout << "incorrect parameters/flags, use -help!" << std::endl;
  return 0;
};
