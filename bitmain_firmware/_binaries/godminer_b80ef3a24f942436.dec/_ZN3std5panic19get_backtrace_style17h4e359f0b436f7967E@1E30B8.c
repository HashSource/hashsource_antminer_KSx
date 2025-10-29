int std::panic::get_backtrace_style()
{
  int v0; // r1
  int result; // r0
  void *v2; // r4
  size_t v3; // r5
  char v4; // r7
  int v5; // r1
  size_t v6; // [sp+4h] [bp-Ch] BYREF
  void *s1; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  v0 = dword_3123DC;
  __dmb(0xBu);
  result = 0;
  switch ( v0 )
  {
    case 0:
      std::env::_var_os(&v6, aRustBacktrace, 0xEu);
      v2 = s1;
      if ( !s1 )
        goto LABEL_16;
      v3 = v6;
      if ( v8 == 4 )
      {
        v4 = bcmp(s1, "fullIterOnce/", 4u) == 0;
      }
      else
      {
        v4 = 0;
        if ( v8 == 1 )
        {
          v4 = 0;
          if ( *(_BYTE *)s1 == 48 )
            v4 = -2;
        }
      }
      if ( v3 )
        _rust_dealloc(v2);
      if ( (v4 & 3) != 0 )
      {
        if ( (v4 & 3) == 1 )
        {
          v5 = 2;
          result = 1;
        }
        else
        {
LABEL_16:
          v5 = 3;
          result = 2;
        }
      }
      else
      {
        v5 = 1;
        result = 0;
      }
      __dmb(0xBu);
      dword_3123DC = v5;
      return result;
    case 1:
      return result;
    case 2:
      return 1;
    case 3:
      return 2;
    default:
      core::panicking::panic((int)aInternalErrorE_0, 40, (int)&off_2E9EBC);
  }
}
