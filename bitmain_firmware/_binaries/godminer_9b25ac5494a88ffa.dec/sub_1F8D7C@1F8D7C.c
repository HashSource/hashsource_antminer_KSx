int __fastcall sub_1F8D7C(_DWORD *a1, int a2, int a3)
{
  unsigned int v4; // r4
  int v6; // r0
  int v7; // r5
  _DWORD v9[2]; // [sp+8h] [bp-18h] BYREF
  int v10; // [sp+10h] [bp-10h] BYREF
  int v11; // [sp+14h] [bp-Ch]
  int v12; // [sp+18h] [bp-8h]

  v4 = a1[1];
  if ( !*a1 )
  {
    v10 = 0;
    Unwind_VRS_Get(v4, 0, 15, 0, &v10);
    v4 = v10 & 0xFFFFFFFE;
  }
  v9[1] = a3;
  v9[0] = a2;
  if ( !dword_30AC94 )
  {
    v6 = _rust_alloc(0x260u);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
    v7 = v6;
    v12 = 0;
    v11 = 4;
    v10 = 0;
    dl_iterate_phdr(sub_1FF010, &v10);
    dword_30ACA0 = v7;
    dword_30ACA4 = 0;
    dword_30AC90 = v10;
    dword_30AC94 = v11;
    *(_DWORD *)algn_30AC98 = v12;
    *(_DWORD *)&algn_30AC98[4] = 4;
  }
  if ( v4 )
    --v4;
  return sub_1F8E70(v4, v9, &dword_30AC90);
}
