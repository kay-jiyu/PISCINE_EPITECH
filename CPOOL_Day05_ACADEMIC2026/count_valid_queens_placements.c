#include <stdio.h>

// Cette fonction "cherche" les solutions en s'appelant elle-même (récursion)
void chercher_solutions(int n, int ligne, int *cols, int *diag_montante, int *diag_descendante, int *total)
{
    // Si la ligne est égale à n, on a réussi à placer toutes les reines !
    if (ligne == n) {
        (*total)++; // On ajoute 1 au compteur de succès
        return;
    }

    // On teste chaque colonne de la ligne actuelle
    for (int col = 0; col < n; col++) {
        
        // Calcul des "noms" des diagonales pour cette case
        int d_mont = ligne + col;
        int d_desc = ligne - col + (n - 1);

        // On vérifie si la colonne ou les diagonales sont déjà prises
        if (cols[col] == 0 && diag_montante[d_mont] == 0 && diag_descendante[d_desc] == 0) {
            
            // On POSE la reine : on marque tout à 1 (occupé)
            cols[col] = diag_montante[d_mont] = diag_descendante[d_desc] = 1;

            // On passe à la ligne SUIVANTE
            chercher_solutions(n, ligne + 1, cols, diag_montante, d_desc, total);

            // BACKTRACKING : On RETIRE la reine pour essayer une autre colonne
            // On remet tout à 0 (libre)
            cols[col] = diag_montante[d_mont] = diag_descendante[d_desc] = 0;
        }
    }
}

int count_valid_queens_placements(int n)
{
    if (n <= 0) return 0;
    
    int total_solutions = 0;
    
    // Tableaux pour surveiller ce qui est occupé
    int colonnes[32] = {0};
    int diag_mont[64] = {0};
    int diag_desc[64] = {0};

    // On lance la recherche à partir de la ligne 0
    chercher_solutions(n, 0, colonnes, diag_mont, diag_desc, &total_solutions);
    
    return total_solutions;
}