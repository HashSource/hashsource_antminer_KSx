int __fastcall sub_21AB04(char **a1)
{
  char v2; // r0
  int v3; // r5
  char *v4; // r1
  bool v5; // r0
  char *v6; // r3
  int *v7; // r2
  int *v8; // r1
  int *v9; // r2
  int *v10; // r2
  int *v12; // r2
  int *v13; // r2
  char v14; // r6
  char *v15; // r0
  unsigned int v16; // r1
  char *v17; // [sp+10h] [bp-10h] BYREF
  char v18; // [sp+14h] [bp-Ch]

  v2 = sub_21A7A0(a1);
  if ( v2 == 2 )
    return 1;
  v4 = *a1;
  v5 = v2 != 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      v6 = a1[2];
      if ( v6 >= a1[1] || v6[(_DWORD)v4] != 112 )
        break;
      v7 = (int *)a1[4];
      a1[2] = v6 + 1;
      if ( v5 )
      {
        if ( v7 && <str as core::fmt::Display>::fmt(asc_29BEDB, 2u, v7) )
          return 1;
      }
      else if ( v7 )
      {
        v3 = 1;
        if ( <str as core::fmt::Display>::fmt(asc_29BD0A, 1u, v7) )
          return v3;
      }
      if ( !*a1 )
      {
        v12 = (int *)a1[4];
        if ( !v12 )
          return 0;
        return <str as core::fmt::Display>::fmt(asc_29BED9, 1u, v12);
      }
      sub_217894((int)&v17, a1);
      if ( !v17 )
      {
        v13 = (int *)a1[4];
        v14 = v18;
        if ( !v13 )
          goto LABEL_35;
        v15 = aInvalidSyntax;
        if ( v18 )
          v15 = aRecursionLimit;
        v16 = 25;
        if ( !v18 )
          v16 = 16;
        v3 = 1;
        if ( !<str as core::fmt::Display>::fmt(v15, v16, v13) )
        {
LABEL_35:
          *((_BYTE *)a1 + 4) = v14;
          *a1 = 0;
          return 0;
        }
        return v3;
      }
      v8 = (int *)a1[4];
      if ( v8 )
      {
        v3 = 1;
        if ( <rustc_demangle::v0::Ident as core::fmt::Display>::fmt(&v17, v8) )
          return v3;
        v9 = (int *)a1[4];
        if ( v9 )
        {
          if ( <str as core::fmt::Display>::fmt(asc_29BF0D, 3u, v9) )
            return v3;
        }
      }
      if ( sub_219C0C((int)a1) )
        return 1;
      v4 = *a1;
      v5 = 1;
      if ( !*a1 )
        goto LABEL_22;
    }
  }
  v3 = 0;
  if ( !v5 )
    return v3;
LABEL_22:
  v10 = (int *)a1[4];
  return v10 && <str as core::fmt::Display>::fmt(asc_29BD0D, 1u, v10) != 0;
}
