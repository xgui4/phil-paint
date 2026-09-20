// SPDX-License-Identifier: GPL-3.0-or-later

#include "app/application.hpp"

#include <glib.h>

int main(int argc, char* argv[]) {
  g_set_prgname("lunduke-paint");
  g_set_application_name("Phil  Paint");
  if (g_getenv("GDK_BACKEND") == nullptr) {
    g_setenv("GDK_BACKEND", "wayland", FALSE);
  }

  auto app = lundukepaint::Application::create();
  return app->run(argc, argv);
}
