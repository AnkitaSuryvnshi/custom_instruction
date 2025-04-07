
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

// Function to simulate generating assembly code
void generateAssembly(string reg1, string reg2, string op) {
    if (op == "+") {
        cout << "ADD " << reg1 << ", " << reg2 << endl;
    } else if (op == "-") {
        cout << "SUB " << reg1 << ", " << reg2 << endl;
    } else {
        cerr << "Unsupported operation: " << op << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <input_file>" << endl;
        return 1;
    }

    ifstream infile(argv[1]);
    if (!infile) {
        cerr << "Error opening file: " << argv[1] << endl;
        return 1;
    }

    string var1, var2, var3, op1, op2;
    infile >> var1 >> op1 >> var2 >> op2 >> var3;

    cout << "; Assembly Code Generated" << endl;
    generateAssembly(var1, var2, op1);
    generateAssembly(var1, var3, op2);

    return 0;
}
