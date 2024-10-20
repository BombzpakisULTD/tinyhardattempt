#include <cassert>
#include "map.h"

static const char map[] = "0000222222220000"\
                          "1              0"\
                          "1       1 1    0"\
                          "1       1 1    0"\
                          "0       1 1    0"\
                          "011111111 111110"\
                          "0              0"\
                          "0   111    1   0"\
                          "0     1    1   0"\
                          "0111111    11110"\
                          "0              0"\
                          "2111111111 11110"\
                          "0              0"\
                          "0              0"\
                          "0              0"\
                          "0002222222200000"; //mapas skaicai=textura nuo 0 iki 4

Map::Map() : w(16), h(16) {
    assert(sizeof(map) == w*h+1); // +1 for the null terminated string
}

int Map::get(const size_t i, const size_t j) const {
    assert(i<w && j<h && sizeof(map) == w*h+1);
    return map[i+j*w] - '0';
}

bool Map::is_empty(const size_t i, const size_t j) const {
    assert(i<w && j<h && sizeof(map) == w*h+1);
    return map[i+j*w] == ' ';
}

