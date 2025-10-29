bool std::panicking::panic_count::is_zero_slow_path()
{
  return *(_DWORD *)_tls_get_addr(&dword_2E7464) == 0;
}
