// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen3_screen_init(void)
{
ui_Screen3 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen3, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image6 = lv_img_create(ui_Screen3);
lv_img_set_src(ui_Image6, &ui_img_537354039);
lv_obj_set_width( ui_Image6, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image6, LV_SIZE_CONTENT);   /// 272
lv_obj_set_align( ui_Image6, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image6, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image6, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image8 = lv_img_create(ui_Screen3);
lv_img_set_src(ui_Image8, &ui_img_1658026312);
lv_obj_set_width( ui_Image8, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image8, LV_SIZE_CONTENT);   /// 272
lv_obj_set_x( ui_Image8, 2 );
lv_obj_set_y( ui_Image8, 15 );
lv_obj_set_align( ui_Image8, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image8, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image8, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image10 = lv_img_create(ui_Screen3);
lv_img_set_src(ui_Image10, &ui_img_537381466);
lv_obj_set_width( ui_Image10, LV_SIZE_CONTENT);  /// 480
lv_obj_set_height( ui_Image10, LV_SIZE_CONTENT);   /// 272
lv_obj_set_x( ui_Image10, 0 );
lv_obj_set_y( ui_Image10, 90 );
lv_obj_set_align( ui_Image10, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_Image10, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image10, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Label28 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label28, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label28, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label28, -74 );
lv_obj_set_y( ui_Label28, -100 );
lv_obj_set_align( ui_Label28, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label28,"RICE BOX A");
lv_obj_set_style_text_color(ui_Label28, lv_color_hex(0x185539), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label28, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label28, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_Label28, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Label28, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Label28, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Label28, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Arc3 = lv_arc_create(ui_Screen3);
lv_obj_set_width( ui_Arc3, lv_pct(20));
lv_obj_set_height( ui_Arc3, lv_pct(17));
lv_obj_set_x( ui_Arc3, 10 );
lv_obj_set_y( ui_Arc3, -10 );
lv_obj_set_align( ui_Arc3, LV_ALIGN_CENTER );
lv_arc_set_rotation(ui_Arc3,90);
lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x94DACD), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Arc3, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_rounded(ui_Arc3, true, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x104839), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Arc3, 8, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_rounded(ui_Arc3, false, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Arc3, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Arc3, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Arc3, lv_color_hex(0x447F65), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_main_stop(ui_Arc3, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_stop(ui_Arc3, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui_Arc3, LV_GRAD_DIR_HOR, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_clip_corner(ui_Arc3, true, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Arc3, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_Arc3, LV_BORDER_SIDE_TOP, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Arc4 = lv_arc_create(ui_Screen3);
lv_obj_set_width( ui_Arc4, lv_pct(10));
lv_obj_set_height( ui_Arc4, lv_pct(22));
lv_obj_set_x( ui_Arc4, -14 );
lv_obj_set_y( ui_Arc4, 78 );
lv_obj_set_align( ui_Arc4, LV_ALIGN_CENTER );
lv_arc_set_rotation(ui_Arc4,90);
lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x94DACD), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Arc4, 7, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_arc_rounded(ui_Arc4, true, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x104839), LV_PART_INDICATOR | LV_STATE_DEFAULT );
lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_width(ui_Arc4, 8, LV_PART_INDICATOR| LV_STATE_DEFAULT);
lv_obj_set_style_arc_rounded(ui_Arc4, false, LV_PART_INDICATOR| LV_STATE_DEFAULT);

lv_obj_set_style_radius(ui_Arc4, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Arc4, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Arc4, lv_color_hex(0x447F65), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_main_stop(ui_Arc4, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_stop(ui_Arc4, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_dir(ui_Arc4, LV_GRAD_DIR_HOR, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_clip_corner(ui_Arc4, true, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_width(ui_Arc4, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_border_side(ui_Arc4, LV_BORDER_SIDE_TOP, LV_PART_KNOB| LV_STATE_DEFAULT);

ui_Panel2 = lv_obj_create(ui_Screen3);
lv_obj_set_width( ui_Panel2, 75);
lv_obj_set_height( ui_Panel2, 25);
lv_obj_set_x( ui_Panel2, 122 );
lv_obj_set_y( ui_Panel2, 103 );
lv_obj_set_align( ui_Panel2, LV_ALIGN_CENTER );
lv_obj_clear_flag( ui_Panel2, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x4A898B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Panel2, lv_color_hex(0x458383), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_Panel2, LV_GRAD_DIR_HOR, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Panel2, lv_color_hex(0x418183), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Panel2, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label29 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label29, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label29, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label29, -26 );
lv_obj_set_y( ui_Label29, -9 );
lv_obj_set_align( ui_Label29, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label29,"05%");
lv_obj_set_style_text_color(ui_Label29, lv_color_hex(0xFBFBFB), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label29, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label29, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label30 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label30, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label30, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label30, -26 );
lv_obj_set_y( ui_Label30, 73 );
lv_obj_set_align( ui_Label30, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label30,"50%");
lv_obj_set_style_text_color(ui_Label30, lv_color_hex(0xFBFBFB), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label30, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label30, &lv_font_montserrat_16, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label31 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label31, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label31, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label31, 124 );
lv_obj_set_y( ui_Label31, 103 );
lv_obj_set_align( ui_Label31, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label31,"BACK");
lv_obj_set_style_text_color(ui_Label31, lv_color_hex(0x020000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Label31, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Label31, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label32 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label32, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label32, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label32, -87 );
lv_obj_set_y( ui_Label32, -19 );
lv_obj_set_align( ui_Label32, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label32,"CM");

ui_Label33 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label33, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label33, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label33, -105 );
lv_obj_set_y( ui_Label33, 6 );
lv_obj_set_align( ui_Label33, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label33,"(below soil)");
lv_obj_set_style_text_font(ui_Label33, &lv_font_montserrat_12, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Label34 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label34, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label34, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label34, -112 );
lv_obj_set_y( ui_Label34, 39 );
lv_obj_set_align( ui_Label34, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label34,"Pump");

ui_Label35 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label35, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label35, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label35, -18 );
lv_obj_set_y( ui_Label35, 39 );
lv_obj_set_align( ui_Label35, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label35,"Battery");

ui_Label36 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label36, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label36, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label36, -107 );
lv_obj_set_y( ui_Label36, -45 );
lv_obj_set_align( ui_Label36, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label36,"Water Level");

ui_Label37 = lv_label_create(ui_Screen3);
lv_obj_set_width( ui_Label37, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_Label37, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Label37, -10 );
lv_obj_set_y( ui_Label37, -45 );
lv_obj_set_align( ui_Label37, LV_ALIGN_CENTER );
lv_label_set_text(ui_Label37,"Soil Moist");

lv_obj_add_event_cb(ui_Panel2, ui_event_Panel2, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Label31, ui_event_Label31, LV_EVENT_ALL, NULL);

}
