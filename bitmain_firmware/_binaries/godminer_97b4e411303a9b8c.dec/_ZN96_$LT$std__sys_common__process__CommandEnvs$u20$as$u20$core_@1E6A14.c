_DWORD *__fastcall <std::sys_common::process::CommandEnvs as core::iter::traits::iterator::Iterator>::size_hint(
        _DWORD *result,
        int a2)
{
  int v2; // r1

  v2 = *(_DWORD *)(a2 + 32);
  result[2] = v2;
  *result = v2;
  result[1] = 1;
  return result;
}
