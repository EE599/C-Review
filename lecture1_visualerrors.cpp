/**
 * Compares the analytical vs. computed area of a right triangle with
 * provided base & height.
 *
 * h|   /
 *  |  /|
 *  | / |  <-- Compute area of this triangle
 *  |/  |
 *  +------
 *      b
 */
#include <iostream>

int main()
{
  int base, height;
  double m, darea, dx=0.01, integrated_area;

  cout << "Provide the base and height (as integers) of a right-triangle: " << endl;
  cin >> base >> height;

  cout << "Analytically computed area of given triangle is " << base * height / 2 << endl;

  // Note that the equation for y given some x value
  //  is y=m*x where m=height/base
  m = height / base; 
  for(x=0; x < base; x=x+dx)
    // d_area is dx times the height of the small rectangle centered 
    // at the current x value...height is (m*x)
    darea = m * x * dx;
    integrated_area += darea;

  cout << "Integrated area of given triangle is " << integrated_area << endl;
  return 0;
}      