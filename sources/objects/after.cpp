#include <strong/after.hpp>

namespace strong {
std::optional<std::string_view> after(const std::string_view content,
                                      const std::string_view search) {
  const std::size_t pos = content.find(search);
  if (pos == std::string_view::npos) {
    return std::nullopt;
  }
  return content.substr(pos + search.size());
}
}  // namespace strong
