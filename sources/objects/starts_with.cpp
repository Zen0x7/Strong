#include <strong/starts_with.hpp>

namespace strong {
    bool starts_with(const std::string &string, const std::string_view query) {
        return string.starts_with(query);
    }
}
