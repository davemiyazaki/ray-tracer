#include <iostream>

int main(){

    //Image
    
    int image_height    = 256;
    int image_width     = 256;
    
    //Render

    std::cout << "P3\n" << image_height << " " << image_width << "\n255\n";
    return 0;
}