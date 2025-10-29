int std::panicking::panic_count::get_count()
{
  return *(_DWORD *)_tls_get_addr(&dword_2D143C);
}
