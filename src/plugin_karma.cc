// -*- C++ -*-
// Copyright 2013, Evan Klitzke <evan@eklitzke.org>

#include "./plugin_karma.h"
#include "./protobuf/ovanbot.pb.h"

#include <fstream>
#include <sstream>
#include <re2/re2.h>

namespace {
re2::RE2 dec_karma_re("^(.*)--\\s*$");
re2::RE2 inc_karma_re("^(.*)\\+\\+\\s*$");
}

namespace ovanbot {
void KarmaPlugin::HandlePrivmsg(const std::string &user,
                                const std::string &channel,
                                const std::string &msg) {
  if (channel.empty() || !channel.front() == '#') {
    // don't count private messages
    return;
  } else if (msg == "!karma") {
    for (const auto &kv : karma_) {
      std::stringstream ss;
      ss << kv.first << ": " << kv.second;
      robot_->SendPrivmsg(channel, ss.str());
    }
    return;
  }

  std::string target;
  if (RE2::FullMatch(msg, inc_karma_re, &target)) {
    auto it = karma_.lower_bound(target);
    if (it == karma_.end() || it->first != target) {
      karma_.insert(it, std::make_pair(target, 1));
    } else {
      it->second++;
    }
  } else if (RE2::FullMatch(msg, dec_karma_re, &target)) {
    auto it = karma_.lower_bound(target);
    if (it == karma_.end() || it->first != target) {
      karma_.insert(it, std::make_pair(target, -1));
    } else {
      it->second--;
    }
  }
}

KarmaPlugin::~KarmaPlugin() {
  KarmaMap karma_map;
  for (const auto &pair : karma_) {
    KarmaMap::Karma *karma = karma_map.add_karma_list();
    karma->set_entity(pair.first);
    karma->set_karma(pair.second);
  }
  std::ofstream out(KarmaPath());
  karma_map.SerializeToOstream(&out);
}
}
