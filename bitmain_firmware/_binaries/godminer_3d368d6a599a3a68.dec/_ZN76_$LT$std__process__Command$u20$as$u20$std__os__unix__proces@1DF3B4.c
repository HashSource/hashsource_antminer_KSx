void __fastcall <std::process::Command as std::os::unix::process::CommandExt>::exec(int *a1, int a2)
{
  int *v4; // r11
  _DWORD *v5; // r5
  _DWORD *v6; // r6
  int v7; // r4
  int v8; // r1
  unsigned int v9; // r2
  int v10; // r1
  unsigned int v11; // r1
  unsigned int v12; // r1
  void *v13; // r4
  _DWORD *v14; // r6
  int v15; // r5
  int v16; // [sp+10h] [bp+0h] BYREF
  void *ptr; // [sp+14h] [bp+4h]
  int v18; // [sp+18h] [bp+8h]
  int v19; // [sp+1Ch] [bp+Ch]
  void *v20; // [sp+20h] [bp+10h]
  int fd; // [sp+28h] [bp+18h] BYREF
  int v22; // [sp+2Ch] [bp+1Ch]
  int v23; // [sp+30h] [bp+20h]
  int v24; // [sp+34h] [bp+24h]
  int v25; // [sp+38h] [bp+28h]
  int v26; // [sp+3Ch] [bp+2Ch]
  int v27; // [sp+40h] [bp+30h]
  int v28; // [sp+44h] [bp+34h]
  int v29; // [sp+48h] [bp+38h]
  int v30; // [sp+50h] [bp+40h]
  int v31; // [sp+54h] [bp+44h]
  int v32; // [sp+58h] [bp+48h]
  int v33; // [sp+5Ch] [bp+4Ch]
  int v34; // [sp+60h] [bp+50h]
  int v35; // [sp+64h] [bp+54h]
  _DWORD v36[2]; // [sp+68h] [bp+58h] BYREF
  _DWORD v37[7]; // [sp+70h] [bp+60h] BYREF

  v4 = &v16;
  sub_1F0B74(&v16);
  if ( *(_BYTE *)(a2 + 125) )
  {
    v5 = ptr;
    *a1 = 2;
    a1[1] = (int)&off_2DFCC0;
    if ( v5 )
    {
      if ( v18 )
      {
        v6 = v5 + 1;
        v7 = 8 * v18;
        do
        {
          *(_BYTE *)*(v6 - 1) = 0;
          if ( *v6 )
            _rust_dealloc((void *)*(v6 - 1));
          v7 -= 8;
          v6 += 2;
        }
        while ( v7 );
      }
      if ( v16 )
        _rust_dealloc(v5);
      if ( v19 )
        _rust_dealloc(v20);
    }
    return;
  }
  sub_1F1764(&fd, a2, 0);
  if ( v24 != 3 )
  {
    v30 = v24;
    v31 = v25;
    v32 = v26;
    v33 = v27;
    v34 = v28;
    v35 = v29;
    if ( (unsigned int)dword_307C9C <= 0x3FFFFFFF && (dword_307C9C & 0x3FFFFFFE) != 0x3FFFFFFE )
    {
      v9 = __ldrex((unsigned int *)&dword_307C9C);
      if ( v9 == dword_307C9C )
      {
        if ( !__strex(dword_307C9C + 1, (unsigned int *)&dword_307C9C) )
        {
          __dmb(0xBu);
LABEL_22:
          v37[0] = v30;
          v37[1] = v31;
          v37[2] = v32;
          v37[3] = v33;
          v37[4] = v34;
          v37[5] = v35;
          if ( !ptr )
            v4 = 0;
          sub_1F6150(v36, a2, v37, v4);
          v10 = v36[1];
          *a1 = v36[0];
          a1[1] = v10;
          __dmb(0xBu);
          do
          {
            v11 = __ldrex((unsigned int *)&dword_307C9C);
            v12 = v11 - 1;
          }
          while ( __strex(v12, (unsigned int *)&dword_307C9C) );
          if ( (v12 & 0xBFFFFFFF) == 0x80000000 )
            std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_307C9C, v12);
          goto LABEL_28;
        }
      }
      else
      {
        __clrex();
      }
    }
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_307C9C);
    goto LABEL_22;
  }
  v8 = v22;
  *a1 = fd;
  a1[1] = v8;
LABEL_28:
  v13 = ptr;
  if ( ptr )
  {
    if ( v18 )
    {
      v14 = (char *)ptr + 4;
      v15 = 8 * v18;
      do
      {
        *(_BYTE *)*(v14 - 1) = 0;
        if ( *v14 )
          _rust_dealloc((void *)*(v14 - 1));
        v15 -= 8;
        v14 += 2;
      }
      while ( v15 );
    }
    if ( v16 )
      _rust_dealloc(v13);
    if ( v19 )
      _rust_dealloc(v20);
  }
  if ( v24 != 3 )
  {
    if ( fd != -1 )
      close(fd);
    if ( v22 != -1 )
      close(v22);
    if ( v23 != -1 )
      close(v23);
  }
}
