#include <iostream>

int main(){

    int nx = 200; //resolution of x-axis
    int ny = 100; // resoltuion of y-axis 

    std::cout << "P3\n" << nx << " " << ny << "\n255\n"; //set the color scheme(P3) and resolution(200x100)
    //maniupulating colors 
    for(int j = ny - 1; j>= 0; j--){ //movement from top to bottom across y-axis is stored in j  
        for(int i = 0;i < nx; i++){ // movement from left to right across x-axis is stored in i


            //values are from 0.0(black) to 1.0(full color)
            float r = float(i) / float(nx); //set value of red based on position of x-axis
            float g = float(j) / float(ny); //set value of green based on position of y-axis
            float b = 0.2; //blue stays constanst across both axises 

            int ir = int(255.99*r); //register values based on 256 value system 
            int ig = int(255.99*g);
            int ib = int(255.99*b);
            
            std::cout << ir << " " << ig << " " << ib << "\n";//register that pixel of the image to the ppm file
        }
    }

    return 0;
}