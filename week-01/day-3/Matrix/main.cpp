#include <iostream>

int main() {


    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output


    int matrix[5][5];
    int k = 0;
    for (int i = 0; i < 5 ; i++){
        for (int j = 0; j < 5; j++){
            if(j == k){
                matrix[i][j] = 1;
            }else{
                matrix[i][j] = 0;
            }
        }k++;
    }

    for (int i = 0; i < 5 ; i++){
        for(int j = 0; j < 5; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;


    }
    return 0;
}