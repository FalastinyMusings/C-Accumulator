
double accumulator(double number, double *sum, int *count){
    *sum += number;
    *count += 1;
    return *sum;
}