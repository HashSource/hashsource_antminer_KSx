int __fastcall get_currentalgo(char *a1, size_t a2)
{
  return snprintf(a1, a2, "%s", off_2705D8[opt_algo]);
}
