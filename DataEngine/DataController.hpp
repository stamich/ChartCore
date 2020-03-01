//
// Created by michal on 21.02.2020.
//

#ifndef CHARTCORE_DATACONTROLLER_HPP
#define CHARTCORE_DATACONTROLLER_HPP

#include <string>
#include <vector>
#include <pistache/client.h>
#include <pistache/http.h>
#include <pistache/net.h>
#include <pistache/common.h>
#include <pistache/endpoint.h>

using namespace Pistache;

class DataController : public Http::Handler {

//public:
//    DataController(const std::string& address, const std::string& port);
//    ~DataController();
//    void setEndpoint(const std::string& mount_point);
//    std::string endpoint() const;
//
//    virtual void initRestOpHandlers() = 0;
//
//    std:vector<utility::string_t> requestPath(const http_request& message);
//
//protected:
//    http_listener _listener;
//private:
//    uri_builder endpointBuilder;
public:
    virtual void onRequest(const Http::Request& request, Http::ResponseWriter response);
};

#endif //CHARTCORE_DATACONTROLLER_HPP
