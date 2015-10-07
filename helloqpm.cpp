#include "helloqpm.h"

QPM_BEGIN_NAMESPACE(io, coldnew, hello);

HelloQpm::HelloQpm(QObject *parent) : QObject(parent) {
    m_message = "Hello from C++";
}

QPM_END_NAMESPACE(io, coldnew, hello);