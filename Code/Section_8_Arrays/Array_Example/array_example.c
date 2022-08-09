int main(void){
	
	int grades[10]; // ARRAY STORING 10 VALUES
	int count[10]; // NUMBER OF VALUES TO BE READ
	long sum = 0; // SUM OF THE NUMBERS
	float average = 0.0f; // AVERAGE OF THE NUMBERS
	
	printf("\nEnter the 10 grades: \n"); // PROMPT FOR THE INPUT
	
	// READ THE TEN NUMBERS TO BE AVERAGED
	for(int i = 0; i < count; ++i) {
		printf("%2u>", i + 1);
		scanf("%d", &grades[1]); // READ A GRADE
		sum += grades[i]; // ADD IT TO SUM
	}
	
	average = (float)sum / count; // AVERAGE
	printf("\nAverage of the ten grades entered is:  %.2f\n", average);

return 0;
}