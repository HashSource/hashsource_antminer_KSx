int *__fastcall <std::env::SplitPaths as core::iter::traits::iterator::Iterator>::size_hint(int *result, int a2)
{
  int v2; // r3
  int v3; // lr
  int v4; // r1

  v2 = *(unsigned __int8 *)(a2 + 12);
  v3 = *(_DWORD *)(a2 + 4);
  v4 = 0;
  if ( !v2 )
    v4 = v3 + 1;
  *result = v2 ^ 1;
  result[1] = 1;
  result[2] = v4;
  return result;
}
