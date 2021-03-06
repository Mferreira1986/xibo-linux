#pragma once

#include "networking/RequiredItems.hpp"

class MediaInventoryItem
{
public:
    MediaInventoryItem(const RegularFile& file, bool downloadComplete);
    MediaInventoryItem(const ResourceFile& file, bool downloadComplete);

    const std::string& type() const;
    int id() const;
    bool downloadComplete() const;
    const std::string& md5() const;
    const std::string& lastChecked() const;

private:
    MediaInventoryItem(bool downloadComplete);

    std::string type_;
    int id_;
    bool downloadComplete_;
    std::string md5_;
    std::string lastChecked_;
};

using MediaInventoryItems = std::vector<MediaInventoryItem>;
