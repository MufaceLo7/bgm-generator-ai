// events.cpp — part of bgm-generator-ai.

#include "bgmgeneratorai/events.h"

#include <cstdio>

namespace bgmgeneratorai {

Events::Events(const std::string& config_path)
    : config_path_(config_path) {}

void Events::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Events::run() {
    if (verbose_) std::fprintf(stderr, "[bgm-generator-ai] events: run\n");
    // core logic lives here
    return true;
}

}  // namespace bgmgeneratorai
