#ifndef STRUCTURES_H
#define STRUCTURES_H

#define TAILLE_ID_VEHICULE 16 //16 car multiple de 4 
#define ANNEE_DEBUT 2005 
#define NBR_ANNEES 20
#define AGE_MAX 120

//Format des données fournies
typedef struct{
    int id_accident;                      
    short annee;                           
    short annee_naissance;                 
    char id_vehicule[TAILLE_ID_VEHICULE];  
    char emplacement;                      
    char type_usager;                      
    char gravite;                          
    char genre;                           
    char trajet;                          
} LigneCSV;

//Represente les statistiques pour une année donnée 
typedef struct{
    int nbr_tot_accident;
    int nbr_indemnes;
    int nbr_tues;
    int nbr_blesses_graves;
    int nbr_blesses_legers;
} DonneesAnnee;

// Represente les statistiques pour un âge donne
typedef struct{
    int nbr_total;
    int nbr_indemnes;
    int nbr_tues;
    int nbr_blesses_graves;
    int nbr_blesses_legers;
} DonneesAge;

typedef struct Victime{
    struct Victime* suivant;
    short annee

} Victime;

#endif