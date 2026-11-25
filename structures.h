#ifndef STRUCTURES_H
#define STRUCTURES_H

#define TAILLE_ID_VEHICULE 16 //16 car multiple de 4 

//Format des données fournies
typedef struct {
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




#endif