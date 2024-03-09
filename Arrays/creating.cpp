#include <iostream>
// This library allows for input/output operations.

int main() {
    const int SIZE = 6;
    // datatype variable_name with size
    int intArray[SIZE] = {3,4,5,6,7,8};
    std::string stringArray[SIZE] = {"Hello", "World","This","Is","Me","C++"};

    for (int i = 0 ;i < 6;i++){
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl<<std::endl;

    int matrix[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,1,2}};
    
    for (int i = 0;i < 3;i++){
        for (int j = 0; j < 4 ; j++){
            std::cout << matrix[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout << std::endl;
}