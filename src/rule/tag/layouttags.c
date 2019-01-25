#include "./sectioningtags.c"

static nh_set_str_t hb_rule_layouttags_set;

void hb_rule_layouttags_add_elems(nh_set_str_t set) {
  hb_rule_sectioningtags_add_elems(set);
  nh_set_str_add(set, "blockquote");
  nh_set_str_add(set, "body");
  nh_set_str_add(set, "colgroup");
  nh_set_str_add(set, "datalist");
  nh_set_str_add(set, "dialog");
  nh_set_str_add(set, "div");
  nh_set_str_add(set, "dl");
  nh_set_str_add(set, "fieldset");
  nh_set_str_add(set, "figure");
  nh_set_str_add(set, "footer");
  nh_set_str_add(set, "form");
  nh_set_str_add(set, "head");
  nh_set_str_add(set, "header");
  nh_set_str_add(set, "hgroup");
  nh_set_str_add(set, "html");
  nh_set_str_add(set, "main");
  nh_set_str_add(set, "map");
  nh_set_str_add(set, "menu");
  nh_set_str_add(set, "nav");
  nh_set_str_add(set, "ol");
  nh_set_str_add(set, "optgroup");
  nh_set_str_add(set, "picture");
  nh_set_str_add(set, "section");
  nh_set_str_add(set, "select");
  nh_set_str_add(set, "table");
  nh_set_str_add(set, "tbody");
  nh_set_str_add(set, "tfoot");
  nh_set_str_add(set, "thead");
  nh_set_str_add(set, "tr");
  nh_set_str_add(set, "ul");
}

void hb_rule_layouttags_init(void) {
  hb_rule_layouttags_set = nh_set_str_create();
  hb_rule_layouttags_add_elems(hb_rule_layouttags_set);
}

int hb_rule_layouttags_check(hb_proc_char_t *tag) {
  return nh_set_str_has(hb_rule_layouttags_set, (char *) tag);
}
