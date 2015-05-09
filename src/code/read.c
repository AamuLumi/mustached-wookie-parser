#include <stdio.h>

// Je suis un simple commentaire
int myFunction(int c)
{
	if (c == 2)
		return 32;
	else
		return 20;
}

/* Coucou, je suis
 * un commentaire sur
 plusieurs
 lignes*/
int main(int argc, char* argv){

	int c = 2;
	
	myFunction(c);

	return 0;
}