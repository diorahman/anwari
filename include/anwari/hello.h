#ifndef _HELLO_H_
#define _HELLO_H_

#include <string>

namespace Anwari {

    class Hello {
        public:
            Hello();
            virtual ~Hello();

            std::string say();
    };

} // namespace Anwari

#endif
