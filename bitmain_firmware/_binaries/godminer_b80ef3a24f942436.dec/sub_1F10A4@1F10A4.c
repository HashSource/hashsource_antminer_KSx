void __fastcall sub_1F10A4(int a1, int a2, int a3, int a4)
{
  int v5; // r10
  int v6; // r9
  int v10; // r0
  int v11; // r4
  int v12; // r3
  bool v13; // zf
  int v14; // r10
  int v15; // r8
  int v16; // r0
  int v17; // r0
  int v18; // r3
  __int64 v19; // r4
  int v20; // r6
  int v21; // r7
  __int64 v22; // r0
  char v23; // r0
  unsigned int *v24; // r0
  unsigned int v25; // r1
  void *v26; // r0
  unsigned int v27; // r4
  __int16 v28; // r1
  unsigned int *v29; // r0
  unsigned int v30; // r1
  unsigned int v31; // r3
  int v32; // r0
  int v33; // r1
  int v34; // r0
  int v35; // r0
  unsigned int *v36; // r0
  unsigned int v37; // r1
  void *v38; // r0
  unsigned int *v39; // r0
  unsigned int v40; // r1
  int v41; // [sp+8h] [bp-7Ch]
  int v42; // [sp+10h] [bp-74h]
  unsigned int *v43; // [sp+20h] [bp-64h] BYREF
  char v44; // [sp+24h] [bp-60h]
  __int64 v45; // [sp+28h] [bp-5Ch] BYREF
  __int64 v46; // [sp+30h] [bp-54h]
  int v47; // [sp+38h] [bp-4Ch]
  int v48; // [sp+3Ch] [bp-48h]
  void *v49; // [sp+40h] [bp-44h]
  int v50; // [sp+44h] [bp-40h]
  int v51; // [sp+48h] [bp-3Ch]
  int v52; // [sp+4Ch] [bp-38h]
  __int64 v53; // [sp+50h] [bp-34h]
  int v54; // [sp+58h] [bp-2Ch]
  int v55; // [sp+5Ch] [bp-28h]
  void *ptr; // [sp+60h] [bp-24h]
  int v57; // [sp+64h] [bp-20h]
  unsigned int *v58; // [sp+68h] [bp-1Ch]
  int v59; // [sp+6Ch] [bp-18h]
  _BYTE v60[7]; // [sp+74h] [bp-10h]
  char v61; // [sp+7Ch] [bp-8h] BYREF
  _BYTE v62[7]; // [sp+7Dh] [bp-7h]

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
      v13 = v11 == 40;
      if ( v11 != 40 )
        v13 = v11 == 20;
      BYTE3(v45) = 0;
      *(_WORD *)((char *)&v45 + 1) = 0;
      HIDWORD(v45) = v11;
      LOBYTE(v45) = 0;
      if ( v13 )
      {
        v14 = HIDWORD(v45);
        if ( a2 )
        {
          if ( unlinkat(a3, a4, 0, v12) == -1 )
          {
            v32 = *_errno_location();
            *(_DWORD *)a1 = 0;
            *(_DWORD *)(a1 + 4) = v32;
          }
          else
          {
            *(_BYTE *)a1 = 4;
          }
        }
        else
        {
          *(_DWORD *)a1 = v45;
          *(_DWORD *)(a1 + 4) = v14;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 4) = v11;
        *(_BYTE *)a1 = 0;
        v28 = *(_WORD *)((char *)&v45 + 1);
        *(_BYTE *)(a1 + 3) = BYTE3(v45);
        *(_WORD *)(a1 + 1) = v28;
      }
      return;
    }
  }
  v15 = v10;
  v16 = fdopendir();
  if ( v16 )
  {
    v46 = (unsigned int)v16;
    v47 = 1;
    v45 = 0x100000001LL;
    v41 = a4;
    v42 = a1;
    v48 = 0;
    v17 = _rust_alloc(0x18u);
    if ( !v17 )
      alloc::alloc::handle_alloc_error();
    v18 = HIDWORD(v45);
    v19 = v46;
    v20 = v47;
    v21 = v48;
    *(_DWORD *)v17 = v45;
    *(_DWORD *)(v17 + 4) = v18;
    *(_QWORD *)(v17 + 8) = v19;
    *(_DWORD *)(v17 + 16) = v20;
    *(_DWORD *)(v17 + 20) = v21;
    v43 = (unsigned int *)v17;
    v44 = 0;
    while ( 1 )
    {
      LODWORD(v22) = &v45;
      HIDWORD(v22) = &v43;
      <std::sys::unix::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(v22);
      if ( !v45 )
        break;
      if ( !v49 )
      {
        *(_QWORD *)v42 = v46;
        goto LABEL_47;
      }
      v57 = v50;
      v58 = (unsigned int *)v51;
      v59 = v52;
      v53 = v46;
      v54 = v47;
      v55 = v48;
      ptr = v49;
      if ( (unsigned __int8)v47 != 4 && (_BYTE)v47 )
      {
        if ( unlinkat(v15, v49, 0, v49) == -1 )
        {
          v35 = *_errno_location();
          *(_BYTE *)(v6 + 2) = 0;
          *(_WORD *)v6 = 0;
          *(_BYTE *)v42 = 0;
          *(_DWORD *)(v42 + 4) = v35;
          goto LABEL_41;
        }
      }
      else
      {
        sub_1F10A4(&v61, 1);
        v23 = v61;
        if ( v61 != 4 )
        {
          *(_DWORD *)&v60[3] = *(_DWORD *)&v62[3];
          *(_DWORD *)v60 = *(_DWORD *)v62;
          v33 = *(_DWORD *)v62;
          *(_DWORD *)(v42 + 4) = *(_DWORD *)&v60[3];
          *(_DWORD *)(v42 + 1) = v33;
          *(_BYTE *)v42 = v23;
LABEL_41:
          v36 = v58;
          __dmb(0xBu);
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          if ( v37 == 1 )
          {
            __dmb(0xBu);
            sub_1B9CCC((int)v58);
          }
          v38 = ptr;
          v13 = v57 == 0;
          *(_BYTE *)ptr = 0;
          if ( !v13 )
            _rust_dealloc(v38);
LABEL_47:
          v39 = v43;
          __dmb(0xBu);
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          if ( v40 == 1 )
          {
            __dmb(0xBu);
            sub_1B9CCC((int)v43);
          }
          return;
        }
      }
      v24 = v58;
      __dmb(0xBu);
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      if ( v25 == 1 )
      {
        __dmb(0xBu);
        sub_1B9CCC((int)v58);
      }
      v26 = ptr;
      v13 = v57 == 0;
      *(_BYTE *)ptr = 0;
      if ( !v13 )
        _rust_dealloc(v26);
    }
    v29 = v43;
    __dmb(0xBu);
    do
    {
      v30 = __ldrex(v29);
      v31 = __strex(v30 - 1, v29);
    }
    while ( v31 );
    if ( v30 == 1 )
    {
      __dmb(0xBu);
      sub_1B9CCC((int)v43);
    }
    if ( unlinkat(v5, v41, 512, v31) == -1 )
    {
      v34 = *_errno_location();
      *(_BYTE *)(v6 + 2) = 0;
      *(_WORD *)v6 = 0;
      *(_BYTE *)v42 = 0;
      *(_DWORD *)(v42 + 4) = v34;
    }
    else
    {
      *(_BYTE *)v42 = 4;
    }
  }
  else
  {
    v27 = *_errno_location();
    close(v15);
    *(_BYTE *)(a1 + 4) = v27;
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(v6 + 6) = HIBYTE(v27);
    *(_WORD *)(v6 + 4) = v27 >> 8;
  }
}
