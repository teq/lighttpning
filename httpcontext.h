#pragma once

namespace Lighttpning {

    struct Request {

        enum Method {
            GET,
            POST,
            PUT,
            DELETE
        };
    };

    struct Response {

    };

    struct HttpContext {
        Request request;
        Response response;
    };
}