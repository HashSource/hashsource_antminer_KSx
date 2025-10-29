int __fastcall sub_1FCE98(_DWORD *a1, int a2, int a3)
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
  if ( !dword_31241C )
  {
    v6 = _rust_alloc(0x260u);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
    v7 = v6;
    v12 = 0;
    v11 = 4;
    v10 = 0;
    dl_iterate_phdr(sub_20312C, &v10);
    dword_312428 = v7;
    dword_31242C = 0;
    dword_312418 = v10;
    dword_31241C = v11;
    unk_312420 = v12;
    unk_312424 = 4;
  }
  if ( v4 )
    --v4;
  return sub_1FCF8C(v4, v9, &dword_312418);
}
