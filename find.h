#ifndef FIND_H
#define FIND_H


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








#endif
