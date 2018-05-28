#include <stdio.h>
#include <GLUT/glut.h>

// menu
#include "menu.h"

// other
#include "utils.h"


int main(int argc, char *argv[]) {
    int itemSelected;

    printf("%s \n", WELCOM);
    printf("%s \n", MENU_LAYOUT);

    itemSelected = getchar();
    printf("%s",item_selected(itemSelected));




    return 0;
}