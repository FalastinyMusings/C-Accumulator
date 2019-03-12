 /**     
    * This method keeps a running total of the numbers passed to it, along with     
	* a count of the numbers passed. The total and the count are passed back to     
	* the caller via pointers that the caller has sent. The total is also     
	* returned via the standard return mechanism.     
	*     
	* @param number a number to add to the running total     
	* @param sum a pointer to the caller's sum variable     
	* @param count a pointer to the caller's count variable     
	* @return the current value of the running total    
*/


double accumulator(double number, double *sum, int *count){ // Accumulator method as described above
    *sum += number;                                         // Adding number passed to sum
    *count += 1;                                            // Incrementing count by 1
    return *sum;                                            // Returning Sum
}