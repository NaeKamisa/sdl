# 1. Présentation
La SDL c’est-à-dire la Simple DirectMedia Layer est une bibliothèque multimédia. 
Elle permet un accès de bas-niveau à l’audio, au clavier, à la souris, 
au joystick, aux graphiques…
Cela veut dire qu’elle permet d’afficher des fenêtres, 
d’afficher des images, de jouer des sons, de gérer le clavier…

## 2.1 Installer SDL2
Sous Linux, la méthode la plus simple est d’utiliser son gestionnaire de paquet pour installer le paquet de développement de la SDL. 
Par exemple, sous Debian et ses dérivés, cette commande peut être utilisée.
``sudo apt-get insall libsdl2-dev``

## 2.2 Compiler du SDL 2
Une fois ceci fait, il nous faut juste modifier notre ligne de compilation pour indiquer que nous utilisons la SDL. Avec gcc par exemple, notre ligne pour compiler un fichier ressemblera à ça
```gcc main.c $(sdl2-config --cflags --libs)```

# 3. Première fenêtre
### La base
Voyons d’abord le code de base que nous devrons utiliser avec la SDL :
```
#include <SDL2/SDL.h>

int main(int argc, char *argv[])
{
    return 0;
}
```
### Initialisé la SDL
Pour être utilisée, la SDL doit d’abord être initialisée. Pour cela, nous devons utiliser la fonction SDL_Init. Cette fonction doit être utilisée avant toutes les autres fonctions de la SDL car elle charge tout ce dont les autres fonctions ont besoin pour fonctionner. Voici son prototype.






