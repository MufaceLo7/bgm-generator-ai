// mood.cpp — part of bgm-generator-ai.

#include "bgmgeneratorai/mood.h"

#include <cstdio>

namespace bgmgeneratorai {

Mood::Mood(const std::string& config_path)
    : config_path_(config_path) {}

void Mood::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Mood::run() {
    if (verbose_) std::fprintf(stderr, "[bgm-generator-ai] mood: run\n");
    // core logic lives here
    return true;
}

}  // namespace bgmgeneratorai
