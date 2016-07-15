template <typename T>
class ts_list
{
  public:
  using const_iterator = typename std::list<T>::const_iterator;

  auto add(const T& v) -> void;
  auto find(const T& v) const -> const_iterator;
  auto has(const T& v) const -> bool;

  template <typename Func>
    auto for_each(Func f) const -> void;

  private:
  std::list<T> list_;
  mutable std::mutex mutex_;
}
