#include <iostream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wvariadic-macros"
#include <Elementary.h>
#pragma GCC diagnostic pop


#include "header.hpp"

Evas_Object *win = NULL;
Evas_Object *layout = NULL;

int elm_main(int argc EINA_UNUSED, char **argv EINA_UNUSED)
{
    win = elm_win_util_standard_add("win-example", "Elm_Win Example");
    elm_win_focus_highlight_enabled_set(win, EINA_TRUE);
    evas_object_resize(win, 400, 400);
    evas_object_show(win);

    layout = elm_layout_add(win);
    elm_layout_file_set(layout, "res/edc/main.edj", "my_layout");
    evas_object_resize(layout, 400, 400);
    evas_object_move(layout, 0, 0);
    evas_object_show(layout);

    elm_win_autodel_set(win, EINA_TRUE);
    elm_run();
    return 0;
}
ELM_MAIN()
