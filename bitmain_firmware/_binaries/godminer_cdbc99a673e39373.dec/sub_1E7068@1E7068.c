__int64 __fastcall sub_1E7068(unsigned int *a1, signed int nmemb)
{
  unsigned int v2; // r4
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r6
  unsigned int v8; // r3
  int v9; // r1
  unsigned int v10; // r6
  signed int v12; // [sp+0h] [bp-10h]
  int v13; // [sp+4h] [bp-Ch]
  signed int v14; // [sp+8h] [bp-8h]

  v2 = a1[2];
  if ( nmemb )
  {
    if ( nmemb <= -1 )
      alloc::raw_vec::capacity_overflow(a1, nmemb);
    v5 = _rust_alloc_zeroed(nmemb);
    if ( !v5 )
      alloc::alloc::handle_alloc_error();
    v6 = a1[2];
  }
  else
  {
    v5 = 1;
    v6 = v2;
  }
  v14 = nmemb;
  v13 = v5;
  v12 = nmemb;
  if ( v6 == *a1 )
  {
    sub_1A56B0(a1, v6);
    v6 = a1[2];
  }
  v7 = a1[1];
  v8 = v6 + 1;
  v9 = 3 * v6;
  a1[2] = v8;
  *(_DWORD *)(v7 + 4 * v9) = v12;
  v10 = v7 + 4 * v9;
  if ( v2 < v8 )
    v9 = 3 * v2;
  *(_DWORD *)(v10 + 4) = v13;
  *(_DWORD *)(v10 + 8) = v14;
  if ( v2 >= v8 )
    core::panicking::panic_bounds_check(v2, v8, (int)&off_2CBE84);
  return *(_QWORD *)(a1[1] + 4 * v9 + 4);
}
