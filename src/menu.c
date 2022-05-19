#include "menu.h"
#include <stdio.h>
#include <gtk/gtk.h>
void setToolbar(GtkWidget *win)
{
  GtkWidget *vbox;
  GtkWidget *menubar;
  GtkWidget *fileMenu;

  GtkWidget *fileMenuItem;
  GtkWidget *quitMenuItem;
  GtkWidget *openfileMenuItem;

  vbox = gtk_vbox_new(FALSE, 0);
  gtk_container_add(GTK_CONTAINER(win), vbox);

  menubar = gtk_menu_bar_new();
  fileMenu = gtk_menu_new();

  fileMenuItem = gtk_menu_item_new_with_label("File");
  openfileMenuItem = gtk_menu_item_new_with_label("Open file");
  quitMenuItem = gtk_menu_item_new_with_label("Quit");


  gtk_menu_item_set_submenu(GTK_MENU_ITEM(fileMenuItem), fileMenu);

  gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu), openfileMenuItem);
  gtk_menu_shell_append(GTK_MENU_SHELL(fileMenu), quitMenuItem);

  gtk_menu_shell_append(GTK_MENU_SHELL(menubar), fileMenuItem);


  gtk_box_pack_start(GTK_BOX(vbox), menubar, FALSE, FALSE, 0);

  g_signal_connect(G_OBJECT(quitMenuItem), "activate",
    G_CALLBACK(gtk_main_quit), NULL);

  //g_signal_connect(G_OBJECT(openfileMenuItem), "activate",
    //G_CALLBACK(openFile), NULL);

  void openFile(GtkWidget *widget, gpointer data) {
    //DebugLog();
}

}
