int *__fastcall <std::os::unix::net::ancillary::ScmCredentials as core::iter::traits::iterator::Iterator>::next(
        int *result,
        int a2)
{
  unsigned int v2; // r3
  int v3; // r2
  int *v4; // r2
  int v5; // r1
  int v6; // r3

  v2 = *(_DWORD *)(a2 + 4);
  v3 = 0;
  if ( v2 >= 0xC )
  {
    v4 = *(int **)a2;
    *(_DWORD *)a2 += 12;
    *(_DWORD *)(a2 + 4) = v2 - 12;
    v5 = *v4;
    v6 = v4[1];
    result[3] = v4[2];
    v3 = 1;
    result[1] = v5;
    result[2] = v6;
  }
  *result = v3;
  return result;
}
