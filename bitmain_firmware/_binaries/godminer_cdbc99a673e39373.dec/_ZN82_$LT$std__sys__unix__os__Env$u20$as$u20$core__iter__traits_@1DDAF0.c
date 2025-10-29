_DWORD *__fastcall <std::sys::unix::os::Env as core::iter::traits::iterator::Iterator>::next(_DWORD *result, int a2)
{
  _DWORD *v2; // r12
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // lr

  v2 = *(_DWORD **)(a2 + 4);
  if ( v2 == *(_DWORD **)(a2 + 8) )
  {
    result[1] = 0;
  }
  else
  {
    *(_DWORD *)(a2 + 4) = v2 + 6;
    v3 = v2[1];
    v4 = v2[2];
    v5 = v2[3];
    v6 = v2[4];
    v7 = v2[5];
    *result = *v2;
    result[1] = v3;
    result[2] = v4;
    result[3] = v5;
    result[4] = v6;
    result[5] = v7;
  }
  return result;
}
