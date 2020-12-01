#include <maincalc.h>
#include <stdio.h>

int main() {
	struct integral {
		float upper_bound_1;
		float lower_bound_1;
		float upper_bound_2;
		float lower_bound_2;

	} live_integral;
	
	float integrand(float x, float y){
		// this can change later
		return x + y;	
	}

	printfn();

	return 0;
}
