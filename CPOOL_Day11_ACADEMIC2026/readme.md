🚀 C Pool Day 11 - Linked Lists 📚
> Objectif : Maîtriser les structures de données dynamiques et la manipulation de pointeurs complexes en C.
> 
🛠️ Pour démarrer
Toutes les fonctions utilisent la structure définie dans mylist.h :
typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;

📋 Sommaire des Tasks
| Task | Fonction | Description | Sticker |
|---|---|---|---|
| 01 | my_params_to_list | Créer une liste à partir de av | 🧬 |
| 02 | my_list_size | Compter le nombre de maillons | 🔢 |
| 03 | my_rev_list | Inverser l'ordre de la liste | 🔄 |
| 04 | my_apply_on_nodes | Appliquer une fonction partout | ⚡ |
| 05 | my_apply_on_matching_nodes | Appliquer si ça match | 🎯 |
| 06 | my_find_node | Chercher un maillon précis | 🔍 |
| 07 | my_delete_nodes | Supprimer des maillons | 🗑️ |
| 08 | my_concat_list | Fusionner deux listes | 🔗 |
| 09 | my_add_in_sorted_list | Insertion triée | 📈 |
| 10 | my_sort_list | Tri à bulles de la liste | 🧹 |
💡 Concepts Clés
🏗️ Structure Dynamique
Contrairement aux tableaux, la liste chaînée permet d'ajouter des éléments à l'infini sans réallouer tout le bloc mémoire.
 * Avantage : Insertion en O(1) au début.
 * Inconvénient : Accès à l'élément n en O(n).
🔗 Le Double Pointeur (**)
Utilisé dans les Tasks 03, 07, 08, 09 et 10. Il est indispensable pour modifier l'adresse du premier maillon directement dans la mémoire du main.
🔀 Pointeurs sur Fonctions
Utilisés pour rendre le code générique. On passe une "action" (comme cmp ou f) en paramètre pour que la liste puisse traiter n'importe quel type de donnée (void *).
⚠️ Pièges à éviter
 * Segmentation Fault : Toujours vérifier si actu ou actu->next est NULL avant d'y accéder.
 * Memory Leaks : Ne pas oublier de libérer la mémoire si nécessaire (bien que non demandé explicitement dans toutes les tasks).
 * Perte de Maillon : Toujours sauvegarder l'adresse de next avant de modifier un lien (surtout pour l'inversion ou la suppression).
