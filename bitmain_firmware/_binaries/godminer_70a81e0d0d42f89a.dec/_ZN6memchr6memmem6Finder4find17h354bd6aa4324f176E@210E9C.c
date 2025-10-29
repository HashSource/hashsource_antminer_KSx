int __fastcall memchr::memmem::Finder::find(int a1, unsigned int a2, unsigned int a3)
{
  int v4; // r1
  int v6; // r3
  unsigned __int8 *v7; // r2
  unsigned int v8; // r9
  unsigned int v10; // r1
  bool v11; // cf
  int v12; // r7
  unsigned __int8 *v13; // r1
  __int64 v14; // r10
  int v15; // r7
  int v16; // r8
  unsigned int v17; // r0
  unsigned __int8 *v18; // r1
  int v19; // t1
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r0
  unsigned __int8 *v23; // [sp+10h] [bp-Ch]
  _DWORD v24[2]; // [sp+14h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1 + 44);
  v6 = 0;
  v7 = *(unsigned __int8 **)a1;
  v8 = *(_DWORD *)(a1 + 4);
  v24[1] = 0;
  v24[0] = v4 != 0;
  if ( v8 > a3 )
    return v6;
  v10 = *(_DWORD *)(a1 + 16);
  v6 = 1;
  v11 = v10 >= 2;
  v12 = v10 - 2;
  v13 = (unsigned __int8 *)(a1 + 8);
  if ( !v11 )
    v12 = 2;
  if ( v12 == 2 )
  {
    if ( a3 >= 0x10 )
    {
      return sub_211728(a1, v13, v24, a2, a3, v7, v8);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 32);
      v15 = 0;
      v16 = 0;
      if ( v8 )
      {
        v16 = 0;
        v17 = v8;
        v18 = (unsigned __int8 *)a2;
        do
        {
          v19 = *v18++;
          --v17;
          v16 = v19 + 2 * v16;
        }
        while ( v17 );
      }
      v23 = v7;
      if ( v16 == (_DWORD)v14 )
        goto LABEL_16;
      while ( a3 > v8 )
      {
        v20 = *(unsigned __int8 *)(a2 + v15);
        --a3;
        v21 = *(unsigned __int8 *)(a2 + v8 + v15++);
        v16 = v21 + 2 * (v16 - HIDWORD(v14) * v20);
        if ( v16 == (_DWORD)v14 )
        {
LABEL_16:
          v22 = sub_7D574((unsigned __int8 *)(a2 + v15), a3, v7, v8);
          v7 = v23;
          if ( v22 )
            return 1;
        }
      }
      return 0;
    }
  }
  else
  {
    if ( v12 != 1 )
      return v6;
    if ( a3 )
      return memchr::memchr::fallback::memchr(*v13, a2, a3);
    else
      return 0;
  }
}
