signed int __fastcall alloc::str::<impl str>::repeat(signed int *a1, const void *a2, unsigned int a3, unsigned int a4)
{
  signed int v5; // r11
  unsigned int v6; // r6
  int v9; // r7
  signed int result; // r0
  int v11; // r5
  size_t v12; // r4
  bool v13; // cf
  signed int v14; // [sp+0h] [bp-Ch] BYREF
  int v15; // [sp+4h] [bp-8h]
  int v16; // [sp+8h] [bp-4h]

  if ( a4 )
  {
    v5 = a3 * a4;
    v6 = a4;
    if ( !is_mul_ok(a3, a4) )
      core::option::expect_failed((int)aCapacityOverfl, 17, (int)&off_2CE864);
    if ( v5 )
    {
      if ( v5 <= -1 )
        alloc::raw_vec::capacity_overflow();
      v9 = _rust_alloc(v5);
      if ( !v9 )
        alloc::alloc::handle_alloc_error();
    }
    else
    {
      v9 = 1;
    }
    v11 = 0;
    v16 = 0;
    v15 = v9;
    v14 = v5;
    if ( v5 < a3 )
    {
      sub_7BC14((unsigned int *)&v14, 0, a3);
      v9 = v15;
      v11 = v16;
    }
    memcpy((void *)(v9 + v11), a2, a3);
    v12 = v11 + a3;
    if ( v6 >= 2 )
    {
      do
      {
        memcpy((void *)(v9 + v12), (const void *)v9, v12);
        v13 = v6 >= 4;
        v12 *= 2;
        v6 >>= 1;
      }
      while ( v13 );
    }
    if ( v5 != v12 )
      memcpy((void *)(v9 + v12), (const void *)v9, v5 - v12);
    result = v14;
    *a1 = v14;
    a1[1] = v9;
    a1[2] = v5;
  }
  else
  {
    *a1 = 0;
    a1[1] = 1;
    a1[2] = 0;
    return 0;
  }
  return result;
}
