#include <iostream>
// Define a structure to represent a point
struct Point
{
    double x;
    double y;
};
int main()
{
    Point point1, point2, point3;
    // Input values for the first point
    std::cout << "Enter x-coordinate for point 1: ";
    std::cin >> point1.x;
    std::cout << "Enter y-coordinate for point 1: ";
    std::cin >> point1.y;
    // Input values for the second point
    std::cout << "Enter x-coordinate for point 2: ";
    std::cin >> point2.x;
    std::cout << "Enter y-coordinate for point 2: ";
    std::cin >> point2.y;
    // Calculate the sum of point1 and point2 and store it in point3
    point3.x = point1.x + point2.x;
    point3.y = point1.y + point2.y;
    // Display the coordinates of the new point (point3)
    std::cout << "Sum of point 1 and point 2 is (" << point3.x << ", " << point3.y << ")" << std::endl;
    return 0;
}



