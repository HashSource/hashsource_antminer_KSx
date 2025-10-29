void __fastcall sub_1E6E98(_DWORD *a1, size_t a2, size_t a3)
{
  unsigned int v4; // r4
  int v6; // r0
  int v7; // r5
  size_t v8[2]; // [sp+8h] [bp-18h] BYREF
  int v9; // [sp+10h] [bp-10h] BYREF
  int v10; // [sp+14h] [bp-Ch]
  int v11; // [sp+18h] [bp-8h]

  v4 = a1[1];
  if ( !*a1 )
  {
    v9 = 0;
    Unwind_VRS_Get(v4, 0, 15, 0, &v9);
    v4 = v9 & 0xFFFFFFFE;
  }
  v8[1] = a3;
  v8[0] = a2;
  if ( !dword_2E963C )
  {
    v6 = _rust_alloc(0x260u);
    if ( !v6 )
      alloc::alloc::handle_alloc_error();
    v7 = v6;
    v11 = 0;
    v10 = 4;
    v9 = 0;
    dl_iterate_phdr(sub_1ED12C, &v9);
    dword_2E9648 = v7;
    dword_2E964C = 0;
    dword_2E9638 = v9;
    dword_2E963C = v10;
    unk_2E9640 = v11;
    unk_2E9644 = 4;
  }
  if ( v4 )
    --v4;
  sub_1E6F8C(v4, v8, &dword_2E9638);
}
