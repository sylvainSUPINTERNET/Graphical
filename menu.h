//
// Created by JOLY Sylvain on 28/05/2018.
//


#include <jmorecfg.h>
#include <stdbool.h>

static char*WELCOM = "Welcom on my mini WoW";


static char*MENU_LAYOUT = " -> start (1) \n -> end (2) \n -> Store (3)";
char* item_selected(int itemSelected){
   switch (itemSelected)
   {
       case 1:
           printf("\n Let's begin ! ");
           break;
       case 2:
           printf("\n See you !");
           break;
       case 3:
           printf("\n Here, you can buy new equipements and stuff !");
           break;
       default:
           printf("\n Pleace choose something to do . . .");

   }

};
