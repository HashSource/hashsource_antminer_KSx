int __fastcall sub_7AD80(int result)
{
  _DWORD **v1; // r8
  unsigned int v2; // r1
  unsigned int v3; // r2
  _BYTE *v4; // r7
  int v5; // r2
  unsigned int v6; // r2
  _DWORD v7[6]; // [sp+10h] [bp-38h] BYREF
  _DWORD v8[2]; // [sp+28h] [bp-20h] BYREF
  int v9; // [sp+30h] [bp-18h] BYREF
  int *v10; // [sp+34h] [bp-14h]
  char **v11; // [sp+38h] [bp-10h]
  int v12; // [sp+3Ch] [bp-Ch]
  const char *v13; // [sp+40h] [bp-8h]
  int v14; // [sp+44h] [bp-4h]

  v1 = (_DWORD **)result;
  v2 = dword_2E9698;
  __dmb(0xBu);
  while ( 2 )
  {
    switch ( v2 )
    {
      case 0u:
      case 1u:
        result = (int)&dword_2E9698;
        v3 = __ldrex((unsigned int *)&dword_2E9698);
        if ( v3 != v2 )
        {
          __clrex();
LABEL_11:
          v2 = v3;
          __dmb(0xBu);
          continue;
        }
        if ( __strex(2u, (unsigned int *)&dword_2E9698) )
          goto LABEL_11;
        __dmb(0xBu);
        v4 = (_BYTE *)**v1;
        v5 = (*v1)[1];
        **v1 = 0;
        v9 = 1;
        v10 = &dword_2E9698;
        if ( !v4 )
          core::panicking::panic((int)aCalledOptionUn, 43, (int)&off_2CA0E4);
        *v4 = 1;
        *(_BYTE *)(v5 + 28) = 0;
        *(_DWORD *)v5 = 0;
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v5 + 8) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        *(_DWORD *)(v5 + 16) = 0;
        *(_DWORD *)(v5 + 24) = 0;
        *(_DWORD *)(v5 + 20) = 1;
        v9 = 4;
        __dmb(0xBu);
        do
          v6 = __ldrex((unsigned int *)&dword_2E9698);
        while ( __strex(4u, (unsigned int *)&dword_2E9698) );
        if ( v6 == 3 )
          return syscall(240, v10, 129, 0x7FFFFFFF);
        return result;
      case 2u:
        v2 = __ldrex((unsigned int *)&dword_2E9698);
        if ( v2 != 2 )
        {
          __clrex();
LABEL_13:
          result = 0;
          __dmb(0xBu);
          continue;
        }
        if ( __strex(3u, (unsigned int *)&dword_2E9698) )
          goto LABEL_13;
LABEL_14:
        v9 = 0;
        do
        {
          result = dword_2E9698;
          if ( dword_2E9698 != 3 )
            break;
          result = syscall(240, &dword_2E9698, 137, 3, v9, 0, -1);
          if ( result > -1 )
            break;
          result = *_errno_location();
        }
        while ( result == 4 );
        v2 = dword_2E9698;
        __dmb(0xBu);
        continue;
      case 3u:
        goto LABEL_14;
      case 4u:
        return result;
      default:
        v7[4] = v8;
        v7[3] = 1;
        v7[5] = 1;
        v7[0] = 0;
        v11 = &off_2CADD8;
        v8[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
        v8[0] = &v9;
        v7[2] = &off_2C9418;
        v12 = 1;
        v14 = 0;
        v13 = aRustc9eb3afe9e;
        v9 = 0;
        core::panicking::panic_fmt((int)v7, (int)&off_2CA0D4);
    }
  }
}
