int __fastcall get_currentalgo(char *a1, size_t a2)
{
  return snprintf(a1, a2, "%s", *(const char **)&asc_2701F8[4 * opt_algo]);
}
