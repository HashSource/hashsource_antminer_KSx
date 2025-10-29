int __fastcall <std::env::VarError as core::fmt::Display>::fmt(int a1, int a2)
{
  int v3; // [sp+4h] [bp-24h] BYREF
  int v4; // [sp+8h] [bp-20h] BYREF
  char **v5; // [sp+10h] [bp-18h]
  int v6; // [sp+14h] [bp-14h]
  const char *v7; // [sp+18h] [bp-10h]
  int v8; // [sp+1Ch] [bp-Ch]
  _DWORD v9[2]; // [sp+20h] [bp-8h] BYREF

  if ( *(_DWORD *)(a1 + 4) )
  {
    v3 = a1;
    v6 = 1;
    v8 = 1;
    v7 = (const char *)v9;
    v4 = 0;
    v5 = &off_2E0884;
    v9[1] = sub_1AE5B4;
    v9[0] = &v3;
  }
  else
  {
    v6 = 1;
    v8 = 0;
    v4 = 0;
    v5 = &off_2E088C;
    v7 = aRustc9eb3afe9e;
  }
  return core::fmt::Formatter::write_fmt(a2, &v4);
}
