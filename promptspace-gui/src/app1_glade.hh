// generated 2000/1/6 21:43:29 EET by exa@orion.(none)
// using glademm V0.5.5
//
// DO NOT EDIT THIS FILE ! It was created using
// glade-- /home/exa/devel/promptspace/promptspace-gui/promptspace-gui.glade
// for gtk 1.2.6 and gtkmm 1.0.3
//
// Please modify the corresponding derived classes in src/app1.hh andsrc/app1.cc

#ifndef _APP1_GLADE_HH
#  define _APP1_GLADE_HH

#include <gnome--/app.h>
#include <gtk--/tooltips.h>
#include <gnomeui/gtkpixmapmenuitem.h>
#include <gtk--/list.h>
#include <gtk--/menu.h>
#include <gtk--/menubar.h>
#include <gtk--/toolbar.h>
#include <gtk--/box.h>

class App1_Glade : public Gnome_App
{   
        
        Gtk_Tooltips _tooltips;
        Gtk_MenuItem new_file1;
        GtkPixmapMenuItem *new_file1_gtkpmmi;
        Gtk_MenuItem open1;
        GtkPixmapMenuItem *open1_gtkpmmi;
        Gtk_MenuItem save1;
        GtkPixmapMenuItem *save1_gtkpmmi;
        Gtk_MenuItem save_as1;
        GtkPixmapMenuItem *save_as1_gtkpmmi;
        Gtk_MenuItem separator1;
        Gtk_MenuItem exit1;
        GtkPixmapMenuItem *exit1_gtkpmmi;
        Gtk_Menu file1_menu;
        Gtk_MenuItem file1;
        Gtk_MenuItem cut1;
        GtkPixmapMenuItem *cut1_gtkpmmi;
        Gtk_MenuItem copy1;
        GtkPixmapMenuItem *copy1_gtkpmmi;
        Gtk_MenuItem paste1;
        GtkPixmapMenuItem *paste1_gtkpmmi;
        Gtk_MenuItem clear1;
        GtkPixmapMenuItem *clear1_gtkpmmi;
        Gtk_MenuItem separator2;
        Gtk_MenuItem properties1;
        GtkPixmapMenuItem *properties1_gtkpmmi;
        Gtk_Menu edit1_menu;
        Gtk_MenuItem edit1;
        Gtk_Menu view1_menu;
        Gtk_MenuItem view1;
        Gtk_MenuItem preferences1;
        GtkPixmapMenuItem *preferences1_gtkpmmi;
        Gtk_Menu settings1_menu;
        Gtk_MenuItem settings1;
        Gtk_MenuItem about1;
        GtkPixmapMenuItem *about1_gtkpmmi;
        Gtk_Menu help1_menu;
        Gtk_MenuItem help1;
        Gtk_MenuBar menubar1;
        Gtk_Toolbar *toolbar1;
        Gtk_Button *button1;
        Gtk_Button *button2;
        Gtk_Button *button3;
        Gtk_HBox hbox1;
protected:
        
        App1_Glade();
        
        ~App1_Glade();
};
#endif
