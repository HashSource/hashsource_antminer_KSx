int __fastcall std::sys::unix::process::process_common::Command::new(int a1, _BYTE *a2, unsigned int a3)
{
  char v6; // r10
  int v7; // r0
  __int64 v8; // r0
  const void *v9; // r7
  signed int v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r8
  int v13; // r0
  int v14; // r1
  int *v15; // r6
  int v16; // r0
  int v17; // r1
  int v19; // r1
  char v20; // r2
  int v21; // r5
  char v22; // [sp+7h] [bp-19h] BYREF
  __int64 v23; // [sp+8h] [bp-18h]
  int v24; // [sp+10h] [bp-10h] BYREF
  int v25; // [sp+14h] [bp-Ch]
  signed int v26; // [sp+18h] [bp-8h]
  int v27; // [sp+1Ch] [bp-4h]

  v22 = 0;
  if ( !a3 )
  {
LABEL_6:
    v7 = 0;
    goto LABEL_8;
  }
  v6 = 2;
  if ( *a2 == 47 )
    goto LABEL_9;
  if ( a3 >= 8 )
  {
    v7 = core::slice::memchr::memchr_aligned(47, a2);
    goto LABEL_8;
  }
  v7 = 1;
  if ( *a2 != 47 )
  {
    if ( a3 != 1 )
    {
      if ( a2[1] == 47 )
        goto LABEL_8;
      if ( a3 != 2 )
      {
        if ( a2[2] == 47 )
          goto LABEL_8;
        if ( a3 != 3 )
        {
          if ( a2[3] == 47 )
            goto LABEL_8;
          if ( a3 != 4 )
          {
            if ( a2[4] == 47 )
              goto LABEL_8;
            if ( a3 != 5 )
            {
              if ( a2[5] != 47 )
              {
                v7 = 0;
                if ( a3 != 6 )
                  v7 = a2[6] == 47;
              }
              goto LABEL_8;
            }
          }
        }
      }
    }
    goto LABEL_6;
  }
LABEL_8:
  v6 = v7 == 1;
LABEL_9:
  v8 = sub_1DFFC0(a2, a3, &v22);
  v9 = (const void *)v8;
  v23 = v8;
  v10 = HIDWORD(v8);
  v11 = (_DWORD *)_rust_alloc(8u);
  if ( !v11 )
    alloc::alloc::handle_alloc_error();
  v12 = v11;
  v11[1] = 0;
  *v11 = v9;
  v13 = _rust_alloc(8u);
  if ( !v13 )
    alloc::alloc::handle_alloc_error();
  v15 = (int *)v13;
  if ( v10 )
  {
    if ( v10 <= -1 )
      alloc::raw_vec::capacity_overflow(v13, v14);
    v16 = _rust_alloc(v10);
    if ( !v16 )
      alloc::alloc::handle_alloc_error();
  }
  else
  {
    v16 = 1;
  }
  v25 = v16;
  v24 = v10;
  memcpy((void *)v16, v9, v10);
  v26 = v10;
  *v15 = sub_1A4BF4(&v24);
  v15[1] = v17;
  LOWORD(v27) = 0;
  v19 = v27;
  v20 = v22;
  *(_DWORD *)(a1 + 36) = v10;
  v21 = v24;
  *(_DWORD *)(a1 + 12) = v19;
  *(_DWORD *)(a1 + 32) = v9;
  v26 = 0;
  v25 = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)a1 = v21;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 124) = v6;
  *(_BYTE *)(a1 + 125) = v20;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 88) = 1;
  *(_DWORD *)(a1 + 92) = v15;
  *(_DWORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 100) = 2;
  *(_DWORD *)(a1 + 104) = v12;
  *(_DWORD *)(a1 + 108) = 2;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 4;
  *(_BYTE *)(a1 + 126) = 0;
  *(_DWORD *)(a1 + 56) = 4;
  *(_DWORD *)(a1 + 48) = 4;
  *(_DWORD *)(a1 + 40) = 4;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  return 0;
}
