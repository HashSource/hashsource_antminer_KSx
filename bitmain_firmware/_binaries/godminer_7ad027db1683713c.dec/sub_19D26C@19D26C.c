char *__fastcall sub_19D26C(char *result, int a2)
{
  char *v3; // r1
  int v4; // r5

  if ( result )
  {
    v3 = *(char **)(a2 + 8);
    if ( v3 < result )
      core::slice::index::slice_end_index_len_fail((int)result, (int)v3, (int)&off_2C9538);
    *(_DWORD *)(a2 + 8) = 0;
    if ( v3 != result )
    {
      v4 = v3 - result;
      result = (char *)memmove(*(void **)(a2 + 4), &result[*(_DWORD *)(a2 + 4)], v3 - result);
      *(_DWORD *)(a2 + 8) = v4;
    }
  }
  return result;
}
