#pragma once
#ifndef SHAKEINSULTER_H
#define SHAKEINSULTER_H

#include <vector>
#include <string>

class ShakeInsulter {
private:
    std::vector<std::string> array1;
    std::vector<std::string> array2;
    std::vector<std::string> array3;

public:
    // Constructor to initialize the arrays with random strings
    ShakeInsulter();

    // Method to concatenate strings from the three arrays
    std::string generate_insult();
};

#endif // SHAKEINSULTER_H