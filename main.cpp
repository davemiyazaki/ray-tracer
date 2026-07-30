#include <iostream>

int main(){

    //Image
    
    int image_height    = 256;
    int image_width     = 256;
    
    //Render

    std::cout << "P3\n" << image_width << " " << image_height << "\n255\n";

    return 0;
}