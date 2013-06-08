// -*- C++ -*-
// Copyright 2013, Evan Klitzke <evan@eklitzke.org>

#include "./protocol.h"

namespace ovanbot {
ResponseCode ParseResponseCode(std::uint16_t code) {
  ResponseCode ret = ResponseCode::RPL_UNKNOWN;
  switch(code) {
    case 1:
      ret = ResponseCode::RPL_WELCOME;
      break;
    case 2:
      ret = ResponseCode::RPL_YOURHOST;
      break;
    case 3:
      ret = ResponseCode::RPL_CREATED;
      break;
    case 4:
      ret = ResponseCode::RPL_MYINFO;
      break;
    case 5:
      ret = ResponseCode::RPL_BOUNCE;
      break;
    case 200:
      ret = ResponseCode::RPL_TRACELINK;
      break;
    case 201:
      ret = ResponseCode::RPL_TRACECONNECTING;
      break;
    case 202:
      ret = ResponseCode::RPL_TRACEHANDSHAKE;
      break;
    case 203:
      ret = ResponseCode::RPL_TRACEUNKNOWN;
      break;
    case 204:
      ret = ResponseCode::RPL_TRACEOPERATOR;
      break;
    case 205:
      ret = ResponseCode::RPL_TRACEUSER;
      break;
    case 206:
      ret = ResponseCode::RPL_TRACESERVER;
      break;
    case 207:
      ret = ResponseCode::RPL_TRACESERVICE;
      break;
    case 208:
      ret = ResponseCode::RPL_TRACENEWTYPE;
      break;
    case 209:
      ret = ResponseCode::RPL_TRACECLASS;
      break;
    case 210:
      ret = ResponseCode::RPL_TRACERECONNECT;
      break;
    case 211:
      ret = ResponseCode::RPL_STATSLINKINFO;
      break;
    case 212:
      ret = ResponseCode::RPL_STATSCOMMANDS;
      break;
    case 213:
      ret = ResponseCode::RPL_STATSNLINE;
      break;
    case 215:
      ret = ResponseCode::RPL_STATSKLINE;
      break;
    case 217:
      ret = ResponseCode::RPL_STATSYLINE;
      break;
    case 219:
      ret = ResponseCode::RPL_ENDOFSTATS;
      break;
    case 221:
      ret = ResponseCode::RPL_UMODEIS;
      break;
    case 231:
      ret = ResponseCode::RPL_ENDOFSERVICES;
      break;
    case 233:
      ret = ResponseCode::RPL_SERVICE;
      break;
    case 234:
      ret = ResponseCode::RPL_SERVLIST;
      break;
    case 235:
      ret = ResponseCode::RPL_SERVLISTEND;
      break;
    case 240:
      ret = ResponseCode::RPL_STATSLLINE;
      break;
    case 242:
      ret = ResponseCode::RPL_STATSUPTIME;
      break;
    case 243:
      ret = ResponseCode::RPL_STATSOLINE;
      break;
    case 244:
      ret = ResponseCode::RPL_STATSSLINE;
      break;
    case 246:
      ret = ResponseCode::RPL_STATSBLINE;
      break;
    case 250:
      ret = ResponseCode::RPL_STATSDLINE;
      break;
    case 251:
      ret = ResponseCode::RPL_LUSERCLIENT;
      break;
    case 252:
      ret = ResponseCode::RPL_LUSEROP;
      break;
    case 253:
      ret = ResponseCode::RPL_LUSERUNKNOWN;
      break;
    case 254:
      ret = ResponseCode::RPL_LUSERCHANNELS;
      break;
    case 255:
      ret = ResponseCode::RPL_LUSERME;
      break;
    case 256:
      ret = ResponseCode::RPL_ADMINME;
      break;
    case 257:
      ret = ResponseCode::RPL_ADMINLOC1;
      break;
    case 258:
      ret = ResponseCode::RPL_ADMINLOC2;
      break;
    case 259:
      ret = ResponseCode::RPL_ADMINEMAIL;
      break;
    case 261:
      ret = ResponseCode::RPL_TRACELOG;
      break;
    case 262:
      ret = ResponseCode::RPL_TRACEEND;
      break;
    case 263:
      ret = ResponseCode::RPL_TRYAGAIN;
      break;
    case 300:
      ret = ResponseCode::RPL_WHOISCHANOP;
      break;
    case 301:
      ret = ResponseCode::RPL_AWAY;
      break;
    case 302:
      ret = ResponseCode::RPL_USERHOST;
      break;
    case 303:
      ret = ResponseCode::RPL_ISON;
      break;
    case 305:
      ret = ResponseCode::RPL_UNAWAY;
      break;
    case 306:
      ret = ResponseCode::RPL_NOWAWAY;
      break;
    case 311:
      ret = ResponseCode::RPL_WHOISUSER;
      break;
    case 312:
      ret = ResponseCode::RPL_WHOISSERVER;
      break;
    case 313:
      ret = ResponseCode::RPL_WHOISOPERATOR;
      break;
    case 314:
      ret = ResponseCode::RPL_WHOWASUSER;
      break;
    case 315:
      ret = ResponseCode::RPL_ENDOFWHO;
      break;
    case 317:
      ret = ResponseCode::RPL_WHOISIDLE;
      break;
    case 318:
      ret = ResponseCode::RPL_ENDOFWHOIS;
      break;
    case 319:
      ret = ResponseCode::RPL_WHOISCHANNELS;
      break;
    case 321:
      ret = ResponseCode::RPL_LISTSTART;
      break;
    case 322:
      ret = ResponseCode::RPL_LIST;
      break;
    case 323:
      ret = ResponseCode::RPL_LISTEND;
      break;
    case 324:
      ret = ResponseCode::RPL_CHANNELMODEIS;
      break;
    case 325:
      ret = ResponseCode::RPL_UNIQOPIS;
      break;
    case 331:
      ret = ResponseCode::RPL_NOTOPIC;
      break;
    case 332:
      ret = ResponseCode::RPL_TOPIC;
      break;
    case 341:
      ret = ResponseCode::RPL_INVITING;
      break;
    case 342:
      ret = ResponseCode::RPL_SUMMONING;
      break;
    case 346:
      ret = ResponseCode::RPL_INVITELIST;
      break;
    case 347:
      ret = ResponseCode::RPL_ENDOFINVITELIST;
      break;
    case 348:
      ret = ResponseCode::RPL_EXCEPTLIST;
      break;
    case 349:
      ret = ResponseCode::RPL_ENDOFEXCEPTLIST;
      break;
    case 351:
      ret = ResponseCode::RPL_VERSION;
      break;
    case 352:
      ret = ResponseCode::RPL_WHOREPLY;
      break;
    case 353:
      ret = ResponseCode::RPL_NAMREPLY;
      break;
    case 361:
      ret = ResponseCode::RPL_CLOSING;
      break;
    case 363:
      ret = ResponseCode::RPL_INFOSTART;
      break;
    case 364:
      ret = ResponseCode::RPL_LINKS;
      break;
    case 365:
      ret = ResponseCode::RPL_ENDOFLINKS;
      break;
    case 366:
      ret = ResponseCode::RPL_ENDOFNAMES;
      break;
    case 367:
      ret = ResponseCode::RPL_BANLIST;
      break;
    case 368:
      ret = ResponseCode::RPL_ENDOFBANLIST;
      break;
    case 369:
      ret = ResponseCode::RPL_ENDOFWHOWAS;
      break;
    case 371:
      ret = ResponseCode::RPL_INFO;
      break;
    case 372:
      ret = ResponseCode::RPL_MOTD;
      break;
    case 374:
      ret = ResponseCode::RPL_ENDOFINFO;
      break;
    case 375:
      ret = ResponseCode::RPL_MOTDSTART;
      break;
    case 376:
      ret = ResponseCode::RPL_ENDOFMOTD;
      break;
    case 381:
      ret = ResponseCode::RPL_YOUREOPER;
      break;
    case 382:
      ret = ResponseCode::RPL_REHASHING;
      break;
    case 383:
      ret = ResponseCode::RPL_YOURESERVICE;
      break;
    case 384:
      ret = ResponseCode::RPL_MYPORTIS;
      break;
    case 391:
      ret = ResponseCode::RPL_TIME;
      break;
    case 392:
      ret = ResponseCode::RPL_USERSSTART;
      break;
    case 393:
      ret = ResponseCode::RPL_USERS;
      break;
    case 394:
      ret = ResponseCode::RPL_ENDOFUSERS;
      break;
    case 395:
      ret = ResponseCode::RPL_NOUSERS;
      break;
  }
  return ret;
}
}
