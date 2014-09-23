#include <stdlib.h>
#include <stdio.h>
#include "values.h"
#include "find.h"
int abfrage()
{
	int local_var;
	printf("Wie viele Eingangsvariablen existieren ? (Maximum 4) \n");
	scanf("%d", &local_var);
	if(local_var <= 0 || local_var > 4)
	{
		printf("Die Variablen muss kleiner gleich 4 oder größer als 0 sein!\n");
		local_var = abfrage();
	}
	
	return local_var;
}


void indexes(int start,int* loc_index)
{
	
	loc_index[0] = start;
	loc_index[1] = start+1;
	loc_index[2] = start+5;
	loc_index[3] = start+4;

}
int main()
{
	int var;
	int index[4];
	int gr = 1;
	int i = 0;
	int* val;

	var = abfrage();

	for(;i< var; i++)
	{
		gr = gr*2;
	}

	printf("Es existieren %d Eingangsmöglichkeiten", gr);
	
	val = (int*) malloc(sizeof(int) * (gr+ 1));

	val = values(gr);

	//Print-> pro zeile könnte man es in eine funktion schreiben....
	printf("Das KV-Diagramm \n");
	switch(gr)
	{
		printf("\n");
  		case(2): 
			for(i=0; i <=1; i++)
			{
				printf("%d\t", val[i]);
			}
		case(4):
			for(i=0; i <= 1; i++)
			{
				printf("%d\t", val[i]);
			}	
			printf("\n");
			for(i=0; i <= 1; i++)
			{
				printf("%d\t",val[i+2]);
			}
			 break;
		case(8): 
			indexes(0,index);
			for(i=0; i <= 3; i++)
			{
				printf("%d\t", val[index[i]]);
			} 
			printf("\n");
			indexes(2,index);
			for(i=0; i <=3;i++)
			{
				printf("%d\t", val[index[i]]);
			}
			
			break;
		case(16): 
			
			indexes(0,index);
                        for(i=0; i <= 3; i++)
                        {
                                printf("%d\t", val[index[i]]);
                        }
                        printf("\n");
                        indexes(2,index);
                        for(i=0; i <=3;i++)
                        {
                                printf("%d\t", val[index[i]]);
                        }
			printf("\n");
			indexes(10,index); //ACHTUNG DEZIMAL ANSTATT OCTAL!
			for(i=0; i <=3 ; i++)
			{
				printf("%d\t", val[index[i]]);
			}
			printf("\n");
			indexes(8,index); //ACHTUNG DEZIMAL ANSTATT OCTAL!
			for(i=0; i <= 3; i++)
			{
				printf("%d\t", val[index[i]]);	
			}

		        break;
			default: printf("Keine Potenz von hoch 2 möglich in der Aufteilung !\n");
				exit(1);
	}

	int checker;

	checker = check_all(val, gr);

	switch(checker)
	{
		case(0): printf("alles Nuller...\n"); break;
		case(1): printf("alles einser ...\n"); break;
		case(-1): printf("bisschen durschmischt alles ...\n");break; 

	}
	
	free(val);
	return 1;



}
