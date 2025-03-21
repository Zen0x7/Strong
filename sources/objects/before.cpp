#include <strong/before.hpp>

namespace strong {
std::optional<std::string_view> before(const std::string_view content,
                                       const std::string_view search) {
  const std::size_t pos = content.find(search);
  if (pos == std::string_view::npos) {
    return std::nullopt;
  }
  return content.substr(0, pos);
}
}  // namespace strong
