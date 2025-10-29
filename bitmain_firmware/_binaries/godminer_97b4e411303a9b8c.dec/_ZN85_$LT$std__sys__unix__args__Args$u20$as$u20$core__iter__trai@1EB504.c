_DWORD *__fastcall <std::sys::unix::args::Args as core::iter::traits::iterator::Iterator>::next(_DWORD *result, int a2)
{
  int *v2; // r2
  int v3; // r3
  int v4; // r12
  int v5; // lr

  v2 = *(int **)(a2 + 4);
  if ( v2 == *(int **)(a2 + 8) )
  {
    result[1] = 0;
  }
  else
  {
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    *(_DWORD *)(a2 + 4) = v2 + 3;
    *result = v3;
    result[1] = v4;
    result[2] = v5;
  }
  return result;
}
