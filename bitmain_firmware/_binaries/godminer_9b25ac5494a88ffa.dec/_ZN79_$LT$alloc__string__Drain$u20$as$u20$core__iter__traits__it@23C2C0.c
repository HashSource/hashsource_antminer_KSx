unsigned int *__fastcall <alloc::string::Drain as core::iter::traits::iterator::Iterator>::size_hint(
        unsigned int *result,
        _DWORD *a2)
{
  int v2; // r1

  v2 = *a2 - a2[1];
  result[2] = v2;
  *result = (unsigned int)(v2 + 3) >> 2;
  result[1] = 1;
  return result;
}
