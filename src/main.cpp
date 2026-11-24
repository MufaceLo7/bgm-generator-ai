// main.cpp — entry point. Wires config and subsystems together.

#include "bgmgeneratorai/settings.h"
#include "bgmgeneratorai/compose.h"
#include "bgmgeneratorai/mood.h"
#include "bgmgeneratorai/render.h"
#include "bgmgeneratorai/cli.h"
#include "bgmgeneratorai/events.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    bgmgeneratorai::Settings settings = bgmgeneratorai::Settings::load_default();
    bgmgeneratorai::Compose compose(settings.store_path);
    bgmgeneratorai::Mood mood(settings.store_path);
    bgmgeneratorai::Render render(settings.store_path);
    bgmgeneratorai::Cli cli(settings.store_path);
    bgmgeneratorai::Events events(settings.store_path);
    std::fprintf(stderr, "[bgm-generator-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
