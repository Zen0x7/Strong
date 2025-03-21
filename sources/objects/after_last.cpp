#include <strong/after_last.hpp>

namespace strong {
std::optional<std::string_view> after_last(const std::string_view content,
                                           const std::string_view search) {
  std::size_t pos = content.find(search);
  if (pos == std::string_view::npos) return std::nullopt;
  std::size_t aux = pos;
  while (pos != std::string_view::npos) {
    aux = pos;
    pos = content.find(search, pos + search.size());
  }
  return content.substr(aux + search.size());
}
}  // namespace strong
