char *__fastcall <alloc::string::Drain as core::ops::drop::Drop>::drop(char *result)
{
  char *v1; // r5
  char *v2; // r1
  int v3; // r6
  size_t v4; // r4

  v1 = (char *)*((_DWORD *)result + 3);
  v2 = (char *)*((_DWORD *)result + 4);
  if ( v1 <= v2 )
  {
    v3 = *((_DWORD *)result + 2);
    result = *(char **)(v3 + 8);
    if ( result >= v2 )
    {
      v4 = result - v2;
      *(_DWORD *)(v3 + 8) = v1;
      if ( v2 == v1 )
      {
        if ( result == v1 )
          return result;
      }
      else
      {
        if ( result == v2 )
          return result;
        memmove(&v1[*(_DWORD *)(v3 + 4)], &v2[*(_DWORD *)(v3 + 4)], v4);
      }
      *(_DWORD *)(v3 + 8) = &v1[v4];
      return &v1[v4];
    }
  }
  return result;
}
