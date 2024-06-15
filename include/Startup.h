// Copyright (c) 2019-present Anonymous275.
// BeamMP Launcher code is not in the public domain and is not free software.
// One must be granted explicit permission by the copyright holder in order to modify or distribute any part of the source or binaries.
// Anything else is prohibited. Modified works may not be published and have be upstreamed to the official repository.
///
/// Created by Anonymous275 on 7/18/2020
///
#pragma once
#include <string>
#include <compare>
#include <vector>

void InitLauncher(int argc, char* argv[]);
std::string GetEP(char*P = nullptr);
std::string GetGamePath();
std::string GetVer();
std::string GetEN();
void StartProxy();
void ConfigInit();
extern bool Dev;

struct VersionParser {
    explicit VersionParser(const std::string& from_string);
    std::strong_ordering operator<=>(VersionParser const& rhs) const noexcept;
    bool operator==(VersionParser const& rhs) const noexcept;
    std::vector<std::string> split;
    std::vector<size_t> data;
};
