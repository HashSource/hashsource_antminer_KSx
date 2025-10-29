unsigned int *__fastcall sub_7B3D4(char **a1)
{
  unsigned int *result; // r0
  char *v3; // r2
  char v4; // r3
  int v5; // r0
  int v6; // r4
  int v7; // r0
  int addr; // r0
  unsigned int v10; // r2
  int v11; // r4
  void *v12; // r4
  int v13; // r0
  unsigned int v14; // r2
  int v15; // [sp+10h] [bp-40h] BYREF
  unsigned int *v16; // [sp+14h] [bp-3Ch]
  char **v17; // [sp+18h] [bp-38h]
  int v18; // [sp+1Ch] [bp-34h]
  _DWORD *v19; // [sp+20h] [bp-30h]
  int v20; // [sp+24h] [bp-2Ch]
  _DWORD v21[2]; // [sp+28h] [bp-28h] BYREF
  struct sigaltstack ss; // [sp+30h] [bp-20h] BYREF
  int v23; // [sp+3Ch] [bp-14h]
  const char *v24; // [sp+40h] [bp-10h]
  int v25; // [sp+44h] [bp-Ch]
  char v26; // [sp+4Fh] [bp-1h] BYREF

  result = (unsigned int *)dword_2EAB50;
  __dmb(0xBu);
  while ( 1 )
  {
    switch ( (unsigned int)result )
    {
      case 0u:
        result = (unsigned int *)__ldrex((unsigned int *)&dword_2EAB50);
        if ( result )
          goto LABEL_9;
        if ( __strex(2u, (unsigned int *)&dword_2EAB50) )
          goto LABEL_10;
        __dmb(0xBu);
        v3 = *a1;
        v16 = (unsigned int *)&dword_2EAB50;
        v4 = *v3;
        *v3 = 0;
        v15 = 1;
        if ( (v4 & 1) == 0 )
          core::panicking::panic(aCalledOptionUn, 43, &off_2CB0C4);
        v26 = 0;
        v5 = dword_2EAB90;
        __dmb(0xBu);
        if ( v5 != 4 )
          sub_7862C((int)&v26);
        if ( v26 )
          goto LABEL_34;
        v6 = dword_2EAB74;
        if ( v6 == _tls_get_addr(&dword_2D1424) )
        {
          v7 = dword_2EAB78 + 1;
          if ( dword_2EAB78 == -1 )
            core::option::expect_failed(aLockCountOverf, 38, &off_2CB0F4);
        }
        else
        {
          do
          {
            if ( __ldrex(&dword_2EAB70) )
            {
              __clrex();
              goto LABEL_34;
            }
          }
          while ( __strex(1u, &dword_2EAB70) );
          addr = _tls_get_addr(&dword_2D1424);
          __dmb(0xBu);
          dword_2EAB74 = addr;
          v7 = 1;
        }
        dword_2EAB78 = v7;
        LOBYTE(v23) = 0;
        ss.ss_size = 0;
        ss.ss_flags = 1;
        ss.ss_sp = 0;
        if ( dword_2EAB7C )
          core::result::unwrap_failed(aAlreadyBorrowe, 16, v21, &off_2CA2E8, &off_2CAAE4);
        dword_2EAB7C = -1;
        sub_19E4E4(byte_2EAB80);
        --dword_2EAB78;
        ++dword_2EAB7C;
        *(struct sigaltstack *)byte_2EAB80 = ss;
        unk_2EAB8C = v23;
        if ( !dword_2EAB78 )
        {
          dword_2EAB74 = 0;
          __dmb(0xBu);
          do
            v10 = __ldrex(&dword_2EAB70);
          while ( __strex(0, &dword_2EAB70) );
          if ( v10 == 2 )
            syscall(240, &dword_2EAB70, 129, 1);
        }
LABEL_34:
        v11 = dword_2EAB5C;
        if ( dword_2EAB5C )
        {
          ss.ss_size = 0x2000;
          ss.ss_flags = 2;
          ss.ss_sp = 0;
          sigaltstack(&ss, 0);
          v12 = (void *)(v11 - sysconf(30));
          v13 = sysconf(30);
          munmap(v12, v13 + 0x2000);
        }
        result = v16;
        v15 = 4;
        __dmb(0xBu);
        do
          v14 = __ldrex(v16);
        while ( __strex(4u, v16) );
        if ( v14 == 3 )
          return (unsigned int *)syscall(240, v16, 129, 0x7FFFFFFF);
        return result;
      case 1u:
        ss.ss_size = (size_t)&off_2CBDE0;
        v23 = 1;
        v25 = 0;
        ss.ss_sp = 0;
        v24 = aRustc9eb3afe9e;
        core::panicking::panic_fmt(&ss, &off_2CA710);
      case 2u:
        result = (unsigned int *)__ldrex((unsigned int *)&dword_2EAB50);
        if ( result != (unsigned int *)2 )
        {
LABEL_9:
          __clrex();
LABEL_10:
          __dmb(0xBu);
          continue;
        }
        if ( __strex(3u, (unsigned int *)&dword_2EAB50) )
          goto LABEL_10;
LABEL_11:
        ss.ss_sp = 0;
        while ( dword_2EAB50 == 3
             && syscall(240, &dword_2EAB50, 137, 3, ss.ss_sp, 0, -1) <= -1
             && *_errno_location() == 4 )
          ;
        result = (unsigned int *)dword_2EAB50;
        __dmb(0xBu);
        break;
      case 3u:
        goto LABEL_11;
      case 4u:
        return result;
      default:
        v19 = v21;
        v18 = 1;
        v20 = 1;
        v15 = 0;
        ss.ss_size = (size_t)&off_2CBDD8;
        v21[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
        v21[0] = &ss;
        v17 = &off_2CA418;
        v23 = 1;
        v25 = 0;
        v24 = aRustc9eb3afe9e;
        ss.ss_sp = 0;
        core::panicking::panic_fmt(&v15, &off_2CA710);
    }
  }
}
