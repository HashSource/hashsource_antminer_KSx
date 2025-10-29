_DWORD *__fastcall <core::ascii::EscapeDefault as core::iter::traits::iterator::Iterator>::size_hint(
        _DWORD *result,
        int a2)
{
  _R2 = *(char *)(a2 + 4);
  _R1 = *(char *)(a2 + 5);
  __asm { UQSUB8          R1, R1, R2 }
  *result = (unsigned __int8)_R1;
  result[1] = 1;
  result[2] = (unsigned __int8)_R1;
  return result;
}
