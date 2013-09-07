#include <gtk/gtk.h>

int main (int argc, char **argv){
	
	/* 国際化(日本語対応のため) */
	gtk_set_locale();
	/* GTK+ の初期化 */
	gtk_init(&argc, &argv);
	
	/* メインウィンドウの作成 */
	GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_widget_set_size_request (window, 300,200);
	
	/* 「ウィンドウを閉じる」コールバック */
	g_signal_connect(window, "delete-event", G_CALLBACK(gtk_main_quit), NULL);
	
	/* ウィジェットの表示 */
	gtk_widget_show_all(window);
	/* コールバックの受付開始 */
	gtk_main();
return 0;
}

