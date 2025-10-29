int __fastcall <std::fs::Metadata as core::fmt::Debug>::fmt(int a1, int a2)
{
  int v3; // r6
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r2
  int v10; // r8
  int v11; // r3
  int v12; // r0
  unsigned int v13; // r2
  int v14; // r8
  int v15; // r3
  int v16; // r0
  char **v17; // r2
  int v18; // r0
  int v19; // r4
  bool v20; // zf
  int v21; // r6
  bool v22; // zf
  void **v23; // r6
  bool v24; // zf
  void **v26; // r5
  _BYTE v27[8]; // [sp+4h] [bp-44h] BYREF
  int v28; // [sp+Ch] [bp-3Ch] BYREF
  bool v29; // [sp+12h] [bp-36h] BYREF
  bool v30; // [sp+13h] [bp-35h] BYREF
  int v31; // [sp+14h] [bp-34h] BYREF
  int v32; // [sp+18h] [bp-30h] BYREF
  void *v33; // [sp+1Ch] [bp-2Ch]
  unsigned int v34; // [sp+20h] [bp-28h]
  int v35; // [sp+28h] [bp-20h] BYREF
  void *v36; // [sp+2Ch] [bp-1Ch]
  unsigned int v37; // [sp+30h] [bp-18h]
  __int64 v38; // [sp+38h] [bp-10h] BYREF
  int v39; // [sp+40h] [bp-8h]

  core::fmt::Formatter::debug_struct(v27, a2, aMetadata, 8);
  v28 = *(_DWORD *)(a1 + 96);
  v3 = v28;
  v4 = core::fmt::builders::DebugStruct::field(v27, aFileType, 9, &v28, &off_2CA90C);
  v29 = (v3 & 0xF000) == 0x4000;
  v5 = core::fmt::builders::DebugStruct::field(v4, aIsDir, 6, &v29, &off_2CA758);
  v30 = (v3 & 0xF000) == 0x8000;
  v6 = core::fmt::builders::DebugStruct::field(v5, aIsFile, 7, &v30, &off_2CA758);
  v31 = v3;
  v7 = core::fmt::builders::DebugStruct::field(v6, aPermissions, 11, &v31, &off_2CA91C);
  v8 = *(_DWORD *)a1 ^ 1 | *(_DWORD *)(a1 + 4);
  if ( *(_QWORD *)a1 == 1 && (*(_BYTE *)(a1 + 72) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 64);
    if ( v9 <= 0x3B9AC9FF )
    {
      v10 = *(_DWORD *)(a1 + 56);
      v11 = *(_DWORD *)(a1 + 60);
      goto LABEL_7;
    }
LABEL_41:
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2CBBF0);
  }
  v9 = *(_DWORD *)(a1 + 164);
  if ( v9 > 0x3B9AC9FF )
    goto LABEL_41;
  v10 = *(_DWORD *)(a1 + 160);
  v11 = v10 >> 31;
LABEL_7:
  v32 = v10;
  v34 = v9;
  v33 = (void *)v11;
  v12 = core::fmt::builders::DebugStruct::field(v7, aModified, 8, &v32, &off_2CA92C);
  if ( v8 || (*(_BYTE *)(a1 + 72) & 0x20) == 0 )
  {
    v13 = *(_DWORD *)(a1 + 156);
    if ( v13 <= 0x3B9AC9FF )
    {
      v14 = *(_DWORD *)(a1 + 152);
      v15 = v14 >> 31;
      goto LABEL_13;
    }
LABEL_42:
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2CBBF0);
  }
  v13 = *(_DWORD *)(a1 + 32);
  if ( v13 > 0x3B9AC9FF )
    goto LABEL_42;
  v14 = *(_DWORD *)(a1 + 24);
  v15 = *(_DWORD *)(a1 + 28);
LABEL_13:
  v35 = v14;
  v37 = v13;
  v36 = (void *)v15;
  v16 = core::fmt::builders::DebugStruct::field(v12, aAccessed, 8, &v35, &off_2CA92C);
  if ( v8 )
  {
    v17 = &off_2CB7D0;
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(a1 + 73) & 8) == 0 )
  {
    v17 = &off_2CB7DC;
LABEL_17:
    LODWORD(v38) = 2;
    v39 = 1000000000;
    HIDWORD(v38) = v17;
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a1 + 16) > 0x3B9AC9FFu )
    core::panicking::panic((int)aAssertionFaile_15, 63, (int)&off_2CBBF0);
  v39 = *(_DWORD *)(a1 + 16);
  v38 = *(_QWORD *)(a1 + 8);
LABEL_20:
  v18 = core::fmt::builders::DebugStruct::field(v16, aCreated, 7, &v38, &off_2CA92C);
  v19 = core::fmt::builders::DebugStruct::finish_non_exhaustive(v18);
  v20 = v39 == 1000000000;
  if ( v39 == 1000000000 )
    v20 = (unsigned __int8)v38 == 3;
  if ( v20 )
  {
    v21 = HIDWORD(v38);
    (**(void (__fastcall ***)(_DWORD))(HIDWORD(v38) + 4))(*(_DWORD *)HIDWORD(v38));
    if ( *(_DWORD *)(*(_DWORD *)(v21 + 4) + 4) )
      _rust_dealloc(*(void **)v21);
    _rust_dealloc((void *)HIDWORD(v38));
  }
  v22 = v37 == 1000000000;
  if ( v37 == 1000000000 )
    v22 = (unsigned __int8)v35 == 3;
  if ( v22 )
  {
    v23 = (void **)v36;
    (**((void (__fastcall ***)(_DWORD))v36 + 1))(*(_DWORD *)v36);
    if ( *((_DWORD *)v23[1] + 1) )
      _rust_dealloc(*v23);
    _rust_dealloc(v36);
  }
  v24 = v34 == 1000000000;
  if ( v34 == 1000000000 )
    v24 = (unsigned __int8)v32 == 3;
  if ( !v24 )
    return v19;
  v26 = (void **)v33;
  (**((void (__fastcall ***)(_DWORD))v33 + 1))(*(_DWORD *)v33);
  if ( *((_DWORD *)v26[1] + 1) )
    _rust_dealloc(*v26);
  _rust_dealloc(v33);
  return v19;
}
