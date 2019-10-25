#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../include/demineur.h"

#define BLEU  "\x1B[36m" //bleu
#define JAUNE  "\x1B[33m" // jaune
#define ROUGE  "\x1B[31m" // rouge

#define RESET  "\x1B[0m"




bool MoveValide(int ligne, int col)
{

	return (ligne >= 0) && (ligne < 20) &&
		(col >= 0) && (col < 20);
}




bool CaseMine (int ligne, int col,scase board[20][20])
{
	if (board[ligne][col].val == 'X')
		return (true);
	else
		return (false);
}

/**
 * Fonction permettant d'afficher le tableau selon la valeurs des cases
 */
void print_tableau(scase tab[20][20]){
  for(int i = 0; i < 20;++i){
    for(int j = 0; j < 20;++j){
    if(tab[i][j].isHidden == 0){

      if(tab[i][j].val == '0' ){
        printf(" ");
      }

      if(tab[i][j].val == '1' || tab[i][j].val == '2' || tab[i][j].val == '3'){
        printf("%s%c%s ",BLEU, tab[i][j].val,RESET);
      }

      if(tab[i][j].val == '4'|| tab[i][j].val == '5'|| tab[i][j].val == '6'){
        printf("%s%c%s ",JAUNE, tab[i][j].val,RESET);
      }

      if(tab[i][j].val == '7' || tab[i][j].val == '8'){
        printf("%s%c%s ",ROUGE, tab[i][j].val,RESET);
      }


    }
  }
  printf("\n");

}
}

void main(){
    int r;
    scase tab[20][20];

    for(int a = 0;a<20;a++){
        for(int z = 0;z<20;z++){
            tab[a][z].val = '0';
            tab[a][z].isHidden = 0;
        }
    }

    print_tableau(tab);

}
