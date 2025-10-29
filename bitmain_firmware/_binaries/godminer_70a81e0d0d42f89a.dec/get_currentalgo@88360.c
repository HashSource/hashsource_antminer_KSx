int __fastcall get_currentalgo(char *a1, size_t a2)
{
  return snprintf(a1, a2, "%s", *(const char **)&aD3[4 * opt_algo]);
}
