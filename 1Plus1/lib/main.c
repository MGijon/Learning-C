#include <stdio.h>
#include <functions.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const int NUMBER_POINTS = 100;
    const int DIMENSION = 2;
    const int NUMBER_EXPERIMENTS = 10;
    const double KNOW_MINIMUM = 0.0;
    const double TOLERANCE = 0.0000001;
    const double SIGMA = .0000003;
    
    int number_iterations_all[NUMBER_EXPERIMENTS];

    for (int experiment = 0; experiment < NUMBER_EXPERIMENTS; experiment++)
    {   
        // setting up the experiment
        double current_value, new_value;
        int iteration = 0;

        printCurrentTime();
        printf("Starting experiment %u\n", experiment + 1);

        // initial point
        double* x = createRandomVector();
        printf("  - Initial point: (%f, %f)\n", x[0], x[1]); 
        current_value = sphereFunction(x);
        printf("  - Initial fitness value: %f\n", current_value);
                
        // start experiment 
        while (current_value > KNOW_MINIMUM + TOLERANCE)
        {   
            double y[2] = { x[0] + SIGMA * generateRandomNormal(), x[1] + SIGMA * generateRandomNormal()};
            new_value = sphereFunction(y);
            if (current_value > new_value)
            {
                x[0] = y[0];
                x[1] = y[1];
                current_value = new_value;
            }
            

            // print and update the iteration
            //if (iteration % 5 == 0)
            //{
            //    printf("\t\tIteration %d - Current value %f - (%f, %f)\n", iteration, current_value, x[0], x[1]);
            //}
            iteration++;
        }

        printf("  - Final point: (%f, %f)\n", x[0], x[1]);
        printf("  - Final finetess value: %f\n", current_value);
        printf("  - Total number of iterations needed: %d\n", iteration);
        printf("Ended experiment %u\n\n", experiment + 1);
    }
    

    /*
    double graella[NUMBER_POINTS][DIMENSION];
    initGraella((double *) graella, NUMBER_POINTS, DIMENSION);
    double start, step;
    start = 0.0;
    step = 0.01;
    for (int point = 0; point < NUMBER_POINTS; point++){
        graella[point][0] = start;
        graella[point][1] = start;
        start = start + step;
        //printf("\n%f - %f\n", graella[point][0], graella[point][1]);
        
        double p[2] = {graella[point][0], graella[point][1]};
        //printf("Shpere value: %f\n", sphereFunction(p));
        //printf("Ackley value: %f\n", ackleyFunction(p));
    }

    */
    return 0;
}
