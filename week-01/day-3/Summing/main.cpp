#include <iostream>
#include <string>

int sum(int x);

int main() {

    int a = 5;
    std::cout << sum(a) << std::endl;

    return 0;
}
int sum(int x){
    int isumm = 0;
    for (int i = 0; i < x ; i++)
        isumm += i;



    return (isumm);
}