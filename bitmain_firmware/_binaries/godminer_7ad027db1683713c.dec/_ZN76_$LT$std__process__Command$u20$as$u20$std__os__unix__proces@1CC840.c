void __fastcall <std::process::Command as std::os::unix::process::CommandExt>::exec(int *a1, int a2)
{
  int *v4; // r11
  int v5; // r3
  _DWORD *v6; // r5
  _DWORD *v7; // r6
  int v8; // r4
  int v9; // r1
  unsigned int v10; // r2
  int v11; // r1
  unsigned int v12; // r1
  unsigned int v13; // r1
  void *v14; // r4
  _DWORD *v15; // r6
  int v16; // r5
  int v17; // [sp+10h] [bp+0h] BYREF
  void *ptr; // [sp+14h] [bp+4h]
  int v19; // [sp+18h] [bp+8h]
  int v20; // [sp+1Ch] [bp+Ch]
  void *v21; // [sp+20h] [bp+10h]
  int fd; // [sp+28h] [bp+18h] BYREF
  int v23; // [sp+2Ch] [bp+1Ch]
  int v24; // [sp+30h] [bp+20h]
  unsigned int v25; // [sp+34h] [bp+24h]
  unsigned int v26; // [sp+38h] [bp+28h]
  unsigned int v27; // [sp+3Ch] [bp+2Ch]
  unsigned int v28; // [sp+40h] [bp+30h]
  unsigned int v29; // [sp+44h] [bp+34h]
  unsigned int v30; // [sp+48h] [bp+38h]
  unsigned int v31; // [sp+50h] [bp+40h]
  unsigned int v32; // [sp+54h] [bp+44h]
  unsigned int v33; // [sp+58h] [bp+48h]
  unsigned int v34; // [sp+5Ch] [bp+4Ch]
  unsigned int v35; // [sp+60h] [bp+50h]
  unsigned int v36; // [sp+64h] [bp+54h]
  _DWORD v37[2]; // [sp+68h] [bp+58h] BYREF
  unsigned int v38[7]; // [sp+70h] [bp+60h] BYREF

  v4 = &v17;
  sub_1DE000((int)&v17, a2);
  if ( *(_BYTE *)(a2 + 125) )
  {
    v6 = ptr;
    *a1 = 2;
    a1[1] = (int)&off_2CACC0;
    if ( v6 )
    {
      if ( v19 )
      {
        v7 = v6 + 1;
        v8 = 8 * v19;
        do
        {
          *(_BYTE *)*(v7 - 1) = 0;
          if ( *v7 )
            _rust_dealloc((void *)*(v7 - 1));
          v8 -= 8;
          v7 += 2;
        }
        while ( v8 );
      }
      if ( v17 )
        _rust_dealloc(v6);
      if ( v20 )
        _rust_dealloc(v21);
    }
    return;
  }
  sub_1DEBF0(&fd, a2, 0, v5, 1);
  if ( v25 != 3 )
  {
    v31 = v25;
    v32 = v26;
    v33 = v27;
    v34 = v28;
    v35 = v29;
    v36 = v30;
    if ( (unsigned int)dword_2E966C <= 0x3FFFFFFF && (dword_2E966C & 0x3FFFFFFE) != 0x3FFFFFFE )
    {
      v10 = __ldrex((unsigned int *)&dword_2E966C);
      if ( v10 == dword_2E966C )
      {
        if ( !__strex(dword_2E966C + 1, (unsigned int *)&dword_2E966C) )
        {
          __dmb(0xBu);
LABEL_22:
          v38[0] = v31;
          v38[1] = v32;
          v38[2] = v33;
          v38[3] = v34;
          v38[4] = v35;
          v38[5] = v36;
          if ( !ptr )
            v4 = 0;
          sub_1E35DC((int)v37, a2, v38, (int)v4);
          v11 = v37[1];
          *a1 = v37[0];
          a1[1] = v11;
          __dmb(0xBu);
          do
          {
            v12 = __ldrex((unsigned int *)&dword_2E966C);
            v13 = v12 - 1;
          }
          while ( __strex(v13, (unsigned int *)&dword_2E966C) );
          if ( (v13 & 0xBFFFFFFF) == 0x80000000 )
            std::sys::unix::locks::futex_rwlock::RwLock::wake_writer_or_readers((unsigned int *)&dword_2E966C, v13);
          goto LABEL_28;
        }
      }
      else
      {
        __clrex();
      }
    }
    std::sys::unix::locks::futex_rwlock::RwLock::read_contended((unsigned int *)&dword_2E966C);
    goto LABEL_22;
  }
  v9 = v23;
  *a1 = fd;
  a1[1] = v9;
LABEL_28:
  v14 = ptr;
  if ( ptr )
  {
    if ( v19 )
    {
      v15 = (char *)ptr + 4;
      v16 = 8 * v19;
      do
      {
        *(_BYTE *)*(v15 - 1) = 0;
        if ( *v15 )
          _rust_dealloc((void *)*(v15 - 1));
        v16 -= 8;
        v15 += 2;
      }
      while ( v16 );
    }
    if ( v17 )
      _rust_dealloc(v14);
    if ( v20 )
      _rust_dealloc(v21);
  }
  if ( v25 != 3 )
  {
    if ( fd != -1 )
      close(fd);
    if ( v23 != -1 )
      close(v23);
    if ( v24 != -1 )
      close(v24);
  }
}
