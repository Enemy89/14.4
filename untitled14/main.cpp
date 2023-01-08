#include <iostream>

int main() {
    float matrix [4][4];
    float vector [4];
    float newVector [4];
    float temp=0;
    float semiTemp=0;
    int count=0;
    for (int i=0; i<4; ++i) {
        for (int j=0; j<4; ++j) {
            std::cout<<"Enter the value of the matrix: "<<std::endl;
            std::cin>>matrix[i][j];
            if (i-count==j) {
                count++;
                std::cout<<"Enter the value of the vector: "<<std::endl;
                std::cin >> vector[i];
            }
            semiTemp = matrix[i][j] * vector[i];
            temp += semiTemp;
        }
        newVector[i]=temp;
        temp=0;
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << vector[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = 0; i < 4; ++i) {
        std::cout << newVector[i] << std::endl;
    }
}
