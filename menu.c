#include "menu.h"
#include <stdio.h>
#include <gtk/gtk.h>
void setMenu(GtkWidget *win)
{
    GtkWidget *menubar;
    GtkWidget *fileMenu;
    GtkWidget *fileMi;
    GtkWidget *quitMi;

    GtkWidget *vbox = NULL;
    vbox = gtk_vbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(win), vbox);

    menubar = gtk_menu_bar_new();
    fileMenu = gtk_menu_new();

    fileMi = gtk_menu_item_new_with_label("File");
    quitMi = gtk_menu_item_new_with_label("Quit");

    gtk_menu_item_set_submenu(GTK_MENU_ITEM(fileMi), fileMenu);
    gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu), quitMi);
    gtk_menu_shell_append(GTK_MENU_SHELL(menubar), fileMi);
    gtk_box_pack_start(GTK_BOX(vbox), menubar, FALSE, FALSE, 0);

    g_signal_connect(G_OBJECT(win), "destroy",
        G_CALLBACK(gtk_main_quit), NULL);

    g_signal_connect(G_OBJECT(quitMi), "activate",
        G_CALLBACK(gtk_main_quit), NULL);

}
