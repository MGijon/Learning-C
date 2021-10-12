#include <stdio.h>
#include <stdlib.h>
#include <functions.h>
#include <time.h>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif

void generateRandomNumbers(void){
  /* Just generate random numbers to practice */
  printf("Generating Radom numbers just for fun\n");
  time_t t;
  int N = 10;
  int randomNumbers[N];

  srand((unsigned) time(&t));
  for (int i = 0; i<N; i++){ randomNumbers[i] = rand() % 100; }
  for (int i = 0; i<N; i++){ 
    if (i != N - 1){ printf("%d - ", randomNumbers[i]);}
    else { printf("%d", randomNumbers[i]); }
  }
  return;
}

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

void initGraella(double *graella, int NUMBER_POINTS, int DIMENSION)
{
        
    double element = 0.0;
    double step = 0.01;
    
    for (int i = 0; i < NUMBER_POINTS; i++)
    {
        for (int j = 0; j < DIMENSION; j++)
        {   
            *( (graella + DIMENSION * i) + j) = element + j * step;
        }
        element += step;
    }
   
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

