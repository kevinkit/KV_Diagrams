#ifndef FIND_H
#define FIND_H

//DO NOT CHANGE OR THE PROGRAM WILL NOT WORK ANY FURTHER !
int acht_bt[8];
acht_bt[0] = 0;
acht_bt[1] = 1;
acht_bt[2] = 5;
acht_bt[3] = 4;
acht_bt[4] = 8;
acht_bt[5] = 9;
acht_bt[6] = 13;
acht_bt[7] = 12;
int acht_b[8];
ach_b[0] = 8;
ach_b[1] = 9;
ach_b[2] = 13;
ach_b[3] = 12;
ach_b[4] = 10;
ach_b[5] = 11;
ach_b[6] = 15;
ach_b[7] = 14;
int acht_midh[8];
acht_midh[0] = 2;
acht_midh[1] = 3;
acht_midh[2] = 7;
acht_midh[3] = 6;
acht_midh[4] = 10;
acht_midh[5] = 12;
acht_midh[6] = 15;
acht_midh[7] = 14;
int acht_t[8];
acht_t[0] = 0;
acht_t[1] = 1;
acht_t[2] = 5;
acht_t[3] = 4;
acht_t[4] = 2;
acht_t[5] = 3;
acht_t[6] = 7;
acht_t[7] = 6;
int acht_lr[8];
acht_lr[0] = 0;
acht_lr[1] = 2;
acht_lr[2] = 10;
acht_lr[3] = 8;
acht_lr[4] = 4;
acht_lr[5] = 6;
acht_lr[6] = 14;
acht_lr[7] = 12;
int acht_l[8];
acht_l[0] = 0;
acht_l[1] = 2;
acht_l[2] = 10;
acht_l[3] = 8;
acht_l[4] = 1;
acht_l[5] = 3;
acht_l[6] = 11;
acht_l[7] = 9;
int acht_midv[8];
acht_midv[0] = 1;
acht_midv[1] = 3;
acht_midv[2] = 11;
acht_midv[3] = 9;
acht_midv[4] = 5;
acht_midv[5] = 7;
acht_midv[6] = 15;
acht_midv[7] = 13;
int acht_r[8];
acht_r[0] = 5;
acht_r[1] = 7;
acht_r[2] = 15;
acht_r[3] = 13;
acht_r[4] = 4;
acht_r[5] = 6;
acht_r[6] = 14;
acht_r[7] = 12;































//Prüft nach ob alles Einser oder Nuller sind
//Gibt 1 zurück wenn alles Einser sind
//Gibt 0 zurück wenn alles Nuller sind
//gibt -1 zurück wenn nicht alles Nuller oder nicht alles Einser sind
int check_all(int* val, int anz)
{
	int i=0;
	for(;i < anz;i++)
	{
		if(val[i] != 0)
		{
			break;
		}

	}
	if(i == anz)
	{
		return 0;
	}
	for(i=0; i < anz; i++)
	{
		if(val[i] != 1)
		{
			break;
		}
	}
	if(i == anz)
	{
		return 1;
	}
	
	return -1;
}

//Checkt nach ob evlt. nur eine Zahl alleine steht
//Checkwhat gibt die zu testende zahl an (normalerweise ja nur 0 und 1)
//gibt den platz (ACHTUNG DEZIMAL) zurück wo die einzelne zahl gefundne wuerde
//gibt -1 zurück wenn auf 1er geprüft wurde und keine gefunden wurde
//gibt -2 zurück wenn auf 0er geprüft wurde und keine gefunden wurde
//gibt -3 zurück wenn auf eine beliebeige zahl außer 0 und 1 geprüft wurde und diese nicht gefunden wurde
int check_single(int* val, int anz, int checkwhat)
{
	int i = 0;
	int iterator = 0;
	int place = 0;
	
	for(;i < anz; i++)
	{
		if(val[i] == checkwhat)
		{
			iterator++;
			place = i;
		}
	}

	if(iterator == 1)
	{
		return place;
	}
	else
	{
		if(checkwhat == 1)
		{
			return -1;
		}
		if(checkwhat == 0)
		{
			return -2;
		}	
	}
	
	return -3;
}

int* check_pairs(int* val, int anz, int checkwhat)
{

	int i = 0;
	int iterator = 0;
	int* pairs = (int*) malloc(sizeof(int) * (an+1));

	for(; i < anz-1; i++)
	{
		if(val[i] = val[i+1])
		{
			pairs[iterator] = i;			
			iterator++;
		}	
	}

	switch(gr)
	{
		case(8): 
			if(val[0] == val[4])
			{
				pairs[iterator] = 40;
				iterator++;
			}
			if(val[2] == val[6])
			{
				pairs[iteraotr] = 26;
				iterator++;
			}

			break;
		case(16):
			               if(val[0] == val[4])
                        {
                                pairs[iterator] = 40;
                                iterator++;
                        }
                        if(val[2] == val[6])
                        {
                                pairs[iteraotr] = 26;
                                iterator++;
                        }
			break;


	}
	return pairs;
}

//geigneten Rückgabeparamter definieren?
void find_blocks(int* val, int* flags,int* index, int anz, int checkwhat,int check_gr)
{
	if(anz < 16)
	{
		return NULL;
	}
	


	for(;i < anz; i++)
	{
		//Nachschauen ob eine Flag noch nicht gesetzt wurde
		if(flags[i] != 1)
		{
			//Nachschauen ob die Kombination möglich ist
			for(x=0; x < check_gr; x++)
			{
				if(val[first_index[x]] != checkwhat)
				{
					break;
				}
			}
		}
	}

	//Nachschauen ob die KOmbination möglich war
	if(x == check_gr)
	{
		//Wenn ja Flags setzen
		for(i=0; i < check_gr; i++)
		{
			flags[first_index[i]] = 1;
		}

	}


}





#endif
