#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <functions.h>

int main()
{
    const int NUMBER_POINTS = 100;
    const int DIMENSION = 2;
    const int NUMBER_EXPERIMENTS = 10;
    const double KNOW_MINIMUM = 0.0;
    const double TOLERANCE = 0.00001;
    const double SIGMA = .000003;
    
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
            iteration++;
        }
        number_iterations_all[experiment] = iteration;

        printf("  - Final point: (%f, %f)\n", x[0], x[1]);
        printf("  - Final finetess value: %f\n", current_value);
        printf("  - Total number of iterations needed: %d\n", iteration);
        printf("Ended experiment %u\n\n", experiment + 1);
    }
    //for (int i = 0; i < NUMBER_EXPERIMENTS; i++)
    //{
    //    printf("%d\n", number_iterations_all[i]);
    //}
    printf("MEAN iterations: %f\n", computeMean(number_iterations_all, NUMBER_EXPERIMENTS));
    printf("STD  iterations: %f\n", computeStd(number_iterations_all, NUMBER_EXPERIMENTS));
    return 0;
}
