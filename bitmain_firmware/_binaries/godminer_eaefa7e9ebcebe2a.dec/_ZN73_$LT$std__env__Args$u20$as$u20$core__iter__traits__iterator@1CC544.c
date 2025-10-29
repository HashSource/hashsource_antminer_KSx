unsigned int *__fastcall <std::env::Args as core::iter::traits::iterator::Iterator>::size_hint(
        unsigned int *result,
        int a2)
{
  unsigned int v2; // kr00_4

  v2 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 4);
  result[1] = 1;
  result[2] = v2 / 0xC;
  *result = v2 / 0xC;
  return result;
}
