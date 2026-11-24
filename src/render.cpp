// render.cpp — part of bgm-generator-ai.

#include "bgmgeneratorai/render.h"

#include <cstdio>

namespace bgmgeneratorai {

Render::Render(const std::string& config_path)
    : config_path_(config_path) {}

void Render::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Render::run() {
    if (verbose_) std::fprintf(stderr, "[bgm-generator-ai] render: run\n");
    // core logic lives here
    return true;
}

}  // namespace bgmgeneratorai
