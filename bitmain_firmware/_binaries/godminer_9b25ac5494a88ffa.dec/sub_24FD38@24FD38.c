bool __fastcall sub_24FD38(int a1, int *a2)
{
  _QWORD *v3; // r0
  int v5; // r8
  int v6; // r6
  __int64 *v8; // r1
  unsigned int v9; // r0
  int *v10; // r2
  __int64 *v11; // r1
  __int64 v12; // [sp+0h] [bp-38h] BYREF
  int v13; // [sp+Ch] [bp-2Ch] BYREF
  __int64 *v14; // [sp+10h] [bp-28h] BYREF
  int (*v15)(); // [sp+14h] [bp-24h]
  __int64 *v16; // [sp+18h] [bp-20h]
  void (__noreturn *v17)(); // [sp+1Ch] [bp-1Ch]
  int v18[2]; // [sp+20h] [bp-18h] BYREF
  char **v19; // [sp+28h] [bp-10h]
  int v20; // [sp+2Ch] [bp-Ch]
  __int64 **v21; // [sp+30h] [bp-8h]
  int v22; // [sp+34h] [bp-4h]

  v3 = *(_QWORD **)a1;
  if ( *v3 == 1 )
  {
    v12 = v3[1];
    v5 = *a2;
    v6 = a2[1];
    v17 = (void (__noreturn *)())core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v14 = *(__int64 **)(a1 + 4);
    v16 = &v12;
    v15 = sub_25ED28;
    v22 = 2;
    v20 = 2;
    v21 = &v14;
    v18[0] = 0;
    v19 = &off_2E3588;
    if ( core::fmt::write(v5, v6, v18) )
      return 1;
  }
  else
  {
    v8 = *(__int64 **)(a1 + 4);
    v5 = *a2;
    v6 = a2[1];
    v15 = sub_25ED28;
    v21 = &v14;
    v19 = &off_2E3578;
    v20 = 2;
    v14 = v8;
    v18[0] = 0;
    v22 = 1;
    if ( core::fmt::write(v5, v6, v18) )
      return 1;
  }
  v9 = **(_DWORD **)(a1 + 8);
  if ( v9 )
  {
    if ( v9 >= 0xA )
      core::slice::index::slice_end_index_len_fail();
    HIDWORD(v12) = **(_DWORD **)(a1 + 8);
    v10 = *(int **)(a1 + 16);
    if ( a2[4] == 1 )
      v10 = a2 + 5;
    LODWORD(v12) = *(_DWORD *)(a1 + 12);
    v13 = *v10;
    v16 = (__int64 *)&v13;
    v14 = &v12;
    v15 = sub_25ED28;
    v22 = 2;
    v17 = sub_23C870;
    v21 = &v14;
    v20 = 1;
    v19 = (char **)&off_2E35A8;
    v18[1] = 1;
    v18[0] = (int)&byte_2B3618;
    if ( core::fmt::write(v5, v6, v18) )
      return 1;
  }
  v11 = *(__int64 **)(a1 + 20);
  v15 = sub_25ED28;
  v14 = v11;
  v19 = &off_2E30F4;
  v22 = 1;
  v20 = 1;
  v21 = &v14;
  v18[0] = 0;
  return core::fmt::write(v5, v6, v18);
}
