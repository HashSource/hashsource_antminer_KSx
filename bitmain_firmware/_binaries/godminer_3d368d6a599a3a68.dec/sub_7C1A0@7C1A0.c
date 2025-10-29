unsigned int *__fastcall sub_7C1A0(unsigned int *a1, int **a2)
{
  unsigned int *result; // r0
  int v5; // r5
  _BOOL4 v7; // r8
  int v8; // r0
  int v9; // r5
  int v10; // r6
  unsigned int v11; // r1
  unsigned int v12; // r2
  _DWORD v13[6]; // [sp+10h] [bp-38h] BYREF
  _DWORD v14[2]; // [sp+28h] [bp-20h] BYREF
  int v15; // [sp+30h] [bp-18h] BYREF
  unsigned int *v16; // [sp+34h] [bp-14h]
  char **v17; // [sp+38h] [bp-10h]
  int v18; // [sp+3Ch] [bp-Ch]
  const char *v19; // [sp+40h] [bp-8h]
  int v20; // [sp+44h] [bp-4h]

  result = (unsigned int *)*a1;
  __dmb(0xBu);
  while ( 1 )
  {
    switch ( (unsigned int)result )
    {
      case 0u:
        result = (unsigned int *)__ldrex(a1);
        if ( result )
          goto LABEL_9;
        if ( __strex(2u, a1) )
          goto LABEL_10;
        __dmb(0xBu);
        v5 = **a2;
        **a2 = 0;
        v15 = 1;
        v16 = a1;
        if ( !v5 )
          core::panicking::panic(aCalledOptionUn, 43, &off_2DF0C4);
        if ( *(_BYTE *)(v5 + 20) )
          goto LABEL_33;
        *(_BYTE *)(v5 + 20) = 1;
        while ( !__ldrex(&dword_307C30) )
        {
          if ( !__strex(1u, &dword_307C30) )
          {
            __dmb(0xBu);
            goto LABEL_23;
          }
        }
        __clrex();
        std::sys::unix::locks::futex_mutex::Mutex::lock_contended(&dword_307C30);
LABEL_23:
        v7 = 0;
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0 )
        {
          v7 = !std::panicking::panic_count::is_zero_slow_path();
          v8 = *(_DWORD *)(v5 + 16);
          if ( !v8 )
            goto LABEL_27;
        }
        else
        {
          v8 = *(_DWORD *)(v5 + 16);
          if ( !v8 )
            goto LABEL_27;
        }
        v9 = *(_DWORD *)(v5 + 12);
        v10 = 28 * v8;
        do
        {
          v13[0] = v9 + 16;
          sub_1F9A0C(v9, v13, &off_2DF49C);
          v10 -= 28;
          v9 += 28;
        }
        while ( v10 );
LABEL_27:
        if ( !v7
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT & 0x7FFFFFFF) != 0
          && !std::panicking::panic_count::is_zero_slow_path() )
        {
          byte_307C34 = 1;
        }
        __dmb(0xBu);
        do
          v11 = __ldrex(&dword_307C30);
        while ( __strex(0, &dword_307C30) );
        if ( v11 == 2 )
          syscall(240, &dword_307C30, 129, 1);
LABEL_33:
        result = v16;
        v15 = 4;
        __dmb(0xBu);
        do
          v12 = __ldrex(result);
        while ( __strex(4u, result) );
        if ( v12 == 3 )
          return (unsigned int *)syscall(240, v16, 129, 0x7FFFFFFF);
        return result;
      case 1u:
        v17 = &off_2DFDE0;
        v18 = 1;
        v20 = 0;
        v15 = 0;
        v19 = aRustc9eb3afe9e;
        core::panicking::panic_fmt(&v15, &off_2DE854);
      case 2u:
        result = (unsigned int *)__ldrex(a1);
        if ( result != (unsigned int *)2 )
        {
LABEL_9:
          __clrex();
LABEL_10:
          __dmb(0xBu);
          continue;
        }
        if ( __strex(3u, a1) )
          goto LABEL_10;
LABEL_11:
        v15 = 0;
        while ( *a1 == 3 && syscall(240, a1, 137, 3, v15, 0, -1) <= -1 && *_errno_location() == 4 )
          ;
        result = (unsigned int *)*a1;
        __dmb(0xBu);
        break;
      case 3u:
        goto LABEL_11;
      case 4u:
        return result;
      default:
        v13[4] = v14;
        v13[3] = 1;
        v13[5] = 1;
        v13[0] = 0;
        v17 = &off_2DFDD8;
        v14[1] = <core::fmt::Arguments as core::fmt::Display>::fmt;
        v14[0] = &v15;
        v13[2] = &off_2DE418;
        v18 = 1;
        v20 = 0;
        v19 = aRustc9eb3afe9e;
        v15 = 0;
        core::panicking::panic_fmt(v13, &off_2DE854);
    }
  }
}
