#include <string>

class Ship {
  int length, hits;
  std::string name;

public:
  Ship(int, std::string);
  bool is_sunk();
  void hit();
};