int *__fastcall <std::os::unix::net::ancillary::Messages as core::iter::traits::iterator::Iterator>::next(
        int *result,
        int a2)
{
  int *v2; // r3
  int *v3; // r5
  unsigned int v4; // r4
  unsigned int v5; // r4
  int v6; // lr
  int v7; // r3
  int v8; // r12
  int v9; // r1

  v2 = *(int **)(a2 + 8);
  v3 = *(int **)a2;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v2 )
  {
    if ( (unsigned int)*v2 < 0xC )
      goto LABEL_13;
    v5 = (unsigned int)v3 + v4;
    v3 = (int *)((char *)v2 + ((*v2 + 3) & 0xFFFFFFFC));
    if ( v5 < (unsigned int)(v3 + 3) )
      goto LABEL_13;
    if ( v2 == v3 )
      goto LABEL_13;
    v6 = *v3;
    if ( (unsigned int)v3 + ((*v3 + 3) & 0xFFFFFFFC) > v5 )
      goto LABEL_13;
  }
  else
  {
    if ( v4 < 0xC )
    {
LABEL_13:
      *result = 3;
      return result;
    }
    v6 = *v3;
  }
  v7 = v3[1];
  v8 = v3[2];
  *(_DWORD *)(a2 + 8) = v3;
  v9 = 2;
  if ( v7 == 1 )
  {
    if ( v8 == 2 )
    {
      v9 = 1;
      goto LABEL_15;
    }
    v7 = 1;
    if ( v8 == 1 )
    {
      v9 = 0;
LABEL_15:
      v7 = (int)(v3 + 3);
      v8 = v6 - 12;
    }
  }
  *result = v9;
  result[1] = v7;
  result[2] = v8;
  return result;
}
