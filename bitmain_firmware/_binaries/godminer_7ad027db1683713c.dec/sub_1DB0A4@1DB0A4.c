void __fastcall sub_1DB0A4(int a1, int a2, int a3, int a4)
{
  int v5; // r10
  int v6; // r9
  int v10; // r0
  int v11; // r4
  bool v12; // zf
  int v13; // r10
  int v14; // r8
  int v15; // r0
  int v16; // r0
  int v17; // r3
  __int64 v18; // r4
  int v19; // r6
  int v20; // r7
  __int64 v21; // r0
  char v22; // r0
  unsigned int *v23; // r0
  unsigned int v24; // r1
  void *v25; // r0
  unsigned int v26; // r4
  __int16 v27; // r1
  unsigned int *v28; // r0
  unsigned int v29; // r1
  int v30; // r0
  int v31; // r1
  int v32; // r0
  int v33; // r0
  unsigned int *v34; // r0
  unsigned int v35; // r1
  void *v36; // r0
  unsigned int *v37; // r0
  unsigned int v38; // r1
  int v39; // [sp+8h] [bp-7Ch]
  int v40; // [sp+10h] [bp-74h]
  unsigned int *v41; // [sp+20h] [bp-64h] BYREF
  char v42; // [sp+24h] [bp-60h]
  __int64 v43; // [sp+28h] [bp-5Ch] BYREF
  __int64 v44; // [sp+30h] [bp-54h]
  int v45; // [sp+38h] [bp-4Ch]
  int v46; // [sp+3Ch] [bp-48h]
  void *v47; // [sp+40h] [bp-44h]
  int v48; // [sp+44h] [bp-40h]
  int v49; // [sp+48h] [bp-3Ch]
  int v50; // [sp+4Ch] [bp-38h]
  __int64 v51; // [sp+50h] [bp-34h]
  int v52; // [sp+58h] [bp-2Ch]
  int v53; // [sp+5Ch] [bp-28h]
  void *ptr; // [sp+60h] [bp-24h]
  int v55; // [sp+64h] [bp-20h]
  unsigned int *v56; // [sp+68h] [bp-1Ch]
  int v57; // [sp+6Ch] [bp-18h]
  _BYTE v58[7]; // [sp+74h] [bp-10h]
  char v59; // [sp+7Ch] [bp-8h] BYREF
  _BYTE v60[7]; // [sp+7Dh] [bp-7h]

  v5 = a3;
  v6 = a1 + 1;
  if ( !a2 )
    v5 = -100;
  while ( 1 )
  {
    v10 = openat64(v5, a4, 573440);
    if ( v10 != -1 )
      break;
    v11 = *_errno_location();
    if ( (unsigned __int8)std::sys::unix::decode_error_kind(v11) != 35 )
    {
      v12 = v11 == 40;
      if ( v11 != 40 )
        v12 = v11 == 20;
      BYTE3(v43) = 0;
      *(_WORD *)((char *)&v43 + 1) = 0;
      HIDWORD(v43) = v11;
      LOBYTE(v43) = 0;
      if ( v12 )
      {
        v13 = HIDWORD(v43);
        if ( a2 )
        {
          if ( unlinkat(a3, a4, 0) == -1 )
          {
            v30 = *_errno_location();
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 4) = v30;
          }
          else
          {
            *(_BYTE *)a1 = 4;
          }
        }
        else
        {
          *(_DWORD *)a1 = v43;
          *(_DWORD *)(a1 + 4) = v13;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = v11;
        *(_BYTE *)a1 = 0;
        v27 = *(_WORD *)((char *)&v43 + 1);
        *(_BYTE *)(a1 + 3) = BYTE3(v43);
        *(_WORD *)(a1 + 1) = v27;
      }
      return;
    }
  }
  v14 = v10;
  v15 = fdopendir();
  if ( v15 )
  {
    v44 = (unsigned int)v15;
    v45 = 1;
    v43 = 0x100000001LL;
    v39 = a4;
    v40 = a1;
    v46 = 0;
    v16 = _rust_alloc(0x18u);
    if ( !v16 )
      alloc::alloc::handle_alloc_error();
    v17 = HIDWORD(v43);
    v18 = v44;
    v19 = v45;
    v20 = v46;
    *(_DWORD *)v16 = v43;
    *(_DWORD *)(v16 + 4) = v17;
    *(_QWORD *)(v16 + 8) = v18;
    *(_DWORD *)(v16 + 16) = v19;
    *(_DWORD *)(v16 + 20) = v20;
    v41 = (unsigned int *)v16;
    v42 = 0;
    while ( 1 )
    {
      LODWORD(v21) = &v43;
      HIDWORD(v21) = &v41;
      <std::sys::unix::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v21);
      if ( !v43 )
        break;
      if ( !v47 )
      {
        *(_QWORD *)v40 = v44;
        goto LABEL_47;
      }
      v55 = v48;
      v56 = (unsigned int *)v49;
      v57 = v50;
      v51 = v44;
      v52 = v45;
      v53 = v46;
      ptr = v47;
      if ( (unsigned __int8)v45 != 4 && (_BYTE)v45 )
      {
        if ( unlinkat(v14, v47, 0) == -1 )
        {
          v33 = *_errno_location();
          *(_BYTE *)(v6 + 2) = 0;
          *(_WORD *)v6 = 0;
          *(_BYTE *)v40 = 0;
          *(_DWORD *)(v40 + 4) = v33;
          goto LABEL_41;
        }
      }
      else
      {
        sub_1DB0A4((int)&v59, 1, v14, (int)v47);
        v22 = v59;
        if ( v59 != 4 )
        {
          *(_DWORD *)&v58[3] = *(_DWORD *)&v60[3];
          *(_DWORD *)v58 = *(_DWORD *)v60;
          v31 = *(_DWORD *)v60;
          *(_DWORD *)(v40 + 4) = *(_DWORD *)&v58[3];
          *(_DWORD *)(v40 + 1) = v31;
          *(_BYTE *)v40 = v22;
LABEL_41:
          v34 = v56;
          __dmb(0xBu);
          do
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          if ( v35 == 1 )
          {
            __dmb(0xBu);
            sub_1A3CCC((int)v56);
          }
          v36 = ptr;
          v12 = v55 == 0;
          *(_BYTE *)ptr = 0;
          if ( !v12 )
            _rust_dealloc(v36);
LABEL_47:
          v37 = v41;
          __dmb(0xBu);
          do
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          if ( v38 == 1 )
          {
            __dmb(0xBu);
            sub_1A3CCC((int)v41);
          }
          return;
        }
      }
      v23 = v56;
      __dmb(0xBu);
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      if ( v24 == 1 )
      {
        __dmb(0xBu);
        sub_1A3CCC((int)v56);
      }
      v25 = ptr;
      v12 = v55 == 0;
      *(_BYTE *)ptr = 0;
      if ( !v12 )
        _rust_dealloc(v25);
    }
    v28 = v41;
    __dmb(0xBu);
    do
      v29 = __ldrex(v28);
    while ( __strex(v29 - 1, v28) );
    if ( v29 == 1 )
    {
      __dmb(0xBu);
      sub_1A3CCC((int)v41);
    }
    if ( unlinkat(v5, v39, 512) == -1 )
    {
      v32 = *_errno_location();
      *(_BYTE *)(v6 + 2) = 0;
      *(_WORD *)v6 = 0;
      *(_BYTE *)v40 = 0;
      *(_DWORD *)(v40 + 4) = v32;
    }
    else
    {
      *(_BYTE *)v40 = 4;
    }
  }
  else
  {
    v26 = *_errno_location();
    close(v14);
    *(_BYTE *)(a1 + 4) = v26;
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(v6 + 6) = HIBYTE(v26);
    *(_WORD *)(v6 + 4) = v26 >> 8;
  }
}
