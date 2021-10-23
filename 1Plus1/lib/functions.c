#include <stdio.h>
#include <stdlib.h>
#include <functions.h>
#include <time.h>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif

void printCurrentTime(void){
  /*
   * Function: printCurrentTime
   * --------------------------
   *
   * Prints the current time of the system 
   */
  time_t now;
  struct tm *ts;
  char buf[80];

  now = time(0);

  ts = localtime(&now);
  strftime(buf, sizeof(buf), "%a %Y-%m-%d %H:%M:%S %Z", ts);
  printf("%s\n", buf);

  return;
}

double sphereFunction(double point[2])
{   
    /*
     * Function: sphereFunction
     * ------------------------
     * Compute the value of the Sphere function for the given
     * 2-dimensional point
     *
     * point: array of doubles of dimension 2
     * 
     * return: the value of the Sphere function at the given point
     */
    double computation;
    computation = sqrt( pow(point[0],2) + pow(point[1], 2));               
    return computation;
}

double ackleyFunction(double point[2])
{
    /*
     * Function: ackleyFunction
     * ------------------------
     * Compute the value of the Ackley's function for the given 
     * 2-dimensional point
     *
     * point: array of doubles of dimension 2
     * 
     * returns: the value of the Ackley's function at the given point 
     */
    double computation;
    computation = -20 * exp( - 0.2 * sqrt( 0.5 * (pow(point[0], 2) + pow(point[1], 2)) )) - exp( 0.5 * ( cos(2 * point[0] * MPI) + sin(2 * point[1] * MPI) ) ) + exp(1) + 20;
    return computation;
}

double * createRandomVector(void)
{
    /*
     * Function: createRandomVector
     * ----------------------------
     * Create random vector of doubles with dimension 2 and values
     * between (-1, 1)
     *
     * returns: pointer to a 2-dimensional array of doubles
     */
    //time_t control_time;
    double b = (double) ((rand() % 200) - 100) / 100;    
    double c = (double) ((rand() % 200) - 100) / 100;
    double *vect = malloc(2);
    if (!vect)
        return NULL;
    
    vect[0] = b;
    vect[1] = c;
    
    return vect;
}


double generateRandomNormal(void)
{
    /*
     * Function: generateRandomNormal
     * ------------------------------
     * Generate samples of a normal distribution using the Marsaglia algorithm
     *
     * returns: sample of a normal distribution (mu = 1, sigma = 1)
     */
    time_t control_time;
    double v1 = (double) ((rand() % 200) - 100) / 100; 
    double v2 = (double) ((rand() % 200) - 100) / 100;
    
    return cos(2 * MPI * v2) * sqrt( -2.0 * log(v1));
}

double computeMean(int* elements, int number_elements)
{   
    /*
     * Function: computeMean
     * ---------------------
     * Computes the aricmetic mean of the given poits
     *
     * elements: 1-dimensional array of integers
     * number_elements: number of values contained in elements
     *
     * returns: aricmetic mean of the given collection of integers
     */
    int sum;
    for (int i = 0; i < number_elements; i++)
    {
        sum += elements[i];
    }
    return (double) sum / number_elements;
}

double computeStd(int* elements, int number_elements)
{
    /*
     * Function: computeStd
     * --------------------
     * Computes the standard deviation of the given poits
     *
     * elements: 1-dimensional array of integers
     * number_elements: number of values contained in elements
     *
     * returns: standard deviation of the given collection of integers
     */
     double sum;
     double mean = computeMean(elements, number_elements);
     for (int i = 0; i < number_elements; i++)
     {
        sum += pow( (elements[i] - mean), 2 );
     }
     double computation = sqrt( sum / (number_elements - 1));
     return computation;
}
