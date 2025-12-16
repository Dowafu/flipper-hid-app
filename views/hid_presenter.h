#pragma once

#include <gui/view.h>

typedef struct Hid Hid;
typedef struct HidPresenter HidPresenter;

HidPresenter* hid_presenter_alloc(Hid* bt_hid);

void hid_presenter_free(HidPresenter* hid_presenter);

View* hid_presenter_get_view(HidPresenter* hid_presenter);

void hid_presenter_set_connected_status(HidPresenter* hid_presenter, bool connected);

void hid_presenter_set_orientation(HidPresenter* hid_presenter);
