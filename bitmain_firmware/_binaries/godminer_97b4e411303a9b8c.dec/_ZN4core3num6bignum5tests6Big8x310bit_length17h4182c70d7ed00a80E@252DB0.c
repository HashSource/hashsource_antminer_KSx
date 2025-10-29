int __fastcall core::num::bignum::tests::Big8x3::bit_length(_DWORD *a1)
{
  int v1; // r1
  int result; // r0
  char *v4; // r12
  char *v5; // r3
  char *v6; // r3
  int v7; // t1
  int v8; // r0
  char *v9; // r3
  int v10; // t1
  char *v11; // r3
  int v12; // t1

  v1 = *a1;
  if ( *a1 >= 4u )
    core::slice::index::slice_end_index_len_fail();
  result = 0;
  if ( v1 )
  {
    v4 = (char *)(a1 + 1);
    v5 = (char *)a1 + v1 + 4;
    v7 = (unsigned __int8)*(v5 - 1);
    v6 = v5 - 1;
    if ( v7 )
    {
      v8 = v1 - 1;
    }
    else
    {
      if ( v4 == v6 )
        return result;
      v10 = (unsigned __int8)*(v6 - 1);
      v9 = v6 - 1;
      if ( v10 )
      {
        v8 = v1 - 2;
      }
      else
      {
        if ( v4 == v9 )
          return result;
        v12 = (unsigned __int8)*(v9 - 1);
        v11 = v9 - 1;
        if ( v12 )
        {
          v8 = v1 - 3;
        }
        else
        {
          if ( v4 == v11 )
            return result;
          v8 = v1 - 4;
        }
      }
    }
    if ( !v4[v8] )
      core::option::expect_failed();
    return 8 * v8 + ((unsigned __int8)(__clz((unsigned __int8)v4[v8]) - 24) ^ 7) + 1;
  }
  return result;
}
