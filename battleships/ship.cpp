#include "ship.hpp"
#include <string>

Ship::Ship(int length, std::string name)
    : length(length), name(name), hits(0) {}
bool Ship::is_sunk() { return hits == length; }
void Ship::hit() { hits++; }