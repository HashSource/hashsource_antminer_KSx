int __fastcall sub_7C5AC(int **a1)
{
  int result; // r0
  unsigned int v3; // r1
  int v4; // r5
  int v5; // r0
  unsigned int v6; // r1
  _DWORD v7[6]; // [sp+10h] [bp-38h] BYREF
  _DWORD v8[2]; // [sp+28h] [bp-20h] BYREF
  int v9; // [sp+30h] [bp-18h] BYREF
  int *v10; // [sp+34h] [bp-14h]
  char **v11; // [sp+38h] [bp-10h]
  int v12; // [sp+3Ch] [bp-Ch]
  const char *v13; // [sp+40h] [bp-8h]
  int v14; // [sp+44h] [bp-4h]

  result = dword_30CC44;
  __dmb(0xBu);
  while ( 2 )
  {
    switch ( result )
    {
      case 0:
      case 1:
        v3 = __ldrex((unsigned int *)&dword_30CC44);
        if ( v3 != result )
        {
          __clrex();
LABEL_11:
          result = v3;
          __dmb(0xBu);
          continue;
        }
        if ( __strex(2u, (unsigned int *)&dword_30CC44) )
          goto LABEL_11;
        __dmb(0xBu);
        v4 = **a1;
        **a1 = 0;
        v9 = 1;
        v10 = &dword_30CC44;
        if ( !v4 )
          core::panicking::panic(aCalledOptionUn, 43, &off_2E00E4);
        v5 = _rust_alloc(0x2000u);
        if ( !v5 )
          alloc::alloc::handle_alloc_error(0x2000);
        *(_DWORD *)(v4 + 8) = v5;
        result = 4;
        *(_DWORD *)v4 = 0;
        *(_DWORD *)(v4 + 12) = 0x2000;
        *(_DWORD *)(v4 + 16) = 0;
        *(_DWORD *)(v4 + 20) = 0;
        *(_DWORD *)(v4 + 24) = 0;
        *(_BYTE *)(v4 + 4) = 0;
        v9 = 4;
        __dmb(0xBu);
        do
          v6 = __ldrex((unsigned int *)&dword_30CC44);
        while ( __strex(4u, (unsigned int *)&dword_30CC44) );
        if ( v6 == 3 )
          return syscall(240, v10, 129, 0x7FFFFFFF);
        return result;
      case 2:
        result = __ldrex((unsigned int *)&dword_30CC44);
        if ( result != 2 )
        {
          __clrex();
LABEL_13:
          __dmb(0xBu);
          continue;
        }
        if ( __strex(3u, (unsigned int *)&dword_30CC44) )
          goto LABEL_13;
LABEL_14:
        v9 = 0;
        while ( dword_30CC44 == 3 && syscall(240, &dword_30CC44, 137, 3, v9, 0, -1) <= -1 && *_errno_location() == 4 )
          ;
        result = dword_30CC44;
        __dmb(0xBu);
        continue;
      case 3:
        goto LABEL_14;
      case 4:
        return result;
      default:
        v7[4] = v8;
        v7[3] = 1;
        v7[5] = 1;
        v7[0] = 0;
        v11 = &off_2E0DD8;
        v8[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
        v8[0] = &v9;
        v7[2] = &off_2DF418;
        v12 = 1;
        v14 = 0;
        v13 = aRustc9eb3afe9e;
        v9 = 0;
        core::panicking::panic_fmt(v7, &off_2E00D4);
    }
  }
}
