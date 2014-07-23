#ifndef UTILS_H_INCLUDED
#define UTILS_H_INCLUDED

#include <string>
#include <sstream>

template<typename T>
std::string typeToString(T value)
{
    std::stringstream sstm;
    sstm << value;
    return sstm.str();
}

#endif // UTILS_H_INCLUDED
