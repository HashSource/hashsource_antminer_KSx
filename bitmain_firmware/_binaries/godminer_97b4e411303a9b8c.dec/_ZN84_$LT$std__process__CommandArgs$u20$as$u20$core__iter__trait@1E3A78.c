unsigned int *__fastcall <std::process::CommandArgs as core::iter::traits::iterator::Iterator>::size_hint(
        unsigned int *result,
        _DWORD *a2)
{
  unsigned int v2; // r1

  v2 = (unsigned int)(*a2 - a2[1]) >> 3;
  *result = v2;
  result[1] = 1;
  result[2] = v2;
  return result;
}
