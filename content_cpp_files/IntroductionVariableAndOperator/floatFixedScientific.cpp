#include <iostream>
#include <fstream>
#include <iomanip>

int main() {
    // Number to demonstrate fixed and scientific notation
    float num = 1234.5678;

    // Create and open a file
    std::ofstream outFile("output.txt");
    if (!outFile) {
        std::cerr << "Error creating file!" << std::endl;
        return 1;
    }

    // Write in fixed-point notation
    outFile << std::fixed << std::setprecision(2);
    outFile << "Fixed-point: " << num << std::endl;

    // Write in scientific notation
    outFile << std::scientific << std::setprecision(3);
    outFile << "Scientific: " << num << std::endl;

    // Close the file
    outFile.close();

    std::cout << "Data written to output.txt successfully." << std::endl;

    return 0;
}
