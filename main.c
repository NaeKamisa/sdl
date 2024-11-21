#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    SDL_Window *window = NULL;
    SDL_Renderer* renderer = NULL;
    int statut = EXIT_FAILURE;
    int index = -1;

        /* RECUPERATION DE L'ERREUR DE L'INITIALISATION DE L'AFFICHAGE VIDEO*/
    if (0 != SDL_Init(SDL_INIT_VIDEO)){
        fprintf(stderr,"erreur SDL_Init : %s",SDL_GetError());
        goto Quit;
    

        return EXIT_FAILURE;
    }
        /*Definition/création de la fenêtre (nom, pos,pos, cord,cord, display)*/
    window = SDL_CreateWindow("TEST", SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, 640,480,SDL_WINDOW_SHOWN);
        /*RECUPERATION DE L'ERREUR DE LA CREATION DE LA FENÊTRE*/

    if(NULL == window){
        fprintf(stderr,"Erreur SDL_CreateWindow :%s",SDL_GetError());
        goto Quit;
    }

    renderer = SDL_CreateRenderer(window, -1 , SDL_RENDERER_ACCELERATED);
        /*RECUPERATION DE L'ERREUR DE LA CREATION DU RENDU*/

    // if(renderer == NULL){
    //     fprintf(stderr,"erreur de rendu : %s",SDL_GetError());
    //     goto Quit;
    // }


        /*QUITTE LA FENETRE*/
    statut = EXIT_SUCCESS;
    SDL_Delay(3000);

    Quit:
        // if (renderer !=NULL);
        // {
        //     SDL_DestroyRenderer(renderer);
        // }
        if (window != NULL);
        {
            SDL_DestroyWindow(window);
        }
        

    SDL_Quit();
    return statut;
}