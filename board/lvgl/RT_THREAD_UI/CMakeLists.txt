SET(SOURCES components/ui_comp_label1.c
    components/ui_comp.c
    screens/ui_Screen1.c
    screens/ui_Screen2.c
    screens/ui_Screen3.c
    screens/ui_Screen5.c
    screens/ui_Screen4.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_1658053739.c
    images/ui_img_270506670.c
    images/ui_img_537354039.c
    images/ui_img_1658026312.c
    images/ui_img_537381466.c)

add_library(ui ${SOURCES})
