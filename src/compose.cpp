// compose.cpp — part of bgm-generator-ai.

#include "bgmgeneratorai/compose.h"

#include <cstdio>

namespace bgmgeneratorai {

Compose::Compose(const std::string& config_path)
    : config_path_(config_path) {}

void Compose::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Compose::run() {
    if (verbose_) std::fprintf(stderr, "[bgm-generator-ai] compose: run\n");
    // core logic lives here
    return true;
}

}  // namespace bgmgeneratorai
