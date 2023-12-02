#ifndef CHAINLIST_H
	#define CHAINLIST_H

typedef struct Biblio Biblio 
struct Biblio
{
	char roman[50];
	char langue[50];
	int nombreDisponible;
	Biblio *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Biblio *premier;
};


