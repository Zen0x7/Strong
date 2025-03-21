#include <strong/starts_with.hpp>

namespace strong {
    bool starts_with(const std::string_view content, const std::string_view search) {
        return content.starts_with(search);
    }
}
