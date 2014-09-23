#ifndef VALUES_H
#define VALUES_H

int* values(int var)
{
	int i=0;
	char* possible_vals[17];
	possible_vals[0]  = "0000";
	possible_vals[1]  = "0001";
	possible_vals[2]  = "0010";
	possible_vals[3]  = "0011";
	possible_vals[4]  = "0100";
	possible_vals[5]  = "0101";
	possible_vals[6]  = "0110";
	possible_vals[7]  = "0111";
	possible_vals[8]  = "1000";
	possible_vals[9]  = "1001";
	possible_vals[10] = "1010";
	possible_vals[11] = "1011";
	possible_vals[12] = "1100";
	possible_vals[13] = "1101";
	possible_vals[14] = "1110";
	possible_vals[15] = "1111";


	int* loc_val = (int*) malloc(sizeof(int) * (var+1));
	for(; i < var; i++)
	{
		printf("Was ist das Ergebnis der Kombination von %s\n", possible_vals[i]);
	scanf("%d", &loc_val[i]);
	if(loc_val[i] != 0 && loc_val[i] != 1)
	{
		printf("Falsche Eingabe!\n");
		exit(1);
	}
	getchar();
	}

	return loc_val;
}





#endif
