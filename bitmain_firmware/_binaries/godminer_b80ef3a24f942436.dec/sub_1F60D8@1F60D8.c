void *sub_1F60D8()
{
  int v0; // r4
  int v1; // r0
  int v2; // r0
  char *v3; // r4
  size_t v4; // r0
  int v6; // r0
  int v7; // r0
  struct sigaltstack oss; // [sp+10h] [bp-38h] BYREF
  _DWORD v9[2]; // [sp+20h] [bp-28h] BYREF
  char **v10; // [sp+28h] [bp-20h]
  int v11; // [sp+2Ch] [bp-1Ch]
  int **v12; // [sp+30h] [bp-18h]
  int v13; // [sp+34h] [bp-14h]
  int *v14; // [sp+38h] [bp-10h] BYREF
  void (__fastcall *v15)(int); // [sp+3Ch] [bp-Ch]
  int v16; // [sp+40h] [bp-8h] BYREF
  int v17; // [sp+44h] [bp-4h]

  v0 = 0;
  if ( byte_312434 )
  {
    memset(&oss, 0, sizeof(oss));
    sigaltstack(0, &oss);
    if ( (oss.ss_flags & 2) != 0 )
    {
      v1 = sysconf(30);
      v2 = ((int (__fastcall *)(_DWORD, int, int, char *, int))mmap64)(
             0,
             v1 + 0x2000,
             3,
             (char *)&stru_20018.st_size + 2,
             -1);
      if ( v2 == -1 )
      {
        v6 = *_errno_location();
        v10 = &off_2EAA98;
        v11 = 1;
        v13 = 1;
        v12 = &v14;
        v9[0] = 0;
        v17 = v6;
        v16 = 0;
        v15 = <std::io::error::Error as core::fmt::Display>::fmt;
        v14 = &v16;
        core::panicking::panic_fmt((int)v9, (int)&off_2EAAA0);
      }
      v3 = (char *)v2;
      v4 = sysconf(30);
      if ( mprotect(v3, v4, 0) )
      {
        v7 = *_errno_location();
        v10 = &off_2EAAB0;
        v11 = 1;
        v13 = 1;
        v12 = &v14;
        v9[0] = 0;
        v17 = v7;
        v16 = 0;
        v15 = <std::io::error::Error as core::fmt::Display>::fmt;
        v14 = &v16;
        core::panicking::panic_fmt((int)v9, (int)&off_2EAAB8);
      }
      oss.ss_sp = &v3[sysconf(30)];
      oss.ss_size = 0x2000;
      oss.ss_flags = 0;
      sigaltstack(&oss, 0);
      return oss.ss_sp;
    }
  }
  return (void *)v0;
}
